#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <format>

using namespace std;

namespace IMPACTLABGUI2024 {

	extern "C" {
		//Load Images
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "include/stb_image.h"
#include "include/stb_image_write.h"
	}
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IMPACTLAB_Form
	/// </summary>
	public ref class IMPACTLAB_Form : public System::Windows::Forms::Form
	{
	public:
		IMPACTLAB_Form(void)
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
		~IMPACTLAB_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btopen;
	protected:
	private: System::Windows::Forms::Button^ btclose;
	private: System::Windows::Forms::Button^ btExit;
	private: System::Windows::Forms::PictureBox^ Input_Image_Box;

	private: System::Windows::Forms::Button^ ImageToBlue;


	private: System::Windows::Forms::PictureBox^ Output_Image_Box;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ImageToRed;
	private: System::Windows::Forms::Button^ ImageToYellow;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 

		/// 
		void InitializeComponent(void)
		{
			this->btopen = (gcnew System::Windows::Forms::Button());
			this->btclose = (gcnew System::Windows::Forms::Button());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->Input_Image_Box = (gcnew System::Windows::Forms::PictureBox());
			this->ImageToBlue = (gcnew System::Windows::Forms::Button());
			this->Output_Image_Box = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ImageToRed = (gcnew System::Windows::Forms::Button());
			this->ImageToYellow = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Input_Image_Box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box))->BeginInit();
			this->SuspendLayout();
			// 
			// btopen
			// 
			this->btopen->Location = System::Drawing::Point(78, 11);
			this->btopen->Margin = System::Windows::Forms::Padding(2);
			this->btopen->Name = L"btopen";
			this->btopen->Size = System::Drawing::Size(98, 40);
			this->btopen->TabIndex = 0;
			this->btopen->Text = L"Open";
			this->btopen->UseVisualStyleBackColor = true;
			this->btopen->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btopen_Click);
			// 
			// btclose
			// 
			this->btclose->Location = System::Drawing::Point(78, 55);
			this->btclose->Margin = System::Windows::Forms::Padding(2);
			this->btclose->Name = L"btclose";
			this->btclose->Size = System::Drawing::Size(98, 40);
			this->btclose->TabIndex = 1;
			this->btclose->Text = L"Close";
			this->btclose->UseVisualStyleBackColor = true;
			this->btclose->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btclose_Click);
			// 
			// btExit
			// 
			this->btExit->Location = System::Drawing::Point(78, 100);
			this->btExit->Margin = System::Windows::Forms::Padding(2);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(98, 40);
			this->btExit->TabIndex = 2;
			this->btExit->Text = L"Exit";
			this->btExit->UseVisualStyleBackColor = true;
			this->btExit->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btExit_Click);
			// 
			// Input_Image_Box
			// 
			this->Input_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Input_Image_Box->Location = System::Drawing::Point(124, 153);
			this->Input_Image_Box->Margin = System::Windows::Forms::Padding(2);
			this->Input_Image_Box->MaximumSize = System::Drawing::Size(400, 400);
			this->Input_Image_Box->Name = L"Input_Image_Box";
			this->Input_Image_Box->Size = System::Drawing::Size(400, 400);
			this->Input_Image_Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Input_Image_Box->TabIndex = 4;
			this->Input_Image_Box->TabStop = false;
			// 
			// ImageToBlue
			// 
			this->ImageToBlue->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ImageToBlue->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImageToBlue->Location = System::Drawing::Point(249, 25);
			this->ImageToBlue->Margin = System::Windows::Forms::Padding(2);
			this->ImageToBlue->Name = L"ImageToBlue";
			this->ImageToBlue->Size = System::Drawing::Size(225, 26);
			this->ImageToBlue->TabIndex = 21;
			this->ImageToBlue->Text = L"Image To Blue";
			this->ImageToBlue->UseVisualStyleBackColor = true;
			this->ImageToBlue->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::ImageToBlue_Click);
			// 
			// Output_Image_Box
			// 
			this->Output_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Output_Image_Box->Location = System::Drawing::Point(710, 153);
			this->Output_Image_Box->Margin = System::Windows::Forms::Padding(2);
			this->Output_Image_Box->MaximumSize = System::Drawing::Size(400, 400);
			this->Output_Image_Box->Name = L"Output_Image_Box";
			this->Output_Image_Box->Size = System::Drawing::Size(400, 400);
			this->Output_Image_Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Output_Image_Box->TabIndex = 25;
			this->Output_Image_Box->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(496, 25);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 26);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Image To Negative";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::ImageToNegative_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F));
			this->button2->Location = System::Drawing::Point(496, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(225, 26);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Opacity image";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::Invertido_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(560, 334);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 31);
			this->label1->TabIndex = 27;
			this->label1->Text = L"TEMPO";
			this->label1->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::label1_Click_1);
			// 
			// ImageToRed
			// 
			this->ImageToRed->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ImageToRed->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImageToRed->Location = System::Drawing::Point(249, 56);
			this->ImageToRed->Margin = System::Windows::Forms::Padding(2);
			this->ImageToRed->Name = L"ImageToRed";
			this->ImageToRed->Size = System::Drawing::Size(225, 26);
			this->ImageToRed->TabIndex = 28;
			this->ImageToRed->Text = L"Image To Red";
			this->ImageToRed->UseVisualStyleBackColor = true;
			this->ImageToRed->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::ImageToRed_Click);
			// 
			// ImageToYellow
			// 
			this->ImageToYellow->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ImageToYellow->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImageToYellow->Location = System::Drawing::Point(249, 86);
			this->ImageToYellow->Margin = System::Windows::Forms::Padding(2);
			this->ImageToYellow->Name = L"ImageToYellow";
			this->ImageToYellow->Size = System::Drawing::Size(225, 26);
			this->ImageToYellow->TabIndex = 29;
			this->ImageToYellow->Text = L"Image To Yellow";
			this->ImageToYellow->UseVisualStyleBackColor = true;
			this->ImageToYellow->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::ImageToYellow_Click);
			// 
			// IMPACTLAB_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1186, 595);
			this->Controls->Add(this->ImageToYellow);
			this->Controls->Add(this->ImageToRed);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Output_Image_Box);
			this->Controls->Add(this->ImageToBlue);
			this->Controls->Add(this->Input_Image_Box);
			this->Controls->Add(this->btExit);
			this->Controls->Add(this->btclose);
			this->Controls->Add(this->btopen);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"IMPACTLAB_Form";
			this->Text = L"IMPACTLAB PROJETO 2024";
			this->Load += gcnew System::EventHandler(this, &IMPACTLAB_Form::IMPACTLAB_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Input_Image_Box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btopen_Click(System::Object^ sender, System::EventArgs^ e) {

		// Diferent Methods to open images
		// Image.Frofile --> 1 St Method
		//Input_Image_Box->Image.FromFile("C:\Arquivos de Programas RFB\IRPF2022\online.png");

		//Load Image 2nd Method
		//Input_Image_Box->ImageLocation = "C:/Arquivos de Programas RFB/IRPF2022/online.png";
		//openFileDialog1->ShowDialog();

		// From OpenfileDialog --> 3rd Method  // open file dialog   
		OpenFileDialog^ ofd = gcnew OpenFileDialog();

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			Input_Image_Box->ImageLocation = ofd->FileName;
		}


	}

	private: System::Void btExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void btclose_Click(System::Object^ sender, System::EventArgs^ e) {
		Input_Image_Box->ImageLocation = "";
		Output_Image_Box->Image = nullptr;
	}

	private: System::Void ImageToBlue_Click(System::Object^ sender, System::EventArgs^ e) {
		auto inicio = std::chrono::high_resolution_clock::now();

		if (Input_Image_Box->Image != nullptr) {
			Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

			for (int y = 0; y < bmp->Height; y++) {
				for (int x = 0; x < bmp->Width; x++) {
					Color pixelColor = bmp->GetPixel(x, y);
					Color newColor = Color::FromArgb(pixelColor.A, 0, 0, pixelColor.B);
					bmp->SetPixel(x, y, newColor);
				}
			}

			Output_Image_Box->Image = bmp;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		auto fim = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duracao = fim - inicio;

		cout << duracao.count() << endl;

		string str = std::to_string(duracao.count());
		this->label1->Text = gcnew System::String(str.c_str());

	}

	private: System::Void ImageToRed_Click(System::Object^ sender, System::EventArgs^ e) {
		auto inicio = std::chrono::high_resolution_clock::now();

		if (Input_Image_Box->Image != nullptr) {
			Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

			for (int y = 0; y < bmp->Height; y++) {
				for (int x = 0; x < bmp->Width; x++) {
					Color pixelColor = bmp->GetPixel(x, y);
					Color newColor = Color::FromArgb(pixelColor.A, pixelColor.R, 0, 0);
					bmp->SetPixel(x, y, newColor);
				}
			}

			Output_Image_Box->Image = bmp;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		auto fim = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duracao = fim - inicio;

		cout << duracao.count() << endl;

		string str = std::to_string(duracao.count());
		this->label1->Text = gcnew System::String(str.c_str());
	}

	private: System::Void ImageToYellow_Click(System::Object^ sender, System::EventArgs^ e) {
		auto inicio = std::chrono::high_resolution_clock::now();

		if (Input_Image_Box->Image != nullptr) {
			Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

			for (int y = 0; y < bmp->Height; y++) {
				for (int x = 0; x < bmp->Width; x++) {
					Color pixelColor = bmp->GetPixel(x, y);
					Color newColor = Color::FromArgb(pixelColor.A, pixelColor.R, pixelColor.G, 0);
					bmp->SetPixel(x, y, newColor);
				}
			}

			Output_Image_Box->Image = bmp;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		auto fim = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duracao = fim - inicio;

		cout << duracao.count() << endl;

		string str = std::to_string(duracao.count());
		this->label1->Text = gcnew System::String(str.c_str());
	}

	private: System::Void ImageToNegative_Click(System::Object^ sender, System::EventArgs^ e) {
		auto inicio = std::chrono::high_resolution_clock::now();
		if (Input_Image_Box->Image != nullptr) {
			Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

			for (int y = 0; y < bmp->Height; y++) {
				for (int x = 0; x < bmp->Width; x++) {
					Color pixelColor = bmp->GetPixel(x, y);
					Color newColor = Color::FromArgb(pixelColor.A, 255 - pixelColor.R, 255 - pixelColor.G, 255 - pixelColor.B);
					bmp->SetPixel(x, y, newColor);
				}
			}

			Output_Image_Box->Image = bmp;
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		auto fim = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duracao = fim - inicio;

		cout << duracao.count() << endl;

		string str = std::to_string(duracao.count());
		this->label1->Text = gcnew System::String(str.c_str());

	}

	private: System::Void btcopyimageSTBI_Click(System::Object^ sender, System::EventArgs^ e) {

		if (Input_Image_Box->Image != nullptr) {
			// Salve a imagem carregada em um arquivo temporário
			String^ tempFilePath = "temp_image.jpg";
			Input_Image_Box->Image->Save(tempFilePath, System::Drawing::Imaging::ImageFormat::Jpeg);

			// Carregue a imagem com stbi
			int width, height, channels;
			unsigned char* img = stbi_load("temp_image.jpg", &width, &height, &channels, 0);

			if (img != nullptr) {
				// Altere os canais vermelho e verde para zero
				for (int i = 0; i < width * height * channels; i += channels) {
					img[i] = 0;     // Canal vermelho
					img[i + 1] = 0;   // Canal verde
				}

				// Salve a imagem modificada
				stbi_write_jpg("blue_image.jpg", width, height, channels, img, 100);

				// Libere a memória da imagem original
				stbi_image_free(img);

				// Carregue a imagem modificada na Output_Image_Box
				Output_Image_Box->Image = Image::FromFile("blue_image.jpg");

				// Delete the temporary file
				System::IO::File::Delete(tempFilePath);
			}
			else {
				MessageBox::Show("Failed to load image with stbi", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


private: System::Void Invertido_Click(System::Object^ sender, System::EventArgs^ e) {

	auto inicio = std::chrono::high_resolution_clock::now();
	if (Input_Image_Box->Image != nullptr) {
		
		Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

		for (int y = 0; y < bmp->Height; y++) {
			for (int x = 0; x < bmp->Width; x++) {
				Color pixelColor = bmp->GetPixel(x, y);
				Color newColor = Color::FromArgb(pixelColor.A-125, pixelColor.R, pixelColor.G, pixelColor.B);
				bmp->SetPixel(x, y, newColor);
			}
		}

		Output_Image_Box->Image = bmp;
	}
	else {
		MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	

	auto fim = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> duracao = fim - inicio;

	cout << duracao.count() << endl;

	string str = std::to_string(duracao.count());
	this->label1->Text = gcnew System::String(str.c_str());
	
	
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void IMPACTLAB_Form_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}
};
}
