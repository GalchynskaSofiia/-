#pragma once

namespace Lab81 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ buttonLoad;
	private: System::Windows::Forms::Button^ buttonEd;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonDel;




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ 䳿ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->buttonEd = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDel = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->䳿ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 48);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(963, 322);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"���";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"�����";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"����";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"г� �������";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"���������";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"���������";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// buttonLoad
			// 
			this->buttonLoad->Location = System::Drawing::Point(27, 25);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(171, 51);
			this->buttonLoad->TabIndex = 1;
			this->buttonLoad->Text = L"�����������";
			this->buttonLoad->UseVisualStyleBackColor = true;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &MyForm::buttonLoad_Click);
			// 
			// buttonEd
			// 
			this->buttonEd->Location = System::Drawing::Point(27, 82);
			this->buttonEd->Name = L"buttonEd";
			this->buttonEd->Size = System::Drawing::Size(170, 51);
			this->buttonEd->TabIndex = 2;
			this->buttonEd->Text = L"�������";
			this->buttonEd->UseVisualStyleBackColor = true;
			this->buttonEd->Click += gcnew System::EventHandler(this, &MyForm::buttonEd_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(27, 139);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(170, 51);
			this->buttonAdd->TabIndex = 3;
			this->buttonAdd->Text = L"������";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDel
			// 
			this->buttonDel->Location = System::Drawing::Point(27, 196);
			this->buttonDel->Name = L"buttonDel";
			this->buttonDel->Size = System::Drawing::Size(170, 51);
			this->buttonDel->TabIndex = 4;
			this->buttonDel->Text = L"��������";
			this->buttonDel->UseVisualStyleBackColor = true;
			this->buttonDel->Click += gcnew System::EventHandler(this, &MyForm::buttonDel_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->䳿ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1221, 33);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 䳿ToolStripMenuItem
			// 
			this->䳿ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�����������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->������ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->䳿ToolStripMenuItem->Name = L"䳿ToolStripMenuItem";
			this->䳿ToolStripMenuItem->Size = System::Drawing::Size(48, 29);
			this->䳿ToolStripMenuItem->Text = L"ĳ�";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(149, 29);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(164, 34);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem1 });
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(70, 29);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �����ToolStripMenuItem1
			// 
			this->�����ToolStripMenuItem1->Name = L"�����ToolStripMenuItem1";
			this->�����ToolStripMenuItem1->Size = System::Drawing::Size(156, 34);
			this->�����ToolStripMenuItem1->Text = L"�����";
			this->�����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonLoad);
			this->groupBox1->Controls->Add(this->buttonDel);
			this->groupBox1->Controls->Add(this->buttonEd);
			this->groupBox1->Controls->Add(this->buttonAdd);
			this->groupBox1->Location = System::Drawing::Point(1004, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(204, 266);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ĳ�";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 382);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("����������� � ��������� Բ� 3-8, ����������� �����.");
		}

		private: System::Void �����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}

		private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT * FROM [Games]";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			if (dbReader->HasRows == false) {
				MessageBox::Show("��� ������", "�������");
			}
			else {
				while (dbReader->Read())
					dataGridView1->Rows->Add(dbReader["���"], dbReader["�����"], dbReader["����"], dbReader["г� �������"], dbReader["���������"], dbReader["���������"]);

			}
			dbReader->Close();
			dbConnection->Close();
		}

		private: System::Void buttonEd_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridView1->SelectedRows->Count != 1)
			{
				MessageBox::Show("������� ������ ���� �����", "������� �����");
				return;
			}
			int index = dataGridView1->SelectedRows[0]->Index;
			if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
				MessageBox::Show("�� �� ��� �", "������� �����");
				return;
			}
			String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
			String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			String^ genre = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			String^ year = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			String^ platform = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			String^ developer = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "UPDATE [Games] SET �����='" + name + "', ����='" + genre + "', [г� �������]=" + year + ", ���������='" + platform + "', ���������='" + developer + "' WHERE ���=" + id;
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������� � ��������", "�������");
			else
				MessageBox::Show("��� �����", "��");
			dbConnection->Close();
		}

		private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridView1->SelectedRows->Count != 1)
			{
				MessageBox::Show("������� ������ ���� �����", "������� �����");
				return;
			}
			int index = dataGridView1->SelectedRows[0]->Index;
			if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
				MessageBox::Show("�� �� ��� �", "������� �����");
				return;
			}
			String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
			String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			String^ genre = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			String^ year = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			String^ platform = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			String^ developer = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "INSERT INTO [Games] VALUES (" + id + ",'" + name + "','" + genre + "'," + year + ", '" + platform + "', '" + developer + "')";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������� � ��������", "�������");
			else
				MessageBox::Show("��� �����", "��");
			dbConnection->Close();
		}

		private: System::Void buttonDel_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridView1->SelectedRows->Count != 1)
			{
				MessageBox::Show("������� ������ ���� �����", "������� �����");
				return;
			}
			int index = dataGridView1->SelectedRows[0]->Index;
			if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
				MessageBox::Show("�� �� ��� �", "������� �����");
				return;
			}
			String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "DELETE FROM [Games] WHERE ���=" + id;
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������� � ��������", "�������");
			else {
				MessageBox::Show("��� �������", "��");
				dataGridView1->Rows->RemoveAt(index);
			}
			dbConnection->Close();
		}
		private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT * FROM [Games]";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			if (dbReader->HasRows == false) {
				MessageBox::Show("��� ������", "�������");
			}
			else {
				while (dbReader->Read())
					dataGridView1->Rows->Add(dbReader["���"], dbReader["�����"], dbReader["����"], dbReader["г� �������"], dbReader["���������"], dbReader["���������"]);

			}
			dbReader->Close();
			dbConnection->Close();
		}
		private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridView1->SelectedRows->Count != 1)
			{
				MessageBox::Show("������� ������ ���� �����", "������� �����");
				return;
			}
			int index = dataGridView1->SelectedRows[0]->Index;
			if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
				MessageBox::Show("�� �� ��� �", "������� �����");
				return;
			}
			String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
			String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			String^ genre = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			String^ year = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			String^ platform = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			String^ developer = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "UPDATE [Games] SET �����='" + name + "', ����='" + genre + "', [г� �������]=" + year + ", ���������='" + platform + "', ���������='" + developer + "' WHERE ���=" + id;
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������� � ��������", "�������");
			else
				MessageBox::Show("��� �����", "��");
			dbConnection->Close();
		}
		private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridView1->SelectedRows->Count != 1)
			{
				MessageBox::Show("������� ������ ���� �����", "������� �����");
				return;
			}
			int index = dataGridView1->SelectedRows[0]->Index;
			if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
				MessageBox::Show("�� �� ��� �", "������� �����");
				return;
			}
			String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
			String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			String^ genre = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			String^ year = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			String^ platform = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			String^ developer = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "INSERT INTO [Games] VALUES (" + id + ",'" + name + "','" + genre + "'," + year + ", '" + platform + "', '" + developer + "')";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������� � ��������", "�������");
			else
				MessageBox::Show("��� �����", "��");
			dbConnection->Close();
		}
		private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridView1->SelectedRows->Count != 1)
			{
				MessageBox::Show("������� ������ ���� �����", "������� �����");
				return;
			}
			int index = dataGridView1->SelectedRows[0]->Index;
			if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
				dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
				MessageBox::Show("�� �� ��� �", "������� �����");
				return;
			}
			String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
			String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database_my.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "DELETE FROM [Games] WHERE ���=" + id;
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������� � ��������", "�������");
			else {
				MessageBox::Show("��� �������", "��");
				dataGridView1->Rows->RemoveAt(index);
			}
			dbConnection->Close();
		}
};
}
