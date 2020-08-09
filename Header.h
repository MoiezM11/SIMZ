#include <fstream>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <filesystem>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace std::tr2::sys;
using namespace System;
using namespace System::Windows::Forms;
using namespace Bunifu::Framework::UI;
using namespace msclr::interop;

const int node_lenght = 36;
const string entries = "abcdefghijklmnopqrstuvwxyz0123456789";

struct my_trie_node
{
	bool end_of_word = false;
	int frequency = 0;
	vector<string> _file_names;
	my_trie_node* children[node_lenght];
	my_trie_node();
};

class Search_Engine
{
	my_trie_node trie_root;
	void insert_f_name(my_trie_node* temp, string file_Name);
	vector<string>& Search_PVT(string word);
	my_trie_node* insert_word(string word);
	void Insert(string word, string file_Name);
public:
	void Search(string word, ListBox^  listBox2);
	void SearchOR(string wordOne, string wordTwo, ListBox^  listBox2);
	void SearchAND(string wordOne, string wordTwo, ListBox^  listBox2);
	void insert_in_TrieTree(vector<string> file_names, vector<string> file_paths);
	void print(ListBox^ listBox2, TextBox^  txtSearch);
	int NumberOfWords(string input);
	int BoolCheck(string boolType);
	void DirectorySearch(ListBox^ listBox2, TextBox^  txtSearch);
};

void Search_Engine::Insert(string word, string file_Name)
{
	transform(word.begin(), word.end(), word.begin(), tolower);
	string temp_word;
	string::iterator j = word.begin();
	while (j != word.end())
	{
		if (*j == 32)
		{
			insert_f_name(insert_word(temp_word), file_Name);
			temp_word.clear();
			continue;
		}
		temp_word.append(1, *j);
		j++;
	}
	if (temp_word.length())
	{
		insert_f_name(insert_word(temp_word), file_Name);
	}
}

my_trie_node::my_trie_node()
{
	for (int j = 0; j < node_lenght; j++)
	{
		children[j] = nullptr;
	}
}

void Search_Engine::insert_f_name(my_trie_node* temp, string file_Name)
{
	vector<string>::iterator j = find(temp->_file_names.begin(), temp->_file_names.end(), file_Name);
	if (j == temp->_file_names.end())
	{
		temp->_file_names.push_back(file_Name);
	}
}

my_trie_node* Search_Engine::insert_word(string word)
{
	size_t index;
	my_trie_node* current_node = &trie_root;

	string::iterator j = word.begin();
	while (j != word.end())
	{
		index = entries.find(*j);
		if (index < node_lenght)
		{
			if (current_node->children[index] == nullptr)
			{
				current_node->children[index] = new my_trie_node;
			}
			current_node = current_node->children[index];
		}
		j++;
	}
	++current_node->frequency;
	current_node->end_of_word = true;
	return current_node;
}

void Search_Engine::Search(string word, System::Windows::Forms::ListBox^  listBox2)
{
	vector<string> found = Search_PVT(word);
	if (!found.size())
	{
		MessageBox::Show("Not Found!","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		return;
	}
	else
	{
		for (vector<string>::iterator j = found.begin(); j != found.end(); j++)
		{
			string wordOne = *j;
			auto wordTwo = gcnew String(wordOne.c_str());
			listBox2->Items->Add(wordTwo);
		}
	}
}

void Search_Engine::SearchOR(string wordOne, string wordTwo, System::Windows::Forms::ListBox^  listBox2)
{
	vector<string> foundOne = Search_PVT(wordOne);
	vector<string> foundTwo = Search_PVT(wordTwo);
	vector<string> One;

	if (!foundOne.size())
	{
		MessageBox::Show("1st Keyword Not Found!", "1st Keyowrd", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		vector<string>::iterator j = foundOne.begin();

		while (j != foundOne.end())
		{
			One.push_back(*j);
			j++;
		}
	}
	if (!foundTwo.size())
	{
		MessageBox::Show("2nd Keyword Not Found!", "2nd Keyowrd", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		vector<string>::iterator k = foundTwo.begin();

		while (k != foundTwo.end())
		{
			One.push_back(*k);
			k++;
		}
	}

	vector<string> Output;

	sort(One.begin(), One.end());
	One.erase(unique(One.begin(), One.end()), One.end());

	vector<string>::iterator l = One.begin();

	while (l != One.end())
	{
		string wordOne = *l;
		auto wordTwo = gcnew String(wordOne.c_str());
		listBox2->Items->Add(wordTwo);
		l++;
	}

}

void Search_Engine::SearchAND(string wordOne, string wordTwo, System::Windows::Forms::ListBox^  listBox2)
{
	vector<string> foundOne = Search_PVT(wordOne);
	if (!foundOne.size())
	{
		MessageBox::Show("1st Keyword Not Found!", "1st Keyowrd", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	vector<string> foundTwo = Search_PVT(wordTwo);

	if (!foundTwo.size())
	{
		MessageBox::Show("2nd Keyword Not Found!", "2nd Keyowrd", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	vector<string> One, Two;
	vector<string> Output;

	vector<string>::iterator j = foundOne.begin();
	vector<string>::iterator k = foundTwo.begin();

	while (j != foundOne.end())
	{
		One.push_back(*j);
		j++;
	}

	while (k != foundTwo.end())
	{
		Two.push_back(*k);
		k++;
	}
	set_intersection(foundOne.begin(), foundOne.end(), foundTwo.begin(), foundTwo.end(), back_inserter(Output));

	vector<string>::iterator l = Output.begin();

	while (l != Output.end())
	{
		string wordOne = *l;
		auto wordTwo = gcnew String(wordOne.c_str());
		listBox2->Items->Add(wordTwo);
		l++;
	}
}

void Search_Engine::insert_in_TrieTree(vector<string> file_names, vector<string> file_paths)
{
	string word;
	for (unsigned int i = 0; i < file_names.size(); i++)
	{
		ifstream input;
		input.open(file_paths.at(i).c_str(), ios::in);
		if (input.good())
		{
			while (!input.eof())
			{
				input >> word;
				Insert(word, file_names.at(i));
				word.clear();
			}
			input.close();
		}
	}

}

vector<string>& Search_Engine::Search_PVT(string word)
{
	size_t index;
	transform(word.begin(), word.end(), word.begin(), tolower);
	my_trie_node* current_node = &trie_root;
	for (string::iterator j = word.begin(); j != word.end(); j++)
	{
		index = entries.find(*j);
		if (index < node_lenght)
		{
			if (current_node->children[index] == nullptr)
			{
				return vector<string>();
			}
			current_node = current_node->children[index];
		}
	}
	if (current_node->end_of_word)
	{
		return current_node->_file_names;
	}
	//return vector<string>();
}

void Search_Engine::print(System::Windows::Forms::ListBox^  listBox2, System::Windows::Forms::TextBox^  txtSearch)
{
	string word;
	int numberOfWords;
	
	word = marshal_as<string>(txtSearch->Text);

	numberOfWords = NumberOfWords(word);

	if (numberOfWords == 1)
	{
		if (!word.length())
		{
				return;
		}
		Search(word, listBox2);
	}
	else if (numberOfWords == 3)
	{
		istringstream toToken(word);
		vector<string> finalOutput((istream_iterator<string>(toToken)), istream_iterator<string>());
		vector<string>::iterator t = finalOutput.begin();
		string boolType;
		int i = 0;
		int value = 0;
		string wordOne, wordTwo;
		while (t != finalOutput.end())
		{
			i++;
			if (i == 1)
			{
				wordOne = *t;
			}
			if (i == 2)
			{
				boolType = *t;
			}
			if (i == 3)
			{
				wordTwo = *t;
			}
			t++;
		}

		if (BoolCheck(boolType) == 211)
		{
			SearchAND(wordOne, wordTwo, listBox2);
		}
		else if (BoolCheck(boolType) == 161)
		{
			SearchOR(wordOne, wordTwo, listBox2);
		}
	}
	else
	{
		MessageBox::Show("Input format is wrong for searching in file(s)!","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
}

int Search_Engine::NumberOfWords(string input)
{
	int numberOfWords = 1;
	string::iterator temp = input.begin();

	while (temp != input.end())
	{
		if (*temp == ' ')
		{
			numberOfWords++;
		}
		temp++;
	}

	return numberOfWords;
}

int Search_Engine::BoolCheck(string boolType)
{
	int value = 0;

	for (int i = 0; i < boolType.length(); i++)
	{
		value = value + static_cast<int>(boolType[i]);
	}

	return value;
}


void Search_Engine::DirectorySearch(System::Windows::Forms::ListBox^  listBox2, System::Windows::Forms::TextBox^  txtSearch)
{
	vector<string> file_names;
	vector<string> file_paths;
	for (recursive_directory_iterator j("E:\\Search"), end; j != end; ++j)
	{
		if (j->path().extension() == ".txt")
		{
			file_names.push_back(j->path().filename());
			file_paths.push_back(j->path());
		}
	}

	insert_in_TrieTree(file_names, file_paths);
	print(listBox2, txtSearch);
}