#include "Header.h"
#include <filesystem>
#include <msclr\marshal_cppstd.h>

#pragma once

namespace DSFINALP {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std::tr2::sys;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ListBox^  listBox1;


	private: Bunifu::Framework::UI::BunifuImageButton^  button1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  pathButton;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: System::Windows::Forms::TextBox^  txtSearch;


	private: System::Windows::Forms::Panel^  panel1;


	private:

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pathButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::Red;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(15, 261);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(391, 196);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.ErrorImage")));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageActive = nullptr;
			this->button1->Location = System::Drawing::Point(588, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 31);
			this->button1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->button1->TabIndex = 4;
			this->button1->TabStop = false;
			this->button1->Zoom = 10;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::bunifuImageButton1_Click);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::Red;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(470, 261);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(391, 196);
			this->listBox2->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 217);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 38);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(62, 220);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(160, 32);
			this->bunifuCustomLabel1->TabIndex = 7;
			this->bunifuCustomLabel1->Text = L"DIRECTORY";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(517, 220);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(167, 32);
			this->bunifuCustomLabel2->TabIndex = 8;
			this->bunifuCustomLabel2->Text = L"INSIDE FILES";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(470, 217);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(41, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(299, 21);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(272, 110);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// pathButton
			// 
			this->pathButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->pathButton->BackColor = System::Drawing::Color::Gold;
			this->pathButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pathButton->BorderRadius = 0;
			this->pathButton->ButtonText = L"Show Path";
			this->pathButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pathButton->DisabledColor = System::Drawing::Color::Gray;
			this->pathButton->Iconcolor = System::Drawing::Color::Transparent;
			this->pathButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pathButton.Iconimage")));
			this->pathButton->Iconimage_right = nullptr;
			this->pathButton->Iconimage_right_Selected = nullptr;
			this->pathButton->Iconimage_Selected = nullptr;
			this->pathButton->IconMarginLeft = 0;
			this->pathButton->IconMarginRight = 0;
			this->pathButton->IconRightVisible = true;
			this->pathButton->IconRightZoom = 0;
			this->pathButton->IconVisible = true;
			this->pathButton->IconZoom = 90;
			this->pathButton->IsTab = false;
			this->pathButton->Location = System::Drawing::Point(735, 470);
			this->pathButton->Name = L"pathButton";
			this->pathButton->Normalcolor = System::Drawing::Color::Gold;
			this->pathButton->OnHovercolor = System::Drawing::Color::Red;
			this->pathButton->OnHoverTextColor = System::Drawing::Color::White;
			this->pathButton->selected = false;
			this->pathButton->Size = System::Drawing::Size(126, 35);
			this->pathButton->TabIndex = 11;
			this->pathButton->Text = L"Show Path";
			this->pathButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pathButton->Textcolor = System::Drawing::Color::White;
			this->pathButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pathButton->Click += gcnew System::EventHandler(this, &MyForm::pathButton_Click);
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Gold;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Refresh";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(621, 470);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Gold;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::Red;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(108, 35);
			this->bunifuFlatButton1->TabIndex = 12;
			this->bunifuFlatButton1->Text = L"Refresh";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton1_Click);
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Gold;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"Open Path";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 90;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(489, 470);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Gold;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::Red;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(126, 35);
			this->bunifuFlatButton2->TabIndex = 13;
			this->bunifuFlatButton2->Text = L"Open Path";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton2_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(1060) {
				L"Call of Duty Modern Warfare",
					L"binkw32.dll", L"cod.bmp", L"cod4key.reg", L"cod4x-uninstall.exe", L"cod4x18_v17_5_client", L"cod4x_017.dll", L"crashrpt1403.dll",
					L"crashrpt_lang.ini", L"crashsender1403.exe", L"dbghelp.dll", L"install.cmd", L"miles32.dll", L"mss32.dll", L"msvcp100.dll",
					L"msvcr100.dll", L"msvcrt.dll", L"uninstall.cmd", L"d3dx9Download.url", L"d3dx9_34.dll", L"d3dx9_34.dll.zip", L"d3dx9ñU+n.url",
					L"d3dx9\?\?\?\?\?\?\?\?.url", L"desktop.ini", L"Docs", L"Help", L"credits.htm", L"customer_support.htm", L"legal.htm", L"license.htm",
					L"msr.htm", L"readme.htm", L"_top.htm", L"help.htm", L"html", L"audio_problems.htm", L"autoplay.htm", L"cd_dvd_problems.htm",
					L"compressed_drive.htm", L"crashes.htm", L"directx.htm", L"patches.htm", L"sound_conflicts.htm", L"tech_help.htm", L"_main.htm",
					L"_main2.htm", L"_toc.htm", L"images", L"Activision.jpg", L"ap_xp_large.jpg", L"ap_xp_small.jpg", L"DevLogo.jpg", L"dma_large.jpg",
					L"dma_small.jpg", L"GameLogo.jpg", L"redstripe.jpg", L"spacer.gif", L"license.txt", L"manual.pdf", L"msr.txt", L"PBEULA.txt",
					L"icon.ico", L"iw3mp.exe", L"iw3sp.exe", L"localization.txt", L"main", L"games_mp.log", L"hunkusage.dat", L"iw_00.iwd", L"iw_01.iwd",
					L"iw_02.iwd", L"iw_03.iwd", L"iw_04.iwd", L"iw_05.iwd", L"iw_06.iwd", L"iw_07.iwd", L"iw_08.iwd", L"iw_09.iwd", L"iw_10.iwd",
					L"iw_11.iwd", L"iw_12.iwd", L"iw_13.iwd", L"iw_nosteam.iwd", L"localized_english_iw00.iwd", L"localized_english_iw01.iwd", L"localized_english_iw02.iwd",
					L"localized_english_iw03.iwd", L"localized_english_iw04.iwd", L"localized_english_iw05.iwd", L"localized_english_iw06.iwd", L"save",
					L"screenshots", L"shot0000.jpg", L"video", L"ac130_fade.bik", L"ac130_load.bik", L"Aftermath_fade.bik", L"Aftermath_load.bik",
					L"airlift_fade.bik", L"Airlift_load.bik", L"airplane_load.bik", L"ambush_fade.bik", L"Ambush_load.bik", L"armada_fade.bik", L"Armada_load.bik",
					L"asad_speech_180.bik", L"black.bik", L"blackout_fade.bik", L"Blackout_load.bik", L"bog_a_fade.bik", L"bog_a_load.bik", L"bog_b_fade.bik",
					L"bog_b_load.bik", L"cargoship_fade.bik", L"cargoship_load.bik", L"coup_fade.bik", L"coup_load.bik", L"credits_load.bik", L"default.bik",
					L"dog_vs_player_load.bik", L"hunted_fade.bik", L"hunted_load.bik", L"icbm_fade.bik", L"icbm_load.bik", L"IW_logo.bik", L"jeepride_fade.bik",
					L"jeepride_load.bik", L"killhouse_fade.bik", L"killhouse_load.bik", L"Killhouse_monitor1.bik", L"launchfacility_a_fade.bik",
					L"launchfacility_a_load.bik", L"launchfacility_b_fade.bik", L"launchfacility_b_load.bik", L"legal.bik", L"scoutsniper_fade.bik",
					L"scoutsniper_load.bik", L"simplecredits_load.bik", L"sniperescape_load.bik", L"village_assault_fade.bik", L"village_assault_load.bik",
					L"village_defend_fade.bik", L"village_defend_load.bik", L"zakhaev_escape.bik", L"miles", L"milesEq.flt", L"mssds3d.flt", L"mssdsp.flt",
					L"msseax.flt", L"mssmp3.asi", L"mssvoice.asi", L"miles32.dll", L"Mods", L"b2kpromodlive211", L"console_mp.log", L"demos", L"demo0000.dm_1",
					L"games_mp.log", L"mod.ff", L"promodlive211.iwd", L"z_custom_ruleset.iwd", L"cod4i", L"^7mod.ff", L"~images_00.iwd", L"gungame",
					L"mod.ff", L"z_gungame.iwd", L"I-S-I_LAND_OF_WAR", L"pml220.iwd.tmp", L"pml220.iwd.tmp.cache", L"luvgungame", L"mod.ff", L"z_gungame.iwd",
					L"modwarfare", L"games_mp.log", L"mod.ff", L"mp_brokenroad.iwd", L"mp_kh1.iwd", L"mp_kh1.iwd.tmp", L"mp_poolday.iwd", L"z_modwarfare.iwd",
					L"nrs_gungame", L"games_mp.log", L"z_gungame.iwd", L"openwarfare", L"mod.ff", L"z_openwarfare.iwd", L"z_ow.iwd.tmp", L"pglpml220",
					L"mod.ff", L"pml220.iwd", L"z_c_r.iwd", L"pml211", L"console_mp.log", L"games_mp.log", L"mod.ff", L"promodlive211.iwd", L"z_custom_ruleset.iwd",
					L"pml219", L"mod.ff", L"pml219.iwd", L"z_c_r.iwd", L"pml220", L"console_mp.log", L"demos", L"demo0000.dm_1", L"games_mp.log",
					L"mod.ff", L"pml220.iwd", L"z_c_r.iwd", L"z_valen_byrift.iwd", L"ppc_promod", L"pml220.iwd.tmp", L"pml220.iwd.tmp.cache", L"^3p_p_c.iwd",
					L"promod live 2.2.0", L"promodlive211", L"mod.ff", L"promodlive211.iwd", L"z_custom_ruleset.iwd", L"temate_ktk", L"z_killtheking.iwd.tmp",
					L"^5Rippers_^3Promod_^2SD_^41", L"pml220.iwd", L"z_custom.iwd", L"z_c_r.iwd", L"z_snd.iwd.tmp", L"mss32.dll", L"mss32.dll.old",
					L"pb", L"dll", L"wa001407.dll", L"wc002258.dll", L"wc002318.dll", L"ws001828.dll", L"htm", L"la001407.htm", L"lc002258.htm",
					L"lc002318.htm", L"ma001407.htm", L"mc002258.htm", L"mc002318.htm", L"wa001407.htm", L"wc002258.htm", L"wc002318.htm", L"ws001828.htm",
					L"pbag.dll", L"pbags.dll", L"pbcl.db", L"pbcl.dll", L"pbcl.log", L"pbcls.dll", L"pbns.dat", L"pbns_c.dat", L"pbsv.dat", L"pbsv.db",
					L"pbsv.dll", L"scrnshot", L"svlogs", L"00000139.log", L"00000140.log", L"00000141.log", L"00000142.log", L"00000143.log", L"00000144.log",
					L"00000145.log", L"00000146.log", L"00000147.log", L"00000148.log", L"00000149.log", L"00000150.log", L"00000151.log", L"00000152.log",
					L"00000153.log", L"00000154.log", L"00000155.log", L"00000156.log", L"00000157.log", L"00000158.log", L"00000159.log", L"00000160.log",
					L"00000161.log", L"00000162.log", L"00000163.log", L"00000164.log", L"00000165.log", L"00000166.log", L"00000167.log", L"00000168.log",
					L"00000169.log", L"00000170.log", L"00000171.log", L"00000172.log", L"00000173.log", L"00000174.log", L"00000175.log", L"00000176.log",
					L"00000177.log", L"00000178.log", L"00000179.log", L"00000180.log", L"00000181.log", L"00000182.log", L"00000183.log", L"00000184.log",
					L"00000185.log", L"00000186.log", L"00000187.log", L"00000188.log", L"00000189.log", L"00000190.log", L"00000191.log", L"00000192.log",
					L"00000193.log", L"00000194.log", L"00000195.log", L"00000196.log", L"00000197.log", L"00000198.log", L"00000199.log", L"00000200.log",
					L"00000201.log", L"00000202.log", L"00000203.log", L"00000204.log", L"00000205.log", L"00000206.log", L"00000207.log", L"00000208.log",
					L"00000209.log", L"00000210.log", L"00000211.log", L"00000212.log", L"00000213.log", L"00000214.log", L"svss", L"pbgame.htm",
					L"pbsetup.exe", L"pbsvc.exe", L"players", L"profiles", L"playerstats.txt", L"Read Me First.txt", L"Serials-keys.txt", L"servercache.dat",
					L"Settings", L"usermaps", L"mp_cluster", L"mp_cluster.iwd", L"mp_hideout_beta1", L"mp_hideout_beta1.ff", L"mp_hideout_beta1_load.ff",
					L"mp_marketcenter", L"mp_marketcenter.ff", L"mp_marketcenter.iwd", L"mp_marketcenter_load.ff", L"mp_naout", L"mp_naout.ff", L"mp_naout.iwd",
					L"mp_naout_load.ff", L"mp_nuketown", L"mp_nuketown.ff.tmp", L"mp_nuketown.iwd", L"mp_surv_vacant", L"mp_surv_vacant.iwd", L"mp_surv_villa2r2",
					L"mp_surv_villa2r2.iwd.tmp", L"mp_surv_village", L"mp_surv_village.ff", L"mp_surv_village.iwd", L"mp_surv_village_load.ff", L"version.inf",
					L"visit-nosteam.ro.html", L"zone", L"english", L"ac130.ff", L"aftermath.ff", L"airlift.ff", L"airplane.ff", L"ambush.ff", L"armada.ff",
					L"blackout.ff", L"bog_a.ff", L"bog_b.ff", L"cargoship.ff", L"code_post_gfx.ff", L"code_post_gfx_mp.ff", L"common.ff", L"common_mp.ff",
					L"coup.ff", L"hunted.ff", L"icbm.ff", L"jeepride.ff", L"killhouse.ff", L"launchfacility_a.ff", L"launchfacility_b.ff", L"localized_code_post_gfx_mp.ff",
					L"localized_common_mp.ff", L"mp_backlot.ff", L"mp_backlot_load.ff", L"mp_bloc.ff", L"mp_bloc_load.ff", L"mp_bog.ff", L"mp_bog_load.ff",
					L"mp_broadcast.ff", L"mp_broadcast_load.ff", L"mp_carentan.ff", L"mp_carentan_load.ff", L"mp_cargoship.ff", L"mp_cargoship_load.ff",
					L"mp_citystreets.ff", L"mp_citystreets_load.ff", L"mp_convoy.ff", L"mp_convoy_load.ff", L"mp_countdown.ff", L"mp_countdown_load.ff",
					L"mp_crash.ff", L"mp_crash_load.ff", L"mp_crash_snow.ff", L"mp_crash_snow_load.ff", L"mp_creek.ff", L"mp_creek_load.ff", L"mp_crossfire.ff",
					L"mp_crossfire_load.ff", L"mp_farm.ff", L"mp_farm_load.ff", L"mp_killhouse.ff", L"mp_killhouse_load.ff", L"mp_overgrown.ff",
					L"mp_overgrown_load.ff", L"mp_pipeline.ff", L"mp_pipeline_load.ff", L"mp_shipment.ff", L"mp_shipment_load.ff", L"mp_showdown.ff",
					L"mp_showdown_load.ff", L"mp_strike.ff", L"mp_strike_load.ff", L"mp_vacant.ff", L"mp_vacant_load.ff", L"scoutsniper.ff", L"simplecredits.ff",
					L"sniperescape.ff", L"ui.ff", L"ui_mp.ff", L"village_assault.ff", L"village_defend.ff", L"__iw3mp", L"aspnet-core-angular.rar",
					L"Building Your First ASP.NET Core Web Application.rar", L"Visual C# and ADO.NET Programming", L"Read Me.txt", L"Torrent_downloaded_from_Demonoid_-_www.demonoid.pw_.txt",
					L"TutsGalaxy.com.txt", L"[Tutsgalaxy.com] - Visual C# and ADO.NET Programming", L"01 Introduction", L"001 Introduction.mp4",
					L"002 Payroll System Requirement.mp4", L"003 Installation Guide.mp4", L"02 Database Design", L"004 Create Database Tables and Relationship.mp4",
					L"03 Employee Form Module", L"005 Employee Form Design.mp4", L"006 Implicit Validation.mp4", L"007 Explicit Validation.mp4",
					L"008 Regular Expression - Part 1.mp4", L"009 Regular Expression - Part 2.mp4", L"010 Clear Controls.mp4", L"011 PreviewForm - Parameter vs Argument - Part 1.mp4",
					L"012 PreviewForm - Parameter vs Argument - Part 2.mp4", L"013 Introduction to ADO.Net.mp4", L"014 Add Functionality.mp4", L"015 Update Functionality Part 1.mp4",
					L"016 Update Functionality Part 2.mp4", L"017 Delete Employee Records.mp4", L"018 Code Review.mp4", L"04 Payroll Calculator Module",
					L"019 Payroll Calculator Form Design Part 1.mp4", L"020 Payroll Calculator Form Design Part 2.mp4", L"021 Retrieve Employee - DataReader.mp4",
					L"022 Array Vs List Collection.mp4", L"023 For Loop vs Foreach Loop vs ForEach Method.mp4", L"024 Payroll Computation - Part 1.mp4",
					L"025 Payroll Computation - Part 2.mp4", L"026 Saving PayRecords - using Parameterised Command.mp4", L"027 Pass-By-Value vs Pass-By-Reference.mp4",
					L"028 Out vs Ref  Keywords.mp4", L"029 Time to Decimal Conversion.mp4", L"030 Linked Label and Digital Timer.mp4", L"031 String vs StringBuider Class.mp4",
					L"05 Search Functionality", L"032 Search Functionality.mp4", L"06 Printing Functionality", L"033 Printing Functionality - Payslip.mp4",
					L"07 AboutBox MDI and MenuStrip", L"034 AboutBox - Product Information.mp4", L"035 Multiple Document InterfaceMDI and MenuStrip.mp4",
					L"08 Reporting Facilities", L"036 Reporting facilities - Part 1.mp4", L"037 Reporting Facilities - Part 2.mp4", L"09 Log In and Registration Module - Users Class",
					L"038 LogIn and RegisterUser Form Design.mp4", L"039 Registered Users Table.mp4", L"040 Complex Password Validation.mp4", L"041 Class Object and Member Variables.mp4",
					L"042 Constructors.mp4", L"043 Properties  Methods - Class Member.mp4", L"10 Using Stored Procedure", L"044 Stored Procedure - spInsertCommand.mp4",
					L"045 Stored Procedure - spUpdateCommand.mp4", L"046 Stored Procedure - spDeleteCommand.mp4", L"047 Stored Procedure - DataReader.mp4",
					L"048 Stored Procedure - spAuthorisedUsers.mp4", L"11 Deployment", L"049 FormClosing - Exiting Application.mp4", L"050 Deployment - using ClickOnce.mp4",
					L"TutsGalaxy.com.txt", L"[FreeCourseSite.com] Udemy - Complete Java Masterclass.rar", L"[FreeTutorials.us] php-for-complete-beginners-includes-msql-object-oriented",
					L"01 The First Steps", L"001 Introduction.mp4", L"002 Local Development Environment and Software Install.mp4.fdmdownload", L"004 Code Editor Installation Optional if you have one.mp4.fdmdownload",
					L"005 Embedding PHP in HTML.mp4.fdmdownload", L"attached_files", L"003 Course Exercise Files  Video Quality", L"cms.zip.fdmdownload",
					L"complete-local-cms-forgot-password-feature-included.zip", L"exercise-files.zip", L"02 Data Types and More", L"009 Variables in PHP.mp4.fdmdownload",
					L"010 Math.mp4.fdmdownload", L"011 Arrays.mp4.fdmdownload", L"012 Associative Arrays.mp4.fdmdownload", L"03 Control Structures",
					L"014 if Statements.mp4.fdmdownload", L"015 Comparison and Logical Operators.mp4.fdmdownload", L"017 While Loop in PHP.mp4.fdmdownload",
					L"019 Foreach Loop in PHP.mp4.fdmdownload", L"020 Practice Section 3.mp4.fdmdownload", L"04 Custom Functions", L"021 Defining functions.mp4.fdmdownload",
					L"023 Return Values From Functions.mp4.fdmdownload", L"024 Global Variable and Scope.mp4.fdmdownload", L"05 PHP Built-in Functions",
					L"029 Array Functions.mp4.fdmdownload", L"030 Practice Section 5.mp4.fdmdownload", L"06 How To Use Form Data in PHP", L"031 Checking for Form Submission.mp4.fdmdownload",
					L"032 Extracting Information from form.mp4.fdmdownload", L"033 Validating The Form Values.mp4.fdmdownload", L"07 How To Use Databases in PHP",
					L"037 Introduction to PHPmyadmin.mp4.fdmdownload", L"038 Creating a Database in PHPmyadmin.mp4.fdmdownload", L"040 Markup for Login Page.mp4.fdmdownload",
					L"044 Reading Information in the Database with PHP.mp4.fdmdownload", L"045 Creating the Update Records Form.mp4.fdmdownload",
					L"047 Query to Read Ids.mp4.fdmdownload", L"048 Query to Update Username and Password.mp4.fdmdownload", L"049 Refactoring The Update Query into a Function.mp4.fdmdownload",
					L"051 ReFactoring all Database Query Code into Functions.mp4.fdmdownload", L"052 Making All Files Modular and Refactoring.mp4.fdmdownload",
					L"053 Practice Section 7.mp4.fdmdownload", L"09 PHP and The Web", L"060 About Cookies in PHP.mp4.fdmdownload", L"061 Setting Cookies with PHP.mp4.fdmdownload",
					L"063 How use Sessions in PHP.mp4.fdmdownload", L"064 Practice Section 9.mp4.fdmdownload", L"10 Object Oriented PHP Introduction",
					L"066 What are classes and how to define them in PHP.mp4.fdmdownload", L"070 Class inheretance.mp4.fdmdownload", L"071 Constructors.mp4.fdmdownload",
					L"073 Static Data in Classes.mp4.fdmdownload", L"074 Practice Section 10.mp4.fdmdownload", L"11 Working with files", L"077 Reading files.mp4.fdmdownload",
					L"078 Deleting files.mp4", L"12 CMS Project  Blogging System - Front End and First Steps", L"079 Intro Tour of the CMS.mp4.fdmdownload",
					L"080 Turning On Some Important Features.mp4.fdmdownload", L"081 Adding our assets  working structure.mp4.fdmdownload", L"082 Creating database and category table for the CMS.mp4.fdmdownload",
					L"083 Connecting to the database with PHP.mp4.fdmdownload", L"084 Making our files reuseable.mp4.fdmdownload", L"085 Inserting Data into Category Table and Displaying it.mp4.fdmdownload",
					L"087 Post Comment Count Update   Edwin from the future.mp4.fdmdownload", L"088 Inserting Data into the posts table and displaying it.mp4.fdmdownload",
					L"090 Creating a custom search engine part 1.mp4.fdmdownload", L"092 Creating a custom search engine part 3.mp4.fdmdownload",
					L"093 Adding Categories to the sidebar.mp4.fdmdownload", L"attached_files", L"079 Intro Tour of the CMS", L"complete-local-cms-forgot-password-feature-included.zip",
					L"081 Adding our assets  working structure", L"CMS-TEMPLATE.zip", L"13 CMS - Categories  More", L"094 Creating reuseable code in the admin.mp4.fdmdownload",
					L"095 Creating the navigation links in admin.mp4.fdmdownload", L"098 Displaying data in category page.mp4.fdmdownload", L"099 Adding Categories.mp4.fdmdownload",
					L"100 Adding a special Function to our header file.mp4", L"101 Deleting Categories.mp4.fdmdownload", L"103 Updating or Editing Categories part 2.mp4.fdmdownload",
					L"104 Refactoring category code part 1.mp4.fdmdownload", L"105 Refactoring category code part 2.mp4.fdmdownload", L"14 CMS - POSTS",
					L"106 Creating a HTML table in admin to display a list of posts.mp4.fdmdownload", L"109 Creating Post HTML form in admin.mp4.fdmdownload",
					L"110 Inserting Post Data From admin.mp4.fdmdownload", L"111 Deleting Posts in admin.mp4.fdmdownload", L"113 Displaying the Edit Data in Post Edit Page.mp4.fdmdownload",
					L"115 Finally Updating Posts.mp4.fdmdownload", L"116 Relating Categories to posts and Displaying it.mp4.fdmdownload", L"117 Adding Category Dropdown to the Add Post Page.mp4.fdmdownload",
					L"118 Adding Individual Post Page and Link.mp4.fdmdownload", L"120 Setting up some links and making an excerpt.mp4.fdmdownload",
					L"15 CMS - COMMENTS", L"121 Creating the comments table and inserting data.mp4.fdmdownload", L"123 Creating the Query for displaying comments in admin part 1.mp4.fdmdownload",
					L"124 Creating the Query for displaying comments in admin part 2.mp4.fdmdownload", L"125 Inserting new fields in Front end comment form and testing it.mp4.fdmdownload"
					L"",
					L"126 Creating the Frond End comment insert query.mp4.fdmdownload", L"127 Finishing the query to send comment data Front end.mp4.fdmdownload",
					L"128 Relating Comments to posts.mp4.fdmdownload", L"131 Displaying comments based on approval.mp4.fdmdownload", L"132 Increasing comments count.mp4.fdmdownload",
					L"16 CMS - USERS", L"135 Creating the users table and data insert.mp4.fdmdownload", L"136 Creating users pages and links.mp4.fdmdownload",
					L"137 Modifying user table heading.mp4.fdmdownload", L"140 Adding users in admin part 1.mp4.fdmdownload", L"141 Adding users in admin part 2.mp4.fdmdownload",
					L"142 Adding users in admin part 3.mp4.fdmdownload", L"147 Displaying User Values in Edit Page.mp4.fdmdownload", L"149 Updating User.mp4.fdmdownload",
					L"17 CMS - Login", L"150 Creating the login form.mp4.fdmdownload", L"152 Select User Query.mp4.fdmdownload", L"153 Validating User Query Front End.mp4.fdmdownload",
					L"154 Setting Values with Sessions.mp4.fdmdownload", L"155 Validating User Admin.mp4.fdmdownload", L"157 Login improved- Edwin from the Future.mp4.fdmdownload",
					L"18 CMS - Profile", L"158 Creating the Profile Page.mp4.fdmdownload", L"159 Displaying User Data.mp4.fdmdownload", L"19 CMS - Dashboard",
					L"162 Posts Dynamic Data in Widget.mp4.fdmdownload", L"164 Adjusting Widget Links.mp4.fdmdownload", L"168 Displaying Dynamic Data in chart part 2.mp4.fdmdownload",
					L"21 CMS -Extra Features", L"174 Adding the WYSIWYG Editor.mp4.fdmdownload", L"176 Adding Post Update Notification.mp4.fdmdownload",
					L"177 Adding Post Edit Link in Front End.mp4.fdmdownload", L"178 Adding Bulk Options Posts part 1.mp4.fdmdownload", L"179 Adding Bulk Options Posts part 2.mp4.fdmdownload",
					L"180 Adding Bulk Options Posts part 3.mp4.fdmdownload", L"181 Adding Bulk Options Posts part 4.mp4.fdmdownload", L"185 Adding Post Creation Notice to Add Post Page.mp4.fdmdownload",
					L"187 Adding Link to View Posts from Admin.mp4.fdmdownload", L"189 Adding Validation to Comments in Post Page.mp4.fdmdownload",
					L"22 CMS -Extra Features - User Registration", L"193 Starting Query and Default Tables Values.mp4.fdmdownload", L"195 Validating Fields.mp4.fdmdownload",
					L"198 User Page Display Shorter Password Field.mp4.fdmdownload", L"200 PHP and Javascript Confirm Before Action.mp4.fdmdownload",
					L"201 Get Your Certificate.mp4.fdmdownload", L"202 Wrapping this up IMPORTANT.mp4.fdmdownload", L"23 CMS-Extra Features - Author Related Posts",
					L"205 Relating Posts to their Authors Part 2.mp4.fdmdownload", L"206 Cloning Posts NEW feature - COOL STUFF.mp4.fdmdownload",
					L"208 Adding views functionality to posts.mp4.fdmdownload", L"209 Resetting Views Feature.mp4.fdmdownload", L"24 Pagination",
					L"210 Pagination Intro and Part 1.mp4.fdmdownload", L"211 Pagination Intro and Part 2 - Links and Get Request.mp4.fdmdownload",
					L"212 Pagination Intro and Part 3 - Get Request Processing.mp4.fdmdownload", L"213 Pagination Intro and Part 4 - Assigning a variable to the per page value.mp4."
					L"fdmdownload",
					L"214 Pagination Intro and Part 5 - Adding Some Style to Current Page.mp4.fdmdownlo"
					L"ad", L"25 CMS - Extra Features - Users ONLINE",
					L"215 Creating the user online table and Setup.mp4.fdmdownload", L"216 Creating the PHP code and Queries.mp4.fdmdownload", L"217 Displaying Users Online.mp4.fdmdownload",
					L"219 Instant Users Online count without refreshing part 1.mp4.fdmdownload", L"220 Instant Users Online count without refreshing part 2.mp4.fdmdownload",
					L"26 CMS- Extra Feature - NEW Simple Password Encrypting and Login System", L"221 Explanation of new New function and Implementation.mp4.fdmdownload",
					L"222 Login in Users with new System.mp4.fdmdownload", L"223 Adding New System to Add Users in Admin.mp4.fdmdownload", L"224 Adding new password system to edit user page part 1.mp4.fdmdownload",
					L"225 Adding new password system to edit user page part 2.mp4.fdmdownload", L"226 Cleaning Up Edit User Page.mp4.fdmdownload",
					L"27 CMS - Extra Feature - Improved Comment system count and diplay", L"228 Creating a link in comment count and sending a GET Request.mp4.fdmdownload",
					L"229 Comments page to specific posts.mp4.fdmdownload", L"28 CMS - Extra Feature - Post for Specific User in admin", L"232 Part 2 - Insertion.mp4.fdmdownload",
					L"233 Part 3 - Fixing User Display Issue.mp4.fdmdownload", L"235 Part 5 - Upgrading Front End.mp4.fdmdownload", L"29 CMS - More Security",
					L"236 URL and MySQL Injection Protection.mp4.fdmdownload", L"30 Taking the Project to the Internet", L"237 WARNING BEFORE GOING ONLINE - Edwin from the future.mp4.fdmdownload",
					L"238 Hosting Setup.mp4.fdmdownload", L"239 Displaying errors online.mp4.fdmdownload", L"240 Uploading files.mp4.fdmdownload",
					L"241 Creating the Online Database.mp4.fdmdownload", L"242 Importing database.mp4.fdmdownload", L"243 Fixing access to application.mp4.fdmdownload",
					L"244 Getting the right PHP online version FIXED.mp4.fdmdownload", L"31 Sending Emails", L"245 Creating a contact page.mp4.fdmdownload",
					L"246 Uploading Contact page.mp4.fdmdownload", L"247 Sending emails.mp4.fdmdownload", L"32 Bootstrap Modal Delete Confirm Feature",
					L"250 Creating the markup.mp4.fdmdownload", L"251 Writing the code.mp4.fdmdownload", L"33 No posts or category message feature",
					L"252 Intro.mp4.fdmdownload", L"253 No posts feature home page.mp4.fdmdownload", L"255 Dont show draft to visitors but everything to admin.mp4.fdmdownload",
					L"256 Applying functionality to mayor pages.mp4.fdmdownload", L"35 Having fun with bugs", L"259 Duplicate category improvement.mp4.fdmdownload",
					L"260 Fixing bug in our edit post javascript editor.mp4.fdmdownload", L"261 Cloning empty fields and table shifting fix.mp4.fdmdownload",
					L"36 Refactoring part 1", L"262 Refactoring index in admin part 1.mp4.fdmdownload", L"263 Refactoring index in admin part 2.mp4.fdmdownload",
					L"264 Refactoring our view all posts by JOINING TABLES part 1.mp4.fdmdownload", L"37 New registration system", L"266 Create a better admin detection feature.mp4.fdmdownload",
					L"270 Setting up our Login user function.mp4.fdmdownload", L"271 Adding some user friendly code.mp4.fdmdownload", L"272 Displaying inline errors in form.mp4.fdmdownload",
					L"275 Deleting via POST.mp4.fdmdownload", L"38 Adding Prepare statements to our application for security", L"276 Fetching posts in the category page using prepared statements part 1.mp4.fdmd"
					L"ownload",
					L"278 Fetching posts in the category page using prepared statements part 3.mp4.fdmd"
					L"ownload", L"39 CMS Extra feature - Pretty URLs",
					L"282 Intro IMPORTANT.mp4.fdmdownload", L"283 Turning on the rewrite engine.mp4.fdmdownload", L"40 CMS Extra Feature - Forgot Password System",
					L"287 Intro to what we are building.mp4.fdmdownload", L"288 Creating some helper functions for the new system.mp4.fdmdownload",
					L"289 Restructuring login page.mp4.fdmdownload", L"290 Creating the forgot password page.mp4.fdmdownload", L"292 Updating database with token values.mp4.fdmdownload",
					L"attached_files", L"287 Intro to what we are building", L"forgot-password-system-files.zip", L"288 Creating some helper functions for the new system",
					L"functions.php.zip", L"289 Restructuring login page", L"login-pages.zip", L"290 Creating the forgot password page", L"forgot-password-pages.zip",
					L"41 CMS Extra Feature - Forgot Password System - Sending Email", L"293 Intro.mp4", L"294 Download all the files needed.html",
					L"295 Installing third party library with composer.mp4.fdmdownload", L"296 Sending email.mp4.fdmdownload", L"299 Creating the reset page.mp4.fdmdownload",
					L"303 Making it everything work.mp4.fdmdownload", L"attached_files", L"293 Intro", L"forgot-password-system-files.zip", L"294 Download all the files needed",
					L"forgot-password-system-files.zip", L"299 Creating the reset page", L"reset-pages.zip", L"Freetutorials.us.url", L"[FreeTutorials.us].txt",
					L"[FreeTutorials.us] the-complete-aspnet-mvc-5-course.rar", L"[FreeTutorials.Us] Udemy - aspnet-mvc-5-project-cms-and-shopping-cart-with-paypal"
					L".rar",
					L"[FreeTutorials.Us] Udemy - building-a-mvc-5-membership-website.rar", L"[FreeTutorials.Us] Udemy - complete-android-n-developer-course",
					L"[FreeTutorials.Us] Udemy - complete-android-n-developer-course", L"01 What Does The Course Cover_", L"001 What does the course cover_-subtitle-en.srt",
					L"001 What does the course cover_-subtitle-en.vtt", L"001 What does the course cover_.mp4", L"002 How To Get All The Free Stuff-subtitle-en.srt",
					L"002 How To Get All The Free Stuff-subtitle-en.vtt", L"002 How To Get All The Free Stuff.mp4", L"003 Frequently Asked Questions.html",
					L"004 Asking Great Questions  Debugging Your Code-subtitle-en.srt", L"004 Asking Great Questions  Debugging Your Code-subtitle-en.vtt",
					L"004 Asking Great Questions  Debugging Your Code.mp4", L"02 Introduction To Android Studio", L"005 Introduction-subtitle-en.srt",
					L"005 Introduction-subtitle-en.vtt", L"005 Introduction.mp4", L"006 IMPORTANT_ Android Studio Versions.html", L"007 Installing Android Studio On MacOS-subtitle-en.srt",
					L"007 Installing Android Studio On MacOS-subtitle-en.vtt", L"007 Installing Android Studio On MacOS.mp4", L"008 Installing Android Studio On Windows-subtitle-en.srt",
					L"008 Installing Android Studio On Windows-subtitle-en.vtt", L"008 Installing Android Studio On Windows.mp4", L"009 Android Studio Overview-subtitle-en.srt",
					L"009 Android Studio Overview-subtitle-en.vtt", L"009 Android Studio Overview.mp4", L"010 Opening Sample Projects-subtitle-en.srt",
					L"010 Opening Sample Projects-subtitle-en.vtt", L"010 Opening Sample Projects.mp4", L"011 Opening Sample Projects (Android Studio files).html",
					L"012 Formatting Text-subtitle-en.srt", L"012 Formatting Text-subtitle-en.vtt", L"012 Formatting Text.mp4", L"013 Formatting Text (Android Studio files).html",
					L"014 Buttons-subtitle-en.srt", L"014 Buttons-subtitle-en.vtt", L"014 Buttons.mp4", L"015 Buttons (Android Studio files).html",
					L"016 TextFields-subtitle-en.srt", L"016 TextFields-subtitle-en.vtt", L"016 TextFields.mp4", L"017 TextFields (Android Studio files).html",
					L"018 Displaying Messages-subtitle-en.srt", L"018 Displaying Messages-subtitle-en.vtt", L"018 Displaying Messages.mp4", L"019 Displaying Messages (Android Studio files).html",
					L"020 Images-subtitle-en.srt", L"020 Images-subtitle-en.vtt", L"020 Images.mp4", L"021 Images (Android Studio files).html", L"022 Currency Converter-subtitle-en.srt",
					L"022 Currency Converter-subtitle-en.vtt", L"022 Currency Converter.mp4", L"023 Currency Converter (Android Studio files).html",
					L"03 Java Deep Dive", L"024 Introduction-subtitle-en.srt", L"024 Introduction-subtitle-en.vtt", L"024 Introduction.mp4", L"025 Hello World With Java-subtitle-en.srt",
					L"025 Hello World With Java-subtitle-en.vtt", L"025 Hello World With Java.mp4", L"026 Hello World With Java (Java files).html",
					L"027 Variables-subtitle-en.srt", L"027 Variables-subtitle-en.vtt", L"027 Variables.mp4", L"028 Variables (Java files).html",
					L"029 Arrays And Maps-subtitle-en.srt", L"029 Arrays And Maps-subtitle-en.vtt", L"029 Arrays And Maps.mp4", L"030 Arrays And Maps (Java files).html",
					L"031 If Statements-subtitle-en.srt", L"031 If Statements-subtitle-en.vtt", L"031 If Statements.mp4", L"032 If Statements (Java Files).html",
					L"033 Higher Or Lower-subtitle-en.srt", L"033 Higher Or Lower-subtitle-en.vtt", L"033 Higher Or Lower.mp4", L"034 Higher Or Lower (Android Studio files).html",
					L"035 Loops-subtitle-en.srt", L"035 Loops-subtitle-en.vtt", L"035 Loops.mp4", L"036 Loops (Java files).html", L"037 Classes And Objects-subtitle-en.srt",
					L"037 Classes And Objects-subtitle-en.vtt", L"037 Classes And Objects.mp4", L"038 Classes and Objects (Java files).html", L"039 App Number Shapes-subtitle-en.srt",
					L"039 App Number Shapes-subtitle-en.vtt", L"039 App Number Shapes.mp4", L"040 App Number Shapes (Java Code and Android Studio files).html",
					L"041 CCA Java Level 1.html", L"04 Media_ Images_ Video and Sound", L"042 Introduction-subtitle-en.srt", L"042 Introduction-subtitle-en.vtt",
					L"042 Introduction.mp4", L"043 Layout-subtitle-en.srt", L"043 Layout-subtitle-en.vtt", L"043 Layout.mp4", L"044 Layout (Android Studio files).html",
					L"045 Fading Animations-subtitle-en.srt", L"045 Fading Animations-subtitle-en.vtt", L"045 Fading Animations.mp4", L"046 Fading Animations (Android Studio files).html",
					L"047 Other Animations-subtitle-en.srt", L"047 Other Animations-subtitle-en.vtt", L"047 Other Animations.mp4", L"048 Other Animations (Android Studio files).html",
					L"049 Game Connect 3-subtitle-en.srt", L"049 Game Connect 3-subtitle-en.vtt", L"049 Game Connect 3.mp4", L"050 Game Connect 3 (Android Studio files).html",
					L"051 Video-subtitle-en.srt", L"051 Video-subtitle-en.vtt", L"051 Video.mp4", L"052 Video (Android Studio files).html", L"053 Controlling Audio-subtitle-en.srt",
					L"053 Controlling Audio-subtitle-en.vtt", L"053 Controlling Audio.mp4", L"054 Controlling Audio (Android Studio files).html",
					L"055 Audio Volume Seeking-subtitle-en.srt", L"055 Audio Volume Seeking-subtitle-en.vtt", L"055 Audio Volume Seeking.mp4", L"056 Audio Volume Seeking (Android Studio files).html",
					L"057 Grid Layouts-subtitle-en.srt", L"057 Grid Layouts-subtitle-en.vtt", L"057 Grid Layouts.mp4", L"058 Grid Layouts (Android Studio files).html",
					L"059 App Basic Phrases-subtitle-en.srt", L"059 App Basic Phrases-subtitle-en.vtt", L"059 App Basic Phrases.mp4", L"060 App Basic Phrases (Android Studio files).html",
					L"05 Advanced Android Features", L"061 Introduction-subtitle-en.srt", L"061 Introduction-subtitle-en.vtt", L"061 Introduction.mp4",
					L"062 List Views-subtitle-en.srt", L"062 List Views-subtitle-en.vtt", L"062 List Views.mp4", L"063 List Views (Android Studio files).html",
					L"064 Times Tables Apps-subtitle-en.srt", L"064 Times Tables Apps-subtitle-en.vtt", L"064 Times Tables Apps.mp4", L"065 Times Tables App (Android Studio Files).html",
					L"066 Timers In Android-subtitle-en.srt", L"066 Timers In Android-subtitle-en.vtt", L"066 Timers In Android.mp4", L"067 Timers In Android (Android Studio files).html",
					L"068 App_ Egg Timer-subtitle-en.srt", L"068 App_ Egg Timer-subtitle-en.vtt", L"068 App_ Egg Timer.mp4", L"069 App_ Egg Timer (Android Studio files).html",
					L"070 Showing  Hiding UI Elements-subtitle-en.srt", L"070 Showing  Hiding UI Elements-subtitle-en.vtt", L"070 Showing  Hiding UI Elements.mp4",
					L"071 Showing  Hiding UI Elements (Android Studio files).html", L"072 App_ Brain Trainer-subtitle-en.srt", L"072 App_ Brain Trainer-subtitle-en.vtt",
					L"072 App_ Brain Trainer.mp4", L"073 App_ Brain Trainer (Android Studio files).html", L"074 Try And Catch-subtitle-en.srt", L"074 Try And Catch-subtitle-en.vtt",
					L"074 Try And Catch.mp4", L"075 Try And Catch (Java files).html", L"076 Downloading Web Content-subtitle-en.srt", L"076 Downloading Web Content-subtitle-en.vtt",
					L"076 Downloading Web Content.mp4", L"077 Downloading Web Content (Android Studio files).html", L"078 Downloading Images-subtitle-en.srt",
					L"078 Downloading Images-subtitle-en.vtt", L"078 Downloading Images.mp4", L"079 Downloading Images (Android Studio files).html",
					L"080 Advanced String Manipulation-subtitle-en.srt", L"080 Advanced String Manipulation-subtitle-en.vtt", L"080 Advanced String Manipulation.mp4",
					L"081 Advanced String Manipulation (Java code).html", L"082 App Guess The Celebrity-subtitle-en.srt", L"082 App Guess The Celebrity-subtitle-en.vtt",
					L"082 App Guess The Celebrity.mp4", L"083 App Guess The Celebrity (Android Studio files).html", L"084 Processing JSON Data-subtitle-en.srt",
					L"084 Processing JSON Data-subtitle-en.vtt", L"084 Processing JSON Data.mp4", L"085 Processing JSON Data (Android Studio files).html",
					L"086 App Whats The Weather-subtitle-en.srt", L"086 App Whats The Weather-subtitle-en.vtt", L"086 App Whats The Weather.mp4",
					L"087 App Whats The Weather (Android Studio files).html", L"088 Section Summary-subtitle-en.srt", L"088 Section Summary-subtitle-en.vtt",
					L"088 Section Summary.mp4", L"089 CCA Java Level 2.html", L"06 Maps  Geolocation", L"090 Introduction-subtitle-en.srt", L"090 Introduction-subtitle-en.vtt",
					L"090 Introduction.mp4", L"091 Using Maps In Your Apps-subtitle-en.srt", L"091 Using Maps In Your Apps-subtitle-en.vtt", L"091 Using Maps In Your Apps.mp4",
					L"092 Using Maps In Your Apps (Android Studio files).html", L"093 Customising Your Maps-subtitle-en.srt", L"093 Customising Your Maps-subtitle-en.vtt",
					L"093 Customising Your Maps.mp4", L"094 Customising Your Maps (Android Studio files).html", L"095 Getting The Users Location-subtitle-en.srt",
					L"095 Getting The Users Location-subtitle-en.vtt", L"095 Getting The Users Location.mp4", L"096 Getting The Users Location (Android Studio files).html",
					L"097 Showing The Users Location On A Map-subtitle-en.srt", L"097 Showing The Users Location On A Map-subtitle-en.vtt", L"097 Showing The Users Location On A Map.mp4",
					L"098 Showing The Users Location On A Map (Android Studio files).html", L"099 Getting Information About Locations-subtitle-en.srt",
					L"099 Getting Information About Locations-subtitle-en.vtt", L"099 Getting Information About Locations.mp4", L"100 Getting Information About Locations (Android Studio files).html",
					L"101 App_ Hikers Watch-subtitle-en.srt", L"101 App_ Hikers Watch-subtitle-en.vtt", L"101 App_ Hikers Watch.mp4", L"102 App_ Hikers Watch (Android Studio files).html",
					L"103 Adding A New Activity-subtitle-en.srt", L"103 Adding A New Activity-subtitle-en.vtt", L"103 Adding A New Activity.mp4",
					L"104 Adding A New Activity (Android Studio files).html", L"105 App_ Memorable Places-subtitle-en.srt", L"105 App_ Memorable Places-subtitle-en.vtt",
					L"105 App_ Memorable Places.mp4", L"106 App_ Memorable Places (Android Studio files).html", L"07 Permanent Data Storage", L"107 Introduction-subtitle-en.srt",
					L"107 Introduction-subtitle-en.vtt", L"107 Introduction.mp4", L"108 Storing Data Permanently-subtitle-en.srt", L"108 Storing Data Permanently-subtitle-en.vtt",
					L"108 Storing Data Permanently.mp4", L"109 Storing Data Permanently (Android Studio files).html", L"110 Customising The Action Bar-subtitle-en.srt",
					L"110 Customising The Action Bar-subtitle-en.vtt", L"110 Customising The Action Bar.mp4", L"111 Customising The Action Bar (Android Studio files).html",
					L"112 Using Alert Dialogs-subtitle-en.srt", L"112 Using Alert Dialogs-subtitle-en.vtt", L"112 Using Alert Dialogs.mp4", L"113 Using Alert Dialogs (Android Studio files).html",
					L"114 App_ Notes-subtitle-en.srt", L"114 App_ Notes-subtitle-en.vtt", L"114 App_ Notes.mp4", L"115 App_ Notes (Android Studio files).html",
					L"116 SQLite Databases-subtitle-en.srt", L"116 SQLite Databases-subtitle-en.vtt", L"116 SQLite Databases.mp4", L"117 SQLite Databases (Android Studio files).html",
					L"118 Advanced SQLite-subtitle-en.srt", L"118 Advanced SQLite-subtitle-en.vtt", L"118 Advanced SQLite.mp4", L"119 Advanced SQLite (Android Studio files).html",
					L"120 Webviews-subtitle-en.srt", L"120 Webviews-subtitle-en.vtt", L"120 Webviews.mp4", L"121 Webviews (Android Studio files).html",
					L"122 App_ News Reader-subtitle-en.srt", L"122 App_ News Reader-subtitle-en.vtt", L"122 App_ News Reader.mp4", L"123 App_ News Reader (Android Studio files).html",
					L"08 Instagram Clone", L"124 Introduction-subtitle-en.srt", L"124 Introduction-subtitle-en.vtt", L"124 Introduction.mp4", L"125 Setting Up Parse Server On AWS-subtitle-en.srt",
					L"125 Setting Up Parse Server On AWS-subtitle-en.vtt", L"125 Setting Up Parse Server On AWS.mp4", L"126 Setting Up Parse On AWS (Android Studio files).html",
					L"127 Advanced Parse Techniques-subtitle-en.srt", L"127 Advanced Parse Techniques-subtitle-en.vtt", L"127 Advanced Parse Techniques.mp4",
					L"128 Advanced Parse Techniques (Android Studio files).html", L"129 Advanced Queries-subtitle-en.srt", L"129 Advanced Queries-subtitle-en.vtt",
					L"129 Advanced Queries.mp4", L"130 Advanced Queries (Android Studio files).html", L"131 Parse Users-subtitle-en.srt", L"131 Parse Users-subtitle-en.vtt",
					L"131 Parse Users.mp4", L"132 Parse Users (Android Studio files).html", L"133 Login  Sign"
			});
			this->txtSearch->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->txtSearch->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(246, 152);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(379, 16);
			this->txtSearch->TabIndex = 14;
			this->txtSearch->Text = L"Search keyword";
			this->txtSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MyForm::bunifuMaterialTextbox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GrayText;
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(245, 170);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(380, 5);
			this->panel1->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(873, 517);
			this->Controls->Add(this->bunifuFlatButton2);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->pathButton);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SIMZ";
			this->TransparencyKey = System::Drawing::SystemColors::Info;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Search_Engine S;
				 S.DirectorySearch(listBox2, txtSearch);
	}



private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bunifuMaterialTextbox1_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->listBox1->Items->Clear();
			 this->listBox2->Items->Clear();
			 for (recursive_directory_iterator temp("E:\\Search"), end; temp != end; ++temp)
			 {
				 string wordOne = temp->path().filename();
				 auto wordTwo = gcnew String(wordOne.c_str());
				 if (txtSearch->Text == wordTwo)
				 {
					 listBox1->Items->Add(wordTwo);
				 }
			 }
			 Search_Engine S;
			 S.DirectorySearch(listBox2, txtSearch);
			 
}
private: System::Void bunifuCards1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pathButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->listBox1->Items->Clear();
			 this->listBox2->Items->Clear();
			 String ^path = txtSearch->Text;
			 string pathTwo = marshal_as<string>(path);

			 for (recursive_directory_iterator temp(pathTwo), end; temp != end; ++temp)
			 {
				 string wordOne = temp->path().filename();
				 auto wordTwo = gcnew String(wordOne.c_str());
				 listBox1->Items->Add(wordTwo);
			 }			 
}

private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm::Refresh();
}

private: System::Void bunifuFlatButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^fullPath = txtSearch->Text;
			 string fullPathTwo = marshal_as<string>(fullPath);
			 const char* finalPath = fullPathTwo.c_str();
			 system(finalPath);
}
private: System::Void bunifuMaterialTextbox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
};
}
