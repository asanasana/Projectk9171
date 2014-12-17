﻿//---------------------------------------------------------------------------

#include SaveHTMLSourceToFile(const FileName: string; WB: TWebBrowser);
#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

void TForm1.SaveHTMLSourceToFile(const FileName: string; WB: TWebBrowser)
{
 IPersistStreamInit PersistStream;

 TFileStream FileStream;

 IStream Stream;

 HRESULT SaveResult;

 PersistStream=WB->Document as IPersistStreamInit;

 FileStream=TFileStream->Create(FileName, fmCreate);


try

Stream=TStreamAdapter.Create(FileStream, soReference) as IStream;

SaveResult=PersistStream.Save(Stream, True);

if (FAILED(SaveResult)) {

MessageBox(Handle, 'Fail to save HTML source', 'Error', 0);

finally

FileStream.Free;
}

}


TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::КнопкаClick(TObject *Sender)
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
WebBrowser1.Navigate(ComboBox1.Text);  // Передаем в поиск, введенный адрес из ComboBox1;

a:=ComboBox1.text;  // Записываем параллельно этот адрес в переменную;

ComboBox1.Items.Add(a);  // Загружаем введенное в список  ComboBox1;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1KeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift)
{
 string a;
 if (Key=#13)
 {
  WebBrowser1.Navigate(ComboBox1.Text);

  a:=ComboBox1.text;

  ComboBox1.Items.Add(a);
 }

// необходимо добавить популярные новостные поисковики

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
  Variant  Doc, Histor;
  Doc:= WebBrowser1->OleObject->document;  //Ссылаемся на интерфейс документа;

if (TVarData(Doc)->VDispatch = nil) Exit;  //Если документ отсутствует, тогда выходим;

Histor=Doc->parentWindow->history;  {Объект документа - объект родительского окна - объект содержащий

историю переходов Шаг назад к предыдущему URL.};

Histor->go(-1);


}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
Variant Doc, Histor ;
Doc:= WebBrowser1->OleObject->document;  //Ссылаемся на интерфейс документа;

if (TVarData(Doc)->VDispatch = nil ) Exit;  //Если документ отсутствует, тогда выходим;

Histor:=Doc->parentWindow->history;  {Объект документа - объект родительского окна - объект содержащий

историю переходов Шаг вперед к предыдущему URL.};

Histor->go(1);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
WebBrowser1.GoHome;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
WebBrowser1.Stop;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
WebBrowser1.Refresh;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
WebBrowser1.GoHome;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
WebBrowser1.Stop;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
WebBrowser1.Refresh;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
  WebBrowser1->Stop;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
  WebBrowser1->Refresh;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
  if (OpenDialog1->Execute)
  {
   WebBrowser1->Navigate(OpenDialog1->FileName);

   ComboBox1->Text:=OpenDialog1->FileName;
  }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton10Click(TObject *Sender)
{
WebBrowser1->ExecWB(OLECMDID_SAVEAS, OLECMDEXECOPT_DODEFAULT);
//Сохраняем содержимое WebBrowser1;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
OLEvariant PostData, Headers ;
 WebBrowser1->ExecWB(OLECMDID_PRINT, OLECMDEXECOPT_DODEFAULT, PostData, Headers);
 //Печатаем содержимое TWebBrowser;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton12Click(TObject *Sender)
{
WebBrowser1->ExecWB(OLECMDID_PRINTPREVIEW, OLECMDEXECOPT_DODEFAULT);
//Предварительный просмотр;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton13Click(TObject *Sender)
{
 WebBrowser1->ExecWB(OLECMDID_PAGESETUP, OLECMDEXECOPT_DODEFAULT);
  //Параметры страницы;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton14Click(TObject *Sender)
{
WebBrowser1->ExecWB(OLECMDID_FIND, OLECMDEXECOPT_DODEFAULT);
 //Поиск слов на сайте;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton15Click(TObject *Sender)
{
if (SaveDialog1.Execute)
SaveHTMLSourceToFile(SaveDialog1.FileName, WebBrowser1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton16Click(TObject *Sender)
{
ProgressBar1->Max=ProgressMax;
ProgressBar1->Position=Progress;
StatusBar1->Panels[0].tex=text;
if (SaveDialog1->Execute) then
SaveHTMLSourceToFile(SaveDialog1->FileName, WebBrowser1);
}
//---------------------------------------------------------------------------

