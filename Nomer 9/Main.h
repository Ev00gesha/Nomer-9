#pragma once
#include "moving.h"

//�������������� ������ ������
const int weigth_fig = 3;
const int heigth_fig = 4;

//� �������� �������� ����� ������
int null[heigth_fig][weigth_fig] = { {0, 0, 0}, {0, -1, 0}, {0, -1, 0}, {0, 0, 0} };
int one[heigth_fig][weigth_fig] = { {1, 1, -1}, { -1, 1, -1}, {-1, 1, -1}, {-1, 1, -1} };
int two[heigth_fig][weigth_fig] = { {-1, 2, 2}, {-1, 2, 2}, {2, 2, -1}, {2, 2, 2} };
int three[heigth_fig][weigth_fig] = { {3, 3, 3}, {-1, -1, 3}, {-1, 3, 3}, {3, 3, 3} };
int four[heigth_fig][weigth_fig] = { {-1, 4, 4}, {-1, 4, -1}, {4, 4, 4}, {-1, 4,4} };
int five[heigth_fig][weigth_fig] = { {5, 5, 5}, {5, 5, 5}, {-1, -1, 5}, {5, 5, 5} };
int six[heigth_fig][weigth_fig] = { {6, 6, -1}, {6, -1, -1}, {6, 6, 6}, {6, 6, 6} };
int seven[heigth_fig][weigth_fig] = { {7, 7, 7}, {-1, 7, -1}, {7, 7, -1}, {7, -1, -1} };
int eight[heigth_fig][weigth_fig] = { {-1, 8, 8}, {-1, 8, 8}, {8, 8, -1}, {8, 8, -1} };
int nine[heigth_fig][weigth_fig] = { {9, 9, 9}, {9, 9, 9}, {9, 9, -1}, {9, 9, -1} };

//������������ ������ ��� ������� ������
int** current_fig;

namespace Nomer9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Net;
	using namespace System::Net::Sockets;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ play;
	protected:
	private: System::Windows::Forms::Button^ multiply;
	protected:
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ again;
	private: System::Windows::Forms::Button^ in_menu_game;
	private: System::Windows::Forms::Button^ join_game;
	private: System::Windows::Forms::Button^ create_game;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ your_ip;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ entry_IP;
	private: System::Windows::Forms::TextBox^ tb_entry_IP;
	private: System::Windows::Forms::Label^ entry_port;
	private: System::Windows::Forms::TextBox^ tb_entry_port;
	private: System::Windows::Forms::Button^ join_game_in_game;
	private: System::Windows::Forms::Button^ in_menu_multiply;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ create_game_in_game;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::Button^ button1;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->play = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->again = (gcnew System::Windows::Forms::Button());
			this->in_menu_game = (gcnew System::Windows::Forms::Button());
			this->join_game = (gcnew System::Windows::Forms::Button());
			this->create_game = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->your_ip = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->entry_IP = (gcnew System::Windows::Forms::Label());
			this->tb_entry_IP = (gcnew System::Windows::Forms::TextBox());
			this->entry_port = (gcnew System::Windows::Forms::Label());
			this->tb_entry_port = (gcnew System::Windows::Forms::TextBox());
			this->join_game_in_game = (gcnew System::Windows::Forms::Button());
			this->in_menu_multiply = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->create_game_in_game = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// play
			// 
			this->play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->play->Location = System::Drawing::Point(0, 0);
			this->play->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(340, 100);
			this->play->TabIndex = 0;
			this->play->Text = L"������";
			this->play->UseVisualStyleBackColor = true;
			this->play->Click += gcnew System::EventHandler(this, &MyForm::play_Click);
			// 
			// multiply
			// 
			this->multiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->multiply->Location = System::Drawing::Point(0, 0);
			this->multiply->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(340, 100);
			this->multiply->TabIndex = 1;
			this->multiply->Text = L"������ ������";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// exit
			// 
			this->exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(0, 0);
			this->exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(340, 100);
			this->exit->TabIndex = 2;
			this->exit->Text = L"�����";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 220);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(120, 160);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 64);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::rotate_right);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(0, 0);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(64, 64);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::rotate_left);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1901, 1033);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1021, 414);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 47);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			// 
			// again
			// 
			this->again->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->again->BackColor = System::Drawing::Color::Black;
			this->again->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->again->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->again->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->again->Location = System::Drawing::Point(0, 0);
			this->again->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->again->Name = L"again";
			this->again->Size = System::Drawing::Size(200, 80);
			this->again->TabIndex = 9;
			this->again->Text = L"������ ������";
			this->again->UseVisualStyleBackColor = true;
			this->again->Click += gcnew System::EventHandler(this, &MyForm::again_Click);
			// 
			// in_menu_game
			// 
			this->in_menu_game->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->in_menu_game->BackColor = System::Drawing::Color::Black;
			this->in_menu_game->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->in_menu_game->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->in_menu_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->in_menu_game->Location = System::Drawing::Point(0, 0);
			this->in_menu_game->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->in_menu_game->Name = L"in_menu_game";
			this->in_menu_game->Size = System::Drawing::Size(200, 80);
			this->in_menu_game->TabIndex = 10;
			this->in_menu_game->Text = L"��������� � ������� ����";
			this->in_menu_game->UseVisualStyleBackColor = true;
			this->in_menu_game->Click += gcnew System::EventHandler(this, &MyForm::in_menu_game_Click);
			// 
			// join_game
			// 
			this->join_game->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->join_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->join_game->Location = System::Drawing::Point(0, 0);
			this->join_game->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->join_game->Name = L"join_game";
			this->join_game->Size = System::Drawing::Size(340, 100);
			this->join_game->TabIndex = 12;
			this->join_game->Text = L"�������������� � ����";
			this->join_game->UseVisualStyleBackColor = true;
			this->join_game->Visible = false;
			this->join_game->Click += gcnew System::EventHandler(this, &MyForm::join_game_Click);
			// 
			// create_game
			// 
			this->create_game->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->create_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->create_game->Location = System::Drawing::Point(0, 0);
			this->create_game->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_game->Name = L"create_game";
			this->create_game->Size = System::Drawing::Size(340, 100);
			this->create_game->TabIndex = 13;
			this->create_game->Text = L"������� ����";
			this->create_game->UseVisualStyleBackColor = true;
			this->create_game->Visible = false;
			this->create_game->Click += gcnew System::EventHandler(this, &MyForm::create_game_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MyForm::backgroundWorker1_RunWorkerCompleted);
			// 
			// your_ip
			// 
			this->your_ip->AutoSize = true;
			this->your_ip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->your_ip->Location = System::Drawing::Point(292, 196);
			this->your_ip->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->your_ip->Name = L"your_ip";
			this->your_ip->Size = System::Drawing::Size(230, 69);
			this->your_ip->TabIndex = 16;
			this->your_ip->Text = L"��� IP";
			this->your_ip->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(311, 470);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(308, 60);
			this->textBox2->TabIndex = 17;
			this->textBox2->Visible = false;
			// 
			// entry_IP
			// 
			this->entry_IP->AutoSize = true;
			this->entry_IP->BackColor = System::Drawing::Color::Transparent;
			this->entry_IP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->entry_IP->Location = System::Drawing::Point(295, 196);
			this->entry_IP->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->entry_IP->Name = L"entry_IP";
			this->entry_IP->Size = System::Drawing::Size(347, 69);
			this->entry_IP->TabIndex = 18;
			this->entry_IP->Text = L"������� IP";
			this->entry_IP->Visible = false;
			// 
			// tb_entry_IP
			// 
			this->tb_entry_IP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tb_entry_IP->Location = System::Drawing::Point(311, 304);
			this->tb_entry_IP->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tb_entry_IP->Name = L"tb_entry_IP";
			this->tb_entry_IP->Size = System::Drawing::Size(401, 60);
			this->tb_entry_IP->TabIndex = 19;
			this->tb_entry_IP->Visible = false;
			// 
			// entry_port
			// 
			this->entry_port->AutoSize = true;
			this->entry_port->BackColor = System::Drawing::Color::Transparent;
			this->entry_port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->entry_port->Location = System::Drawing::Point(1112, 196);
			this->entry_port->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->entry_port->Name = L"entry_port";
			this->entry_port->Size = System::Drawing::Size(418, 69);
			this->entry_port->TabIndex = 20;
			this->entry_port->Text = L"������� ����";
			this->entry_port->Visible = false;
			// 
			// tb_entry_port
			// 
			this->tb_entry_port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tb_entry_port->Location = System::Drawing::Point(1124, 304);
			this->tb_entry_port->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tb_entry_port->Name = L"tb_entry_port";
			this->tb_entry_port->Size = System::Drawing::Size(308, 60);
			this->tb_entry_port->TabIndex = 21;
			this->tb_entry_port->Visible = false;
			// 
			// join_game_in_game
			// 
			this->join_game_in_game->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->join_game_in_game->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->join_game_in_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->join_game_in_game->Location = System::Drawing::Point(300, 750);
			this->join_game_in_game->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->join_game_in_game->Name = L"join_game_in_game";
			this->join_game_in_game->Size = System::Drawing::Size(300, 90);
			this->join_game_in_game->TabIndex = 22;
			this->join_game_in_game->Text = L"�������������� � ����";
			this->join_game_in_game->UseVisualStyleBackColor = true;
			this->join_game_in_game->Visible = false;
			this->join_game_in_game->Click += gcnew System::EventHandler(this, &MyForm::join_game_in_game_Click);
			// 
			// in_menu_multiply
			// 
			this->in_menu_multiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->in_menu_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->in_menu_multiply->Location = System::Drawing::Point(0, 0);
			this->in_menu_multiply->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->in_menu_multiply->Name = L"in_menu_multiply";
			this->in_menu_multiply->Size = System::Drawing::Size(340, 100);
			this->in_menu_multiply->TabIndex = 12;
			this->in_menu_multiply->Text = L"��������� � ������� ����";
			this->in_menu_multiply->UseVisualStyleBackColor = true;
			this->in_menu_multiply->Visible = false;
			this->in_menu_multiply->Click += gcnew System::EventHandler(this, &MyForm::in_menu_multiply_Click);
			// 
			// back
			// 
			this->back->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->back->Location = System::Drawing::Point(300, 750);
			this->back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(300, 90);
			this->back->TabIndex = 23;
			this->back->Text = L"��������� �����";
			this->back->UseVisualStyleBackColor = true;
			this->back->Visible = false;
			this->back->Click += gcnew System::EventHandler(this, &MyForm::back_Click);
			// 
			// create_game_in_game
			// 
			this->create_game_in_game->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->create_game_in_game->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_game_in_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->create_game_in_game->Location = System::Drawing::Point(300, 750);
			this->create_game_in_game->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->create_game_in_game->Name = L"create_game_in_game";
			this->create_game_in_game->Size = System::Drawing::Size(300, 90);
			this->create_game_in_game->TabIndex = 24;
			this->create_game_in_game->Text = L"������� ����";
			this->create_game_in_game->UseVisualStyleBackColor = true;
			this->create_game_in_game->Visible = false;
			this->create_game_in_game->Click += gcnew System::EventHandler(this, &MyForm::create_game_in_game_Click);
			// 
			// backgroundWorker2
			// 
			this->backgroundWorker2->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker2_DoWork);
			this->backgroundWorker2->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MyForm::backgroundWorker2_RunWorkerCompleted);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 80);
			this->button1->TabIndex = 25;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->ClientSize = System::Drawing::Size(1901, 1033);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->create_game_in_game);
			this->Controls->Add(this->back);
			this->Controls->Add(this->in_menu_game);
			this->Controls->Add(this->again);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->play);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->join_game_in_game);
			this->Controls->Add(this->tb_entry_port);
			this->Controls->Add(this->entry_port);
			this->Controls->Add(this->tb_entry_IP);
			this->Controls->Add(this->entry_IP);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->your_ip);
			this->Controls->Add(this->create_game);
			this->Controls->Add(this->join_game);
			this->Controls->Add(this->in_menu_multiply);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Nomer 9";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int mapsize = 0; //������ ����(�� ��������� 0)
		int WINDOW_HEIGHT, WINDOW_WIDTH;//���������� ��� �������� �������� ����
		const int cellsize = 40; //������ ������� ������ 
		int cur_num = 0; //����� ������� �����
		int cur_heigth = heigth_fig; //������ ������� �����
		int cur_weigth = weigth_fig; //������ ������� �����
		int count_right = 0; //���������� ��������� ������
		int count_left = 0; //���������� ��������� �����
		int kolvo_layer = 2; //���������� ����� �������� ����
		int step = 0; //���������� �����
		int total_step = 20;
		int** map = new int* [mapsize + 2]; // ������� ����
		bool next_step = true; //������������ ���������� �� �������� ������
		bool do_step = false; //������������ ����� �� ������� ������ �� ������� ����
		bool first = true; //������������ �������������� ������ � ����� ������ ����
		bool first_fig = true; //������������ ����� ������ ������ �� ����
		bool joined_game = false;//������������ ����������������� �� ��������� ����
		bool created_game = false;//������������ ��������� ��������� ����
		bool single = false;//������������ ��������� ����
		bool train = true;//������������ ��������� ������� � ����� ������ ����
		bool next_num = true;//������������ ����� �� ������ ����� ������� ���

		bool create_init = false;
		bool new_num = false;
		bool result = false;
		int created_point;
		int joined_point;
		String^ bufer;

		array<Button^, 2>^ buttons;//������ ������ (������� ����)
		array<int**>^ layers;//������ ��������� �������� � �������� �������� ��� ������������ ����� �� ������� ����
		String^ ip = "";

		moving^ m = gcnew moving();
		Image^ picture;

	private: void rewrite_field()//����� ����� ����� � ������ ������������ ������������ ������ � �������� ����
	{
		try
		{
			for (int i = 2; i < layers->Length; i++)
			{
				for (int k = 0; k < mapsize + 2; k++)
				{
					for (int l = 0; l < mapsize + 2; l++)
					{
						if (layers[i - 1][k][l] >= 0)
						{
							if (layers[i][k][l] < 0)
								layers[i][k][l] = -1;
						}
						else
						{
							layers[i][k][l] = -2;
						}
					}
				}
			}
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: bool check_for_add_layer(int start_x, int start_y)//�������� �� ���������� ������ �������� ���� 
	{
		try
		{
			for (int m = start_y, k = 0; m < start_y + cur_heigth && k < cur_heigth; m++, k++)
			{
				for (int n = start_x, l = 0; n < start_x + cur_weigth && l < cur_weigth; n++, l++)
				{
					if (current_fig[k][l] >= 0)
					{
						if (layers[kolvo_layer - 1][m][n] < 0)
						{
							return false;
						}
					}
				}
			}
			return true;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void add_layer()//������� ����� ����
	{
		try
		{
			array<int**>^ tmp = gcnew array<int**>(kolvo_layer);//������� ������ ������, ��� �������� ����������� �������� ����
			tmp = layers;
			kolvo_layer++;
			layers = gcnew array<int**>(kolvo_layer);//������� ����� ������� ���� �� ���� ���� ������
			for (int i = 0; i < kolvo_layer - 1; i++)//���������� � ����� ����, ������
			{
				layers[i] = tmp[i];
			}
			//������� ������ � ������� �������� ����� ����
			int** layer = new int* [mapsize + 2];
			for (int i = 0; i < mapsize + 2; i++)
			{
				layer[i] = new int[mapsize + 2];
				for (int j = 0; j < mapsize + 2; j++)
				{
					if (layers[kolvo_layer - 2][i][j] >= 0)
					{
						layer[i][j] = -1;
					}
					else
					{
						layer[i][j] = -2;
					}
				}
			}
			layers[kolvo_layer - 1] = layer;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: bool check_layer(int start_x, int start_y, int a)//�������� ����� �� �� ��������� � ������ ����� ������
	{
		try
		{
			for (int m = start_y, k = 0; m < start_y + cur_heigth && k < cur_heigth; m++, k++)
			{
				for (int n = start_x, l = 0; n < start_x + cur_weigth && l < cur_weigth; n++, l++)
				{
					if (current_fig[k][l] >= 0)
					{
						if (layers[a][m][n] == -1)
						{
							continue;
						}
						else
						{
							return false;
						}
					}
				}
			}
			return true;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: bool check_rule(int start_x, int start_y, int layer)//�������� ����� ����������� ������ ���� �� ����� ������� �������� ������ ������ 
	{
		try
		{
			//������� �������� ������ � ������� ��������� �� ����� ������ -1 ��� ���������� �������� 
			int** bufer = new int* [cur_heigth + 2];
			for (int i = 0; i < cur_heigth + 2; i++)
			{
				bufer[i] = new int[cur_weigth + 2];
				for (int j = 0; j < cur_weigth + 2; j++)
				{
					if (i == 0 || i == cur_heigth + 1 || j == 0 || j == cur_weigth + 1)
					{
						bufer[i][j] = -1;
					}
					if (i >= 1 && i < cur_heigth + 1 && j >= 1 && j < cur_weigth + 1)
					{
						bufer[i][j] = current_fig[i - 1][j - 1];
					}
				}
			}

			//�������� �� ������ ����� ������
			for (int m = start_y, k = 0; m < start_y + cur_heigth + 1 && k < cur_heigth; m++, k++)
			{
				for (int n = start_x, l = 0; n < start_x + cur_weigth + 1 && l < cur_weigth; n++, l++)
				{
					if (current_fig[k][l] >= 0)//���� � ������ ����� ���� ����� ������, ��������� ����� ������, �����, �����, ������
					{
						if (layers[layer][m][n + 1] >= 0 && bufer[k + 1][l + 1 + 1] < 0)
							return true;
						if (layers[layer][m][n - 1] >= 0 && bufer[k + 1][l - 1 + 1] < 0)
							return true;
						if (layers[layer][m - 1][n] >= 0 && bufer[k - 1 + 1][l + 1] < 0)
							return true;
						if (layers[layer][m + 1][n] >= 0 && bufer[k + 1 + 1][l + 1] < 0)
							return true;
					}
				}
			}
			return false;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: bool check_rule2(int start_x, int start_y, int a)//�������� ����� ������ ������� ������ �� ����� �� ������ ����� 
	{
		try
		{
			for (int m = start_y, k = 0; m < start_y + cur_heigth && k < cur_heigth; m++, k++)
			{
				for (int n = start_x, l = 0; n < start_x + cur_weigth && l < cur_weigth; n++, l++)
				{
					if (current_fig[k][l] >= 0)
					{
						if (layers[a - 1][m][n] != current_fig[k][l])
						{
							return true;
						}
					}
				}
			}
			return false;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void set_texture(int start_x, int start_y, int pic)//��������� ������ �� ������� ���� 
	{
		try
		{
			m->stop_move();
			int total_rotate = count_right - count_left;
			next_step = true;
			if (new_num)
			{
				create_sender("continue");
			}
			switch (total_rotate)
			{
			case 0:
				for (int n = 0; n < cur_heigth; n++)
				{
					for (int m = 0; m < cur_weigth; m++)
					{
						if (current_fig[n][m] >= 0)
						{
							buttons[start_y + n - 1, start_x + m - 1]->Image = Image::FromFile(String::Format("Pictures\\{0}{1}{2}.png", pic, n, m));
							buttons[start_y + n - 1, start_x + m - 1]->FlatStyle = FlatStyle::Flat;
							buttons[start_y + n - 1, start_x + m - 1]->FlatAppearance->BorderSize = 0;
						}
					}
				}
				break;
			case 1:
			case -3:
				for (int n = 0; n < cur_heigth; n++)
				{
					for (int m = 0; m < cur_weigth; m++)
					{
						if (current_fig[n][m] >= 0)
						{
							Image^ a = Image::FromFile(String::Format("Pictures\\{0}{1}{2}.png", pic, cur_weigth - m - 1, n));
							a->RotateFlip(System::Drawing::RotateFlipType::Rotate270FlipXY);
							buttons[start_y + n - 1, start_x + m - 1]->Image = a;
							buttons[start_y + n - 1, start_x + m - 1]->FlatStyle = FlatStyle::Flat;
							buttons[start_y + n - 1, start_x + m - 1]->FlatAppearance->BorderSize = 0;
						}
					}
				}
				break;
			case 2:
			case -2:
				for (int n = 0; n < cur_heigth; n++)
				{
					for (int m = 0; m < cur_weigth; m++)
					{
						if (current_fig[n][m] >= 0)
						{
							Image^ a = Image::FromFile(String::Format("Pictures\\{0}{1}{2}.png", pic, cur_heigth - n - 1, cur_weigth - m - 1));
							a->RotateFlip(System::Drawing::RotateFlipType::Rotate180FlipNone);
							buttons[start_y + n - 1, start_x + m - 1]->Image = a;
							buttons[start_y + n - 1, start_x + m - 1]->FlatStyle = FlatStyle::Flat;
							buttons[start_y + n - 1, start_x + m - 1]->FlatAppearance->BorderSize = 0;
						}
					}
				}
				break;
			case 3:
			case -1:
				for (int n = 0; n < cur_heigth; n++)
				{
					for (int m = 0; m < cur_weigth; m++)
					{
						if (current_fig[n][m] >= 0)
						{
							Image^ a = Image::FromFile(String::Format("Pictures\\{0}{1}{2}.png", pic, m, cur_heigth - n - 1));
							a->RotateFlip(System::Drawing::RotateFlipType::Rotate90FlipXY);
							buttons[start_y + n - 1, start_x + m - 1]->Image = a;
							buttons[start_y + n - 1, start_x + m - 1]->FlatStyle = FlatStyle::Flat;
							buttons[start_y + n - 1, start_x + m - 1]->FlatAppearance->BorderSize = 0;
						}
					}
				}
				break;
			default:
				break;
			}
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void set_background(int start_x, int start_y, int col)//��������� ������ ����� ������ ��� ��������� �� ����� ���� ��������� ������
	{
		try
		{
			array<Color>^ color = { Color::White, Color::Yellow, Color::Blue, Color::Red, Color::Green, Color::Pink, Color::Brown, Color::Gold };
			for (int k = 0; k < cur_heigth; k++)
			{
				for (int l = 0; l < cur_weigth; l++)
				{
					if (current_fig[k][l] >= 0)
					{
						buttons[start_y + k - 1, start_x + l - 1]->FlatAppearance->BorderSize = 1;
						buttons[start_y + k - 1, start_x + l - 1]->FlatAppearance->BorderColor = color[col - 1];
					}
				}
			}
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: int point_counter()//������� ������� ������� � ����� ���� ���������� �����
	{
		try
		{
			int count[10] = { 10, 5, 9, 9, 8, 10, 9, 7, 8, 10 };
			int result = 0;
			for (int i = 1; i < layers->Length; i++)
			{
				int points[10] = { 0 };
				for (int k = 0; k < mapsize + 2; k++)
				{
					for (int l = 0; l < mapsize + 2; l++)
					{
						if (layers[i][k][l] >= 0)
						{
							int a = layers[i][k][l];
							points[a] += 1;
						}
					}
				}
				for (int j = 0; j < 10; j++)
				{
					result += (points[j] / count[j]) * j * (i - 1);
				}
			}
			return result;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void rot_rght()
	{
		try
		{
			count_right++;
			if (count_right == 4)
			{
				count_right = 0;
			}
			int** tmp = new int* [cur_heigth];//�������� ������
			for (int i = 0; i < cur_heigth; i++)
			{
				tmp[i] = new int[cur_weigth];
			}
			for (int i = 0; i < cur_heigth; i++)//�������������� �� ������� ������� � ��������
			{
				for (int j = 0; j < cur_weigth; j++)
				{
					tmp[i][j] = current_fig[i][j];
				}
			}
			//������ ������� (������ = ������, ������ = ������)
			int r1 = cur_heigth, r2 = cur_weigth;
			cur_weigth = r1;
			cur_heigth = r2;
			current_fig = new int* [cur_heigth];
			for (int i = 0; i < cur_heigth; i++)
			{
				current_fig[i] = new int[cur_weigth];
			}
			//�������������� ������, �� � ������ ���������
			for (int i = 0, k = 0; i < cur_heigth; i++, k++)
			{
				for (int j = cur_weigth - 1, l = 0; j >= 0; j--, l++)
				{
					current_fig[k][l] = tmp[j][i];
				}
			}
			//������������ ��������
			Image^ a = pictureBox1->Image;
			a->RotateFlip(System::Drawing::RotateFlipType::Rotate270FlipXY);
			pictureBox1->Image = a;
			m->pict = a;
			m->figure = current_fig;
			m->heigth = cur_heigth;
			m->weigth = cur_weigth;
			m->rotate(a, count_right, count_left);
		}
		catch (System::Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void rotate_right(System::Object^ sender, System::EventArgs^ e)//������� �������� ������ ������
	{
		rot_rght();
	}

	private: void rot_lft()
	{
		try
		{
			count_left++;
			if (count_left == 4)
			{
				count_left = 0;
			}
			int** tmp = new int* [cur_heigth];//�������� ������
			for (int i = 0; i < cur_heigth; i++)
			{
				tmp[i] = new int[cur_weigth];
			}
			for (int i = 0; i < cur_heigth; i++)//�������������� �� ������� ������� � ��������
			{
				for (int j = 0; j < cur_weigth; j++)
				{
					tmp[i][j] = current_fig[i][j];
				}
			}
			//������ ������� (������ = ������, ������ = ������)
			int r1 = cur_heigth, r2 = cur_weigth;
			cur_weigth = r1;
			cur_heigth = r2;
			current_fig = new int* [cur_heigth];
			for (int i = 0; i < cur_heigth; i++)
			{
				current_fig[i] = new int[cur_weigth];
			}
			//�������������� ������, �� � ������ ���������
			for (int i = 0, k = 0; i < cur_heigth; i++, k++)
			{
				for (int j = 0, l = 0; j < cur_weigth; j++, l++)
				{
					current_fig[k][l] = tmp[j][cur_heigth - i - 1];
				}
			}
			//������������ ��������
			Image^ a = pictureBox1->Image;
			a->RotateFlip(System::Drawing::RotateFlipType::Rotate90FlipXY);
			pictureBox1->Image = a;
			m->pict = a;
			m->figure = current_fig;
			m->heigth = cur_heigth;
			m->weigth = cur_weigth;
			m->rotate(a, count_right, count_left);
		}
		catch (System::Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void rotate_left(System::Object^ sender, System::EventArgs^ e)//������� ������� ����� ������ 
	{
		rot_lft();
	}

	private: System::Void game_button_click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			label1->Visible = true;
			label1->Text = "";
			//��������� ����� ������ ������
			if (first && !train)
			{
				label1->Text = "�������� ������� �����";
				return;
			}

			//������� ��������� ����� x, y �� ������� ����
			int start_y, start_x;
			for (int i = 0; i < mapsize; i++)
			{
				for (int j = 0; j < mapsize; j++)
				{
					if (buttons[i, j] == sender)
					{
						start_y = i + 1;
						start_x = j + 1;
						break;
					}
				}
			}

			//������� ����� (0,0) �� ������� ���� 
			int buf_x, buf_y;
			bool find_elem = false;
			for (int i = 0; i < cur_heigth; i++)
			{
				for (int j = 0; j < cur_weigth; j++)
				{
					if (current_fig[i][j] >= 0)
					{
						buf_x = j;
						buf_y = i;
						find_elem = true;
						break;
					}
				}
				if (find_elem)
				{
					break;
				}
			}
			start_y -= buf_y;
			start_x -= buf_x;

			if (train)
			{
				set_texture(start_x, start_y, cur_num);
				label1->Text = "�� ����������� � �����������,\n�������� ��������� �������\n1.������ ������ ���� �� �����\n������� ������������� � ������\n2.������ ������� ���� ��\n����� ���������� ������\n3.������ ������� ��������\n������� ����� �� �������\n4.�� ������ ������ ����� ������\n������� ������ ����\n����� ��� ������ ������";
				button1->Visible = true;
				button1->BackgroundImage = Image::FromFile("Pictures\\button.png");
				button1->BackColor = Color::Black;
				button1->Location = System::Drawing::Point(WINDOW_WIDTH - 200, WINDOW_HEIGHT - 150);
			}
			else
			{

				if (first_fig)
				{
					do_step = false;
					set_texture(start_x, start_y, cur_num);
					set_background(start_x, start_y, 1);
					for (int k = 0; k < cur_heigth; k++)
					{
						for (int l = 0; l < cur_weigth; l++)
						{
							if (current_fig[k][l] >= 0)
							{
								if (layers[1][start_y + k][start_x + l] == -1)
								{
									layers[1][start_y + k][start_x + l] = current_fig[k][l];
								}
							}
						}
					}
					first_fig = false;
					return;
				}

				if (do_step)
				{
					//�������������� �������� �������� ����
					rewrite_field();

					//��������� ����� �� �� ������� ����� ����
					if (check_for_add_layer(start_x, start_y))
					{
						if (check_rule2(start_x, start_y, kolvo_layer))
						{
							add_layer();
							do_step = false;
							set_texture(start_x, start_y, cur_num);
							set_background(start_x, start_y, kolvo_layer - 1);
							for (int k = 0; k < cur_heigth; k++)
							{
								for (int l = 0; l < cur_weigth; l++)
								{
									if (current_fig[k][l] >= 0)
									{
										layers[kolvo_layer - 1][start_y + k][start_x + l] = current_fig[k][l];
									}
								}
							}
						}
						else
						{
							label1->Text = "���������� ������ ���� ��\n����� ������� ������";
						}
					}
					else
					{
						bool metka = true;//������������ ����� �� ���� �� ������� ����� ��������� ������ 
						bool error = false;
						for (int i = 1; i < layers->Length; i++)
						{
							if (metka)
							{
								if (check_layer(start_x, start_y, i))
								{
									if (check_rule(start_x, start_y, i))
									{
										if (check_rule2(start_x, start_y, i))
										{
											do_step = false;
											set_texture(start_x, start_y, cur_num);
											set_background(start_x, start_y, i);

											for (int k = 0; k < cur_heigth; k++)
											{
												for (int l = 0; l < cur_weigth; l++)
												{
													if (current_fig[k][l] >= 0)
													{
														if (layers[i][start_y + k][start_x + l] == -1)
														{
															layers[i][start_y + k][start_x + l] = current_fig[k][l];
															metka = false;
														}
													}
												}
											}
										}
										else
										{
											label1->Text = "���������� ������ ���� ��\n����� ������� ������";
										}
									}
									else
									{
										label1->Text = "����� ����� ���� �� ����\n������ ������ �������������\n� ������ �������";
									}
									error = true;
								}
							}
							else
							{
								break;
							}
						}
						if (!error)
						{
							label1->Text = "����� ������ ��������� ������";
						}
					}
				}
				else
				{
					label1->Text = "�� �� ������ ������� ���,\n������ ��� �� ��� ����������\n�� ���� ��� ������";
				}
			}
		}
		catch (System::Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void init_map()//������������� ������� ����
	{
		try
		{
			kolvo_layer = 2;
			layers = gcnew array<int**>(kolvo_layer);
			int** first_layer = new int* [mapsize + 2];
			for (int i = 0; i < mapsize + 2; i++)
			{
				first_layer[i] = new int[mapsize + 2];
				for (int j = 0; j < mapsize + 2; j++)
				{
					first_layer[i][j] = -2;
				}
			}
			layers[0] = first_layer;

			for (int i = 0; i < mapsize + 2; i++)
			{
				map[i] = new int[mapsize + 2];
				for (int j = 0; j < mapsize + 2; j++)
				{
					if (i == 0 || i == mapsize + 1 || j == 0 || j == mapsize + 1)
					{
						map[i][j] = -2;
						continue;
					}
					map[i][j] = -1;
				}
			}
			layers[1] = map;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	public: void init_button()//������������� ������
	{
		try
		{
			buttons = gcnew array<Button^, 2>(mapsize, mapsize);
			for (int i = 0; i < mapsize; i++)
			{
				for (int j = 0; j < mapsize; j++)
				{
					Button^ b = gcnew Button();
					b->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
					b->Click += gcnew System::EventHandler(this, &MyForm::game_button_click);
					b->BackColor = Color::SandyBrown;
					b->FlatStyle = FlatStyle::Popup;
					b->Location = Point(40 + j * cellsize, 40 + i * cellsize);
					b->Size = Drawing::Size(cellsize, cellsize);
					this->Controls->Add(b);
					buttons[i, j] = b;
				}
			}
			ToFront();
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void ToFront()//������� ������ ������ �� �������� ����
	{
		try
		{
			for (int i = 0; i < mapsize; i++)
			{
				for (int j = 0; j < mapsize; j++)
				{
					buttons[i, j]->BringToFront();
				}
			}
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			WINDOW_HEIGHT = Convert::ToInt32(MyForm::Size.Height);
			WINDOW_WIDTH = Convert::ToInt32(MyForm::Size.Width);
			mapsize = (WINDOW_HEIGHT - 80) / 40 - 1;
			pictureBox2->Location = System::Drawing::Point(0, -10);
			pictureBox2->Size = System::Drawing::Size(WINDOW_WIDTH, WINDOW_HEIGHT);
			pictureBox2->SendToBack();
			pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox2->BackgroundImage = Image::FromFile("Pictures\\Background.jpg");
			BackgroundImage = Image::FromFile("Pictures\\Background.jpg");
			play->BackgroundImage = Image::FromFile("Pictures\\button.png");
			multiply->BackgroundImage = Image::FromFile("Pictures\\button.png");
			exit->BackgroundImage = Image::FromFile("Pictures\\button.png");
			label1->BackgroundImage = Image::FromFile("Pictures\\ramka.png");
			play->FlatStyle = FlatStyle::Popup;
			multiply->FlatStyle = FlatStyle::Popup;
			exit->FlatStyle = FlatStyle::Popup;
			play->BackColor = Color::Black;
			multiply->BackColor = Color::Black;
			exit->BackColor = Color::Black;
			play->Location = System::Drawing::Point(WINDOW_WIDTH / 2 - 170, WINDOW_HEIGHT - 800);
			multiply->Location = System::Drawing::Point(WINDOW_WIDTH / 2 - 170, WINDOW_HEIGHT - 650);
			exit->Location = System::Drawing::Point(WINDOW_WIDTH / 2 - 170, WINDOW_HEIGHT - 500);
			play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			multiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			button4->Hide();
			button5->Hide();
			button6->Hide();
			again->Hide();
			in_menu_game->Hide();
			pictureBox1->Hide();
			label1->Hide();
		}
		catch (System::Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void init_game_field()
	{
		try
		{
			button4->Visible = true;
			in_menu_game->Visible = true;
			again->Visible = true;
			in_menu_game->BackgroundImage = Image::FromFile("Pictures\\button.png");
			again->BackgroundImage = Image::FromFile("Pictures\\button.png");
			pictureBox1->Location = System::Drawing::Point(WINDOW_WIDTH - 450, 50);
			button4->Location = System::Drawing::Point(WINDOW_WIDTH - 270, 50);
			button5->Location = System::Drawing::Point(WINDOW_WIDTH - 360, 230);
			button6->Location = System::Drawing::Point(WINDOW_WIDTH - 450, 230);
			again->Location = System::Drawing::Point(WINDOW_WIDTH - 400, WINDOW_HEIGHT - 150);
			in_menu_game->Location = System::Drawing::Point(WINDOW_WIDTH - 200, WINDOW_HEIGHT - 150);
			button4->BackgroundImage = Image::FromFile("Pictures\\Deck.png");
			button5->BackgroundImage = Image::FromFile("Pictures\\Right.png");
			button6->BackgroundImage = Image::FromFile("Pictures\\Left.png");
			button4->BackColor = Color::Transparent;
			button5->BackColor = Color::Transparent;
			button6->BackColor = Color::Transparent;
			button4->FlatStyle = FlatStyle::Popup;
			button5->FlatStyle = FlatStyle::Popup;
			button6->FlatStyle = FlatStyle::Popup;
			button4->BringToFront();
			button5->BringToFront();
			button6->BringToFront();
			pictureBox1->BringToFront();
			next_step = true;
			do_step = false;
			first = true;
			first_fig = true;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void play_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			//���������� ������������� ������� �� ������, � ����� ��������� ���� ������ �� ������
			//�.� ��������� ������� ���� 
			init_button();
			single = true;
			play->Visible = false;
			multiply->Visible = false;
			exit->Visible = false;
			init_game_field();
			if (train)//���� ��� ������ ������ ����, �� ����� ������� ��������� ������� 
			{
				again->Visible = false;
				in_menu_game->Visible = false;
				label1->Visible = true;
				label1->Text = "��� ��������� �������\n1.������� �� ������ �����\n2.�� ������ ������������ ������\n������� �� �������������� ������\n3.������� �� ���� ��� ��\n������ ��� ������ ���������\n";
			}
			else//����� ��������������� 3-� ������ ������, ����������� ��� ��������� � ���������� ������ �� ������� ����
			{
				init_map();
			}
		}
		catch (System::Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void switch_pict(int num)//������� ��� �������� ����������� � pictureBox
	{
		try
		{
			switch (num)
			{
			case 0:
				picture = Image::FromFile("Pictures\\Null.png");
				cur_num = 0;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = null[i][j];
					}
				}
				break;
			case 1:
				picture = Image::FromFile("Pictures\\One.png");
				cur_num = 1;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = one[i][j];
					}
				}
				break;
			case 2:
				picture = Image::FromFile("Pictures\\Two.png");
				cur_num = 2;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = two[i][j];
					}
				}
				break;
			case 3:
				picture = Image::FromFile("Pictures\\Three.png");
				cur_num = 3;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = three[i][j];
					}
				}
				break;
			case 4:
				picture = Image::FromFile("Pictures\\Four.png");
				cur_num = 4;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = four[i][j];
					}
				}
				break;
			case 5:
				picture = Image::FromFile("Pictures\\Five.png");
				cur_num = 5;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = five[i][j];
					}
				}
				break;
			case 6:
				picture = Image::FromFile("Pictures\\Six.png");
				cur_num = 6;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = six[i][j];
					}
				}
				break;
			case 7:
				picture = Image::FromFile("Pictures\\Seven.png");
				cur_num = 7;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = seven[i][j];
					}
				}
				break;
			case 8:
				picture = Image::FromFile("Pictures\\Eight.png");
				cur_num = 8;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = eight[i][j];
					}
				}
				break;
			case 9:
				picture = Image::FromFile("Pictures\\Nine.png");
				cur_num = 9;
				for (int i = 0; i < heigth_fig; i++)
				{
					for (int j = 0; j < weigth_fig; j++)
					{
						current_fig[i][j] = nine[i][j];
					}
				}
				break;
			default:
				break;
			}
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (joined_game || single)
			{
				do_step = true;
				first = false;
				button5->Visible = true;
				button6->Visible = true;
				pictureBox1->BackColor = Color::Transparent;
				pictureBox1->Visible = true;
				if (next_num)
				{
					if (next_step)
					{
						if (step < total_step)
						{
							next_step = false;
							step++;
							Random rand;
							count_right = 0;
							count_left = 0;
							cur_weigth = weigth_fig;
							cur_heigth = heigth_fig;
							m->weigth = weigth_fig;
							m->heigth = heigth_fig;
							current_fig = new int* [heigth_fig];
							for (int i = 0; i < heigth_fig; i++)
							{
								current_fig[i] = new int[weigth_fig];
							}
							int num = rand.Next(10);
							//������� ����� ������
							switch_pict(num);
							pictureBox1->Image = picture;
							m->pict = picture;
							m->figure = current_fig;
							m->start_move();
							m->Show();
							if (joined_game) 
							{
								join_sender(String::Format("{0}", cur_num));
								next_num = false;
								backgroundWorker2->RunWorkerAsync();
							}
						}
						else
						{
							label1->Text = String::Format("���� �����������, �� �������:\n{0} �����", point_counter());
						}
					}
					else
					{
						label1->Text = "�� �� ������ �������\n������ ����� ���� ��\n��������� ����������";
					}
				}
				else
				{
					label1->Text = "�� �� ������ �������\n������ ����� ����\n��� �������� �� ��������\n������� �����";
				}
			}
		}
		catch (System::Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Close();
	}

	private: System::Void again_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			for (int i = 0; i < mapsize; i++)
			{
				for (int j = 0; j < mapsize; j++)
				{
					buttons[i, j]->Hide();
				}
			}
			init_button();
			init_map();
			m->stop_move();
			step = 0;
			pictureBox1->Image = nullptr;
			first = true;
			first_fig = true;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void in_menu_multiply_Click(System::Object^ sender, System::EventArgs^ e)
	{
		create_game->Visible = false;
		join_game->Visible = false;
		in_menu_multiply->Visible = false;
		play->Visible = true;
		multiply->Visible = true;
		exit->Visible = true;
	}

	private: System::Void in_menu_game_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			button4->Hide();
			button5->Hide();
			button6->Hide();
			again->Hide();
			in_menu_game->Hide();
			m->stop_move();
			pictureBox1->Hide();
			label1->Hide();
			join_game_in_game->Hide();
			single = false;
			joined_game = false;
			for (int i = 0; i < mapsize; i++)
			{
				for (int j = 0; j < mapsize; j++)
				{
					buttons[i, j]->Hide();
				}
			}
			play->Visible = true;
			multiply->Visible = true;
			exit->Visible = true;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: String^ get_ip()
	{
		try
		{
			String^ host = System::Net::Dns::GetHostName();
			String^ s = "";
			array <System::Net::IPAddress^>^ masAdress = System::Net::Dns::GetHostByName(host)->AddressList;
			for each (System::Net::IPAddress ^ var in masAdress)
			{
				s += var->ToString() + "\n";
			}
			return s;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void create_game_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			textBox2->Visible = true;
			your_ip->BackColor = Color::Transparent;
			your_ip->Visible = true;
			back->Visible = true;
			create_game_in_game->Visible = true;
			create_game_in_game->BackgroundImage = Image::FromFile("Pictures\\button.png");
			back->BackgroundImage = Image::FromFile("Pictures\\button.png");
			create_game_in_game->BackColor = Color::Black;
			back->BackColor = Color::Black;
			create_game_in_game->Location = System::Drawing::Point(create_game_in_game->Location.X, WINDOW_HEIGHT - 300);
			back->Location = System::Drawing::Point(create_game_in_game->Location.X, WINDOW_HEIGHT - 150);
			textBox2->Text = "8080";
			your_ip->Text = "��� IP " + get_ip() + "��� ���� ";
			textBox2->Location = System::Drawing::Point(your_ip->Location.X, your_ip->Location.Y + your_ip->Height + 25);
			create_game->Hide();
			join_game->Hide();
			in_menu_multiply->Hide();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: void join_sender(String^ mes) {
		UdpClient^ sender = gcnew UdpClient();

		try
		{
			String^ message = mes;
			array<unsigned char>^ data = System::Text::Encoding::UTF8->GetBytes(message);
			sender->Send(data, data->Length, tb_entry_IP->Text, Convert::ToInt16(tb_entry_port->Text));
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			sender->Close();
		}
	}

	private: System::Void join_game_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			join_game->Visible = false;
			create_game->Visible = false;
			in_menu_multiply->Visible = false;
			entry_IP->Visible = true;
			entry_port->Visible = true;
			tb_entry_IP->Visible = true;
			tb_entry_port->Text = "8080";
			tb_entry_port->Visible = true;
			join_game_in_game->Visible = true;
			back->BackgroundImage = Image::FromFile("Pictures\\button.png");
			join_game_in_game->BackgroundImage = Image::FromFile("Pictures\\button.png");
			back->BackColor = Color::Black;
			join_game_in_game->BackColor = Color::Black;
			back->Visible = true;
			join_game_in_game->Location = System::Drawing::Point(join_game_in_game->Location.X, WINDOW_HEIGHT - 300);
			back->Location = System::Drawing::Point(join_game_in_game->Location.X, WINDOW_HEIGHT - 150);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		UdpClient^ udp_client = gcnew UdpClient(Convert::ToInt16(textBox2->Text));
		IPEndPoint^ remoteIp = nullptr;
		try
		{
			array< unsigned char>^ data = udp_client->Receive(remoteIp);
			String^ message = System::Text::Encoding::UTF8->GetString(data);
			if (message->Length > 2)//��������� ���������
			{
				if (message[3] == '.')
				{
					create_init = true;
					ip = message;
				}
				else
				{
					result = true;
					bufer = message;
				}
			}
			else
			{
				int pict = Convert::ToInt16(message);
				current_fig = new int* [heigth_fig];
				for (int i = 0; i < heigth_fig; i++)
				{
					current_fig[i] = new int[weigth_fig];
				}
				cur_heigth = heigth_fig;
				cur_weigth = weigth_fig;
				count_right = 0;
				count_left = 0;
				switch_pict(pict);
				new_num = true;
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			udp_client->Close();
		}
	}

	private: System::Void join_game_in_game_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			join_sender(get_ip());
			entry_IP->Visible = false;
			entry_port->Visible = false;
			tb_entry_IP->Visible = false;
			tb_entry_port->Visible = false;
			back->Visible = false;
			train = false;
			joined_game = true;
			init_button();
			init_game_field();
			again->Visible = false;
			init_map();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			play->Visible = false;
			multiply->Visible = false;
			exit->Visible = false;
			create_game->Visible = true;
			join_game->Visible = true;
			in_menu_multiply->Visible = true;
			create_game->BackgroundImage = Image::FromFile("Pictures\\button.png");
			join_game->BackgroundImage = Image::FromFile("Pictures\\button.png");
			in_menu_multiply->BackgroundImage = Image::FromFile("Pictures\\button.png");
			create_game->FlatStyle = FlatStyle::Popup;
			join_game->FlatStyle = FlatStyle::Popup;
			in_menu_game->FlatStyle = FlatStyle::Popup;
			create_game->BackColor = Color::Black;
			join_game->BackColor = Color::Black;
			in_menu_game->BackColor = Color::Black;
			create_game->Location = System::Drawing::Point(WINDOW_WIDTH / 2 - 170, WINDOW_HEIGHT - 800);
			join_game->Location = System::Drawing::Point(WINDOW_WIDTH / 2 - 170, WINDOW_HEIGHT - 650);
			in_menu_multiply->Location = System::Drawing::Point(WINDOW_WIDTH / 2 - 170, WINDOW_HEIGHT - 500);
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		back->Visible = false;
		your_ip->Visible = false;
		textBox2->Visible = false;
		entry_IP->Visible = false;
		entry_port->Visible = false;
		tb_entry_IP->Visible = false;
		tb_entry_port->Visible = false;
		join_game_in_game->Visible = false;
		create_game_in_game->Visible = false;
		create_game->Visible = true;
		join_game->Visible = true;
		in_menu_multiply->Visible = true;
	}

	private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
		try
		{
			if (result == true)
			{
				label1->Text = bufer;
			}
			if (create_init)
			{
				textBox2->Visible = false;
				your_ip->Visible = false;
				create_game_in_game->Visible = false;
				back->Visible = false;
				init_game_field();
				again->Visible = false;
				init_button();
				init_map();
				button4->Visible = false;
				create_init = false;
			}
			if (new_num)
			{
				do_step = true;
				first = false;
				button5->Visible = true;
				button6->Visible = true;
				pictureBox1->BackColor = Color::Transparent;
				pictureBox1->Visible = true;
				pictureBox1->Image = picture;
				rot_rght();
				rot_lft();
				m->Show();
			}
			backgroundWorker1->RunWorkerAsync();
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void create_game_in_game_Click(System::Object^ sender, System::EventArgs^ e) {
		train = false;
		created_game = true;
		backgroundWorker1->RunWorkerAsync();
	}

	private: void create_sender(String^ mes) {
		UdpClient^ sender = gcnew UdpClient();

		try
		{
			String^ message = mes;
			String^ ips = ip->Split()[ip->Split()->Length - 1];
			array<unsigned char>^ data = System::Text::Encoding::UTF8->GetBytes(message);
			step += 1;
			if (step == total_step)
			{
				String^ points = point_counter().ToString();
				array<unsigned char>^ data = System::Text::Encoding::UTF8->GetBytes(points);
				sender->Send(data, data->Length, ips, Convert::ToInt16(textBox2->Text) + 1);
			}
			else
			{
				sender->Send(data, data->Length, ips, Convert::ToInt16(textBox2->Text) + 1);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			sender->Close();
		}
	}

	private: System::Void backgroundWorker2_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		UdpClient^ next_num_client = gcnew UdpClient(Convert::ToInt16(tb_entry_port->Text) + 1);
		IPEndPoint^ remoteIp = nullptr;

		try
		{
			array< unsigned char>^ data = next_num_client->Receive(remoteIp);
			String^ message = System::Text::Encoding::UTF8->GetString(data);
			if (message == "continue")
			{
				next_num = true;
			}
			else
			{
				created_point = Convert::ToInt32(message);
				joined_point = point_counter();
				result = true;
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			next_num_client->Close();
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			train = false;
			label1->Text = "���������� ����� ����� ����\n������������ ��������� �������\n���������� ����� ����������\n�� ����� ������\n(1 ������� - 0, 2 ������� - 1 � ��)\n��� ���� ������������\n� ���������� ���������";
			for (int i = 0; i < mapsize; i++)
			{
				for (int j = 0; j < mapsize; j++)
				{
					buttons[i, j]->Hide();
				}
			}
			init_button();
			init_game_field();
			step = 0;
			pictureBox1->Visible = false;
			init_map();
			button1->Visible = false;
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void backgroundWorker2_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
		try
		{
			if (result)
			{
				if (created_point == joined_point)
				{
					label1->Text = String::Format("�� ������� � �����\n� ��� {0}\n� ��������� {1}", joined_point, created_point);
					join_sender(String::Format("�� ������� � �����\n� ��� {0}\n� ��������� {1}", joined_point, created_point));
				}
				else
				{
					if (created_point > joined_point)
					{
						label1->Text = String::Format("���, �� ���������\n� ��� {0}\n� ��������� {1}", joined_point, created_point);
						join_sender(String::Format("�����������, �� ��������\n� ��� {0}\n� ��������� {1}", joined_point, created_point));
					}
					else
					{
						label1->Text = String::Format("�����������, �� ��������\n� ��� {0}\n� ��������� {1}", joined_point, created_point);
						join_sender(String::Format("���, �� ���������\n� ��� {0}\n� ��������� {1}", joined_point, created_point));
					}
				}
			}
		}
		catch (Exception^ error)
		{
			MessageBox::Show(error->ToString(), "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}