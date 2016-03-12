/**************************************************************************
***************************************************************************
***************************************************************************
***                                                         			***
***                   		ID INFORMATION                         		***
***                                                         			***
***		Programmers				:			Daniel Maris				***
***		Assignment #		 	:   		TA #1_5GGF					***
***		Assignment Name			:	    	GUI Goofy Functions			***
***		Course # and Title		:	    	CISC 192 - C++				***
***		Class Meeting Time		:	    	MW 9:35 – 12:45				***
***		Instructor				:	    	Professor Forman 			***
***		Hours			   		:			26							***
***		Difficulty				:	    	8							***
***		Completion Date			:	    	03/14/2016  				***
***		Project Name			:  	    	DanielsGGF					***
***                                                         			***
***************************************************************************
***************************************************************************
***                                                         			***
***                   	     PROGRAM DESCRIPTION						***
***                                                         			***
***   	This program will display various quirks from myself in			***
***		Professor Forman's C++ class. You are able to view Daniels'		***
***		Quirks Buttons 1 & 2, a Home button and Exit Button. There is	***
***		also a menu strip at the top that you can select different		***
***		music from a list, the quirks froma list and an Exit button.	***
***		Once clicking either Quirks button, you will be displayed with	***
***		a gif image, a tune and the quirk itself alongside a picture.	***
***		The Home button brings you back to the date and time with BG	***
***		music. The Exit button will then close the program followed		***
***		by several message boxes that detail the information within		***
***		the program itself.												***
***                                                         			***
***************************************************************************
***************************************************************************
***						   CUSTOM DEFINED FUNCTIONS						***
***						 												***
***								NONE ENTERED							***
***																		***
***************************************************************************
***************************************************************************
***							EVENT DRIVEN FUNCTIONS						***
***																		***
***		musicToolStripMenuItem;											***
***		electionToolStripMenuItem;										***
***		americaToolStripMenuItem;										***
***		bernieToolStripMenuItem;										***
***		noSongToolStripMenuItem;										***
***		quirksToolStripMenuItem;										***
***		quirkOneToolStripMenuItem;										***
***		quirkTwoToolStripMenuItem;										***
***		bernieExit;														***
***		bernieFinal;													***
***		bernieMatrix;													***
***		buttonHome;														***
***		pictureMainBG;													***
***		buttonQuirk1;													***
***		buttonQuirk2;													***
***		labelWelcome;													***
***		labelQuirk1;													***
***		labelQuirk2;													***
***		buttonExit;														***
***		quirkTitle1;													***
***		quirkTitle2;													***
***		quirk1Timer;													***
***		quirk2Timer;													***
***		musicPlayer;													***
***		songElection;													***
***		songAmerica;													***
***		songBernie;														***
***		exitToolStripMenuItem;											***
***		songFight;														***
***		dateTimeDisplay;												***
***		timeDisplayTimer;												***
***		currentDTLabel;													***
***		bernieEllen;													***
***		songEllen;														***
***		twitchPicture;													***
***		ranchPicture;													***
***																		***
***************************************************************************
***************************************************************************
***                               CREDITS                         		***
***																		***
***																		***
***   	Thank you to everyone that was able to help me with tips		***
***		and tricks to get some of the lines in here working proper!		***
***                                                         			***
***   	Thanks for assistance and help from:           					***
***                                                         			***
***        Mohamed, JP, Johnny, Sean & Professor Forman					***
***                                                         			***
***   	Thanks for the opportunity to assist and inspire:				***
***																		***
***		   Myself :)													***
***																		***
***                                                         			***
***************************************************************************
***************************************************************************
***								MEDIA CREDITS							***
***																		***
***			GRAPHICS USED:												***
***			1. Matrix Bernie GIF: http://goo.gl/20h1Sv					***
***			2. Candidate BG Photo: http://goo.gl/jKMZW4					***
***			3. Ellen Bernie GIF: https://goo.gl/YZW59x					***
***			4. Bernie Ending GIF: http://goo.gl/5BT75A					***
***			5. Bernie Killer-Mike: http://goo.gl/6ZetQH					***
***			6. Twitch Photo: http://goo.gl/tGyXh8						***
***			7. Ranch Photo: https://goo.gl/Zhlcu6						***
***																		***
***			AUDIO/VIDEO USED:											***
***			1. Bernie Sanders Hotline Bling GIF: https://goo.gl/S9mt1p	***
***			2. America | Bernie Sanders YT: https://goo.gl/6MdJzs		***
***			3. Bernie Theme Song: https://goo.gl/XFdOjC					***
***			4. MSNBC Election Theme: https://goo.gl/PSEVtt				***
***																		***
***************************************************************************
***************************************************************************
***									STARS								***
***																		***
***			1. Effective use of foreground and background colors in		***
***			   buttons as well as font and images.						***
***			2. Used a timer for date and time, that changed every		***
***			   second.													***
***			3. Play Sound in the Exit Button							***
***			4. Use of Advanced Features: MenuBar included with options	***
***		       of music selection, quirks and exit.						***
***			5. Use of MP3 by using Windows Media Player function.		***
***			6. Re-positioning active date & time to corner during		***
***			   transitions. Added Drawing Systems to Form.				***
***																		***
***			TOTAL STARS: 6 STARS										***
***																		***
***************************************************************************
**************************************************************************/

///////////////////////////////////////////////////////////////////////////
//																		 //
//						BEGIN PROGRAM HERE								 //
//																		 //
///////////////////////////////////////////////////////////////////////////	

#include <windows.h> //Allows certain colors and also exit(1); function to close Program.
#pragma once

namespace DanielsGGF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DanielsGGFForm
	/// </summary>
	public ref class DanielsGGFForm : public System::Windows::Forms::Form
	{
	public:
		DanielsGGFForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			introTimer->Start();
			introStarWars->Visible = true;
			introStarWars->URL = ".\\starwars.mp4";
			introStarWars->Ctlcontrols->play();
			skipButton->Visible = true;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DanielsGGFForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^  introStarWars;
	private: System::Windows::Forms::PictureBox^  welcomeBG;

	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::Timer^  introTimer;
	private: System::Windows::Forms::Button^  skipButton;
	private: System::Windows::Forms::TextBox^  userNameText;
	private: System::Windows::Forms::Button^  userNameButton;


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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DanielsGGFForm::typeid));
			this->introStarWars = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->welcomeBG = (gcnew System::Windows::Forms::PictureBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->introTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->skipButton = (gcnew System::Windows::Forms::Button());
			this->userNameText = (gcnew System::Windows::Forms::TextBox());
			this->userNameButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->introStarWars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->welcomeBG))->BeginInit();
			this->SuspendLayout();
			// 
			// introStarWars
			// 
			this->introStarWars->Enabled = true;
			this->introStarWars->Location = System::Drawing::Point(-8, 0);
			this->introStarWars->Name = L"introStarWars";
			this->introStarWars->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"introStarWars.OcxState")));
			this->introStarWars->Size = System::Drawing::Size(751, 509);
			this->introStarWars->TabIndex = 0;
			this->introStarWars->Visible = false;
			// 
			// welcomeBG
			// 
			this->welcomeBG->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"welcomeBG.Image")));
			this->welcomeBG->Location = System::Drawing::Point(-8, 0);
			this->welcomeBG->Name = L"welcomeBG";
			this->welcomeBG->Size = System::Drawing::Size(751, 453);
			this->welcomeBG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->welcomeBG->TabIndex = 1;
			this->welcomeBG->TabStop = false;
			this->welcomeBG->Visible = false;
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::Black;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Stencil Std", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->startButton->Location = System::Drawing::Point(202, 174);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(317, 99);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"CLICK HERE TO TRAVEL!";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Visible = false;
			this->startButton->Click += gcnew System::EventHandler(this, &DanielsGGFForm::startButton_Click);
			// 
			// introTimer
			// 
			this->introTimer->Interval = 24000;
			this->introTimer->Tick += gcnew System::EventHandler(this, &DanielsGGFForm::introTimer_Tick);
			// 
			// skipButton
			// 
			this->skipButton->BackColor = System::Drawing::Color::Black;
			this->skipButton->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skipButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->skipButton->Location = System::Drawing::Point(646, 400);
			this->skipButton->Name = L"skipButton";
			this->skipButton->Size = System::Drawing::Size(77, 37);
			this->skipButton->TabIndex = 3;
			this->skipButton->Text = L"Skip";
			this->skipButton->UseVisualStyleBackColor = false;
			this->skipButton->Visible = false;
			this->skipButton->Click += gcnew System::EventHandler(this, &DanielsGGFForm::skipButton_Click);
			// 
			// userNameText
			// 
			this->userNameText->Font = (gcnew System::Drawing::Font(L"Impact", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userNameText->Location = System::Drawing::Point(255, 279);
			this->userNameText->Name = L"userNameText";
			this->userNameText->Size = System::Drawing::Size(220, 38);
			this->userNameText->TabIndex = 4;
			this->userNameText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->userNameText->Visible = false;
			// 
			// userNameButton
			// 
			this->userNameButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userNameButton.BackgroundImage")));
			this->userNameButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->userNameButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->userNameButton->Font = (gcnew System::Drawing::Font(L"Stencil Std", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userNameButton->Location = System::Drawing::Point(267, 338);
			this->userNameButton->Name = L"userNameButton";
			this->userNameButton->Size = System::Drawing::Size(198, 45);
			this->userNameButton->TabIndex = 5;
			this->userNameButton->Text = L"CONFIRM IDENTITY";
			this->userNameButton->UseVisualStyleBackColor = true;
			this->userNameButton->Visible = false;
			this->userNameButton->Click += gcnew System::EventHandler(this, &DanielsGGFForm::userNameButton_Click);
			// 
			// DanielsGGFForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 449);
			this->Controls->Add(this->userNameButton);
			this->Controls->Add(this->userNameText);
			this->Controls->Add(this->skipButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->welcomeBG);
			this->Controls->Add(this->introStarWars);
			this->Name = L"DanielsGGFForm";
			this->Text = L"DanielsGGFForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->introStarWars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->welcomeBG))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
///////////////////////////////////////////////////////////////////////////
//																		 //
//			   GLOBAL CONSTANTS DECLARATIONS AND DEFINITIONS			 //
//																		 //	
		String^ MY_NAME = "Daniel";										 //
//																		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//																		 //
//				   	  GLOBAL VARIABLE DECLARATIONS						 //
//																		 //
		String^ userName;			//Login Name Defined				 //
//																		 //
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//			 															 //
//				BEGINNING OF NON-EVENT DRIVEN FUNCTIONS LIST			 //
//																		 //
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			welcome()										 //
//																		 //
//		DESCRIPTION:	This button clicks Home where the Clock and		 //
//						Welcome screen displays with Music in the BG.	 //
//																		 //
///////////////////////////////////////////////////////////////////////////


		void welcome()
		{
			System::Drawing::Graphics^ oneGraphic = this->CreateGraphics();

			System::Drawing::Font^ impactFont = gcnew Drawing::Font("Impact", 19);

			System::Drawing::Brush^ oneBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::Maroon);

			Image^ welcome = Image::FromFile("welcomeBG.gif");

			oneGraphic->Clear(Color::White);
			oneGraphic->DrawImage(welcome, 0, 0);

			oneGraphic->DrawString("Welcome to Daniel's Intergalactic Travel Agency!", impactFont, oneBrush, 110, 40);
			oneGraphic->DrawString("      Please Enter Your First & Last Name\n as Displayed On Your Galactice License!", impactFont, oneBrush, 160, 130);
			userNameText->Visible = true;
			userNameButton->Visible = true;

			for (int i = 0; i < 5; i++)
			{
				System::Drawing::Brush^ anotherBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::FromArgb(189 - 20 * i, 80 + 30 * i, 80 - 20 * i));
				oneGraphic->FillEllipse(anotherBrush, 290 + 8 * i, 230 + 8 * i, 160 - 16 * i, 160 - 16 * i);
			}
		}
	private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e)
	{

		startButton->Visible = false;
		skipButton->Visible = false;
		introStarWars->Visible = false;
		welcome();
		return;

	}

	private: System::Void skipButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		introStarWars->Ctlcontrols->stop();
		introStarWars->Visible = false;
		skipButton->Visible = false;
		//welcomeBG->Visible = true;
		startButton->Visible = true;
	}

	private: System::Void introTimer_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		introTimer->Stop();
		introStarWars->Visible = false;
		skipButton->Visible = false;
		//welcomeBG->Visible = true;
		startButton->Visible = true;
	}

	private: System::Void userNameButton_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	};
}
