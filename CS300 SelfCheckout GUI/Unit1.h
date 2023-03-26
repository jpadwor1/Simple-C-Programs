//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *employee_login_btn;
	TButton *pay_btn;
	TSwitch *lang_switch;
	TSwitch *cash_credit_switch;
	TLabel *cash_label;
	TLabel *lang_label;
	TEdit *Edit1;
	TLabel *loyalty_label;
	TButton *loyalty_sign_in_btn;
	TButton *Help_btn;
	TButton *lookup_btn;
	TEdit *Edit2;
	TPanel *Panel1;
	TLabel *Scan_label;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
