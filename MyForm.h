
#include <iostream>
#include <memory>
#include <set>
#include <string>
#include <math.h>
#pragma once
using namespace std;

namespace laba14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(103, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ферзь";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(103, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пешка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(103, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Конь";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(208, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(54, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(296, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(54, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(208, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(54, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(205, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Введите позицию";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(296, 120);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(54, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(208, 154);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(54, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(296, 156);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(54, 20);
			this->textBox6->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(434, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 45);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(113, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 498);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int x1 = Convert::ToInt32(textBox1->Text);
		int y1 = Convert::ToInt32(textBox2->Text);
		int x2 = Convert::ToInt32(textBox3->Text);
		int y2 = Convert::ToInt32(textBox4->Text);
		int x3 = Convert::ToInt32(textBox5->Text);
		int y3 = Convert::ToInt32(textBox6->Text);
		set<shared_ptr<Figure>> set({
								 make_shared<Pawn>(x2, y2),
								 make_shared<Horse>(x3, y3),
								 make_shared<Queen>(x1, y1)
			});
		for (auto fst : set)
			for (auto snd : set)
				if (fst.get() != snd.get())
				{
					label5->Text = fst->name()
						+ " can" + (fst->can_take(snd) ? " " : "'t ")
						+ "take " + snd->name() + "\n";
				}
					
	}
};
class Figure
{
public:
	Figure(unsigned int x, unsigned int y) : x_pos(x), y_pos(y) {}
	virtual ~Figure() {}
	virtual bool can_take(shared_ptr<Figure> figure) const = 0;
	virtual string name() const = 0;

	int x() const
	{
		return x_pos;
	}
	int y() const
	{
		return y_pos;
	}
private:
	unsigned int x_pos,
		y_pos;
};

class Queen : public Figure
{
public:
	Queen(unsigned int x, unsigned int y) : Figure(x, y) {}
	virtual ~Queen() {}
	virtual bool can_take(shared_ptr<Figure> figure) const
	{
		if (x() == figure->x())
			return true;
		if (y() == figure->y())
			return true;
		if (std::abs(x() - figure->x()) == abs(y() - figure->y()))
			return true;
		return false;
	}
	virtual string name() const
	{
		return "Queen";
	}
};

class Pawn : public Figure
{
public:
	Pawn(unsigned int x, unsigned int y) : Figure(x, y) {}
	virtual ~Pawn() {}
	virtual bool can_take(std::shared_ptr<Figure> figure) const
	{
		return y() == figure->y() && (figure->x() - x()) == 1;
	}
	virtual string name() const
	{
		return "Pawn";
	}
};

class Horse : public Figure
{
public:
	Horse(unsigned int x, unsigned int y) : Figure(x, y) {}
	virtual ~Horse() {}
	virtual bool can_take(shared_ptr<Figure> figure) const
	{
		return (abs(y() - figure->y()) == 2 && abs(figure->x() - x()) == 1) ||
			(abs(y() - figure->y()) == 1 && abs(figure->x() - x()) == 2);
	}
	virtual string name() const
	{
		return "Horse";
	}
};

}
