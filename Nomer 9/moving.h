#pragma once

namespace Nomer9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ moving
	/// </summary>
	public ref class moving : public System::Windows::Forms::Form
	{
	public:
		moving(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~moving()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 2;
			this->timer1->Tick += gcnew System::EventHandler(this, &moving::timer1_Tick);
			// 
			// moving
			// 
			this->BackColor = System::Drawing::Color::Wheat;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(120, 160);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(120, 160);
			this->Name = L"moving";
			this->ShowInTaskbar = false;
			this->Text = L"moving";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Wheat;
			this->ResumeLayout(false);

		}
#pragma endregion
	public: Image^ pict;
	public: int** figure;
	public: int heigth, weigth;
	private: bool rot = false;

	public: void start_move()
	{
		this->MinimumSize = System::Drawing::Size(120, 160);
		this->Size = System::Drawing::Size(120, 160);
		this->Visible = true;
		this->BackgroundImage = pict;
		timer1->Start();
	}

	public: void rotate(Image^ picture, int right, int left)
	{
		int avg = Math::Abs(right - left);
		switch (avg)
		{
		case 0:
		case 2:
			this->MinimumSize = System::Drawing::Size(120, 160);
			this->Size = System::Drawing::Size(120, 160);
			this->BackgroundImage = picture;
			break;
		case 1:
		case 3:
			this->MinimumSize = System::Drawing::Size(160, 120);
			this->Size = System::Drawing::Size(160, 120);
			this->BackgroundImage = picture;
		default:
			break;
		}
		timer1->Start();
	}

	public: void stop_move()
	{
		this->Hide();
		timer1->Stop();
	}

	private: void go()
	{
		if (figure[2][0] == 1)
		{
			this->Left = Cursor->Position.X - 0 * 40 + 2;
			this->Top = Cursor->Position.Y - 1 * 40;
			return;
		}
		for (int i = 0; i < heigth; i++)
		{
			for (int j = 0; j < weigth; j++)
			{
				if (figure[i][j] >= 0)
				{
					this->Left = Cursor->Position.X - j * 40 + 2;
					this->Top = Cursor->Position.Y - i * 40 + 5;
					return;
				}
			}
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		go();
	}
};
}
