//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::������Click(TObject *Sender)
{
/////ADD BUTTON
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  //new code
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Form1->WebBrowser1->Navigate('http://www.google.com');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
string a;
WebBrowser1.Navigate(ComboBox1.Text);  // �������� � �����, ��������� ����� �� ComboBox1;

a:=ComboBox1.text;  // ���������� ����������� ���� ����� � ����������;

ComboBox1.Items.Add(a);  // ��������� ��������� � ������  ComboBox1;

}
//---------------------------------------------------------------------------

