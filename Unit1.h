//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.WebBrowser.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *������;
	TButton *Button1;
	TWebBrowser *WebBrowser1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TComboBox *ComboBox1;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton14;
	TSpeedButton *SpeedButton15;
	TSpeedButton *SpeedButton16;
	TProgressBar *ProgressBar1;
	TImageControl *ImageControl1;
	TImageControl *ImageControl2;
	TBitmapAnimation *BitmapAnimation1;
	TImageControl *ImageControl3;
	TImageControl *ImageControl4;
	TImageControl *ImageControl5;
	TImageControl *ImageControl6;
	TImageControl *ImageControl7;
	TImageControl *ImageControl8;
	TImageControl *ImageControl9;
	TImageControl *ImageControl10;
	TImageControl *ImageControl11;
	TImageControl *ImageControl12;
	TImageControl *ImageControl13;
	TImageControl *ImageControl14;
	TImageControl *ImageControl15;
	TImageControl *ImageControl16;
	TImageControl *ImageControl17;
	TImageControl *ImageControl18;
	TEdit *Edit1;
	void __fastcall ������Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall ComboBox1KeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton10Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall SpeedButton12Click(TObject *Sender);
	void __fastcall SpeedButton13Click(TObject *Sender);
	void __fastcall SpeedButton14Click(TObject *Sender);
	void __fastcall SpeedButton15Click(TObject *Sender);
	void __fastcall SpeedButton16Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
