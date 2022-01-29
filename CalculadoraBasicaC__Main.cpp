/***************************************************************
 * Name:      CalculadoraBasicaC__Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2015-05-09
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CalculadoraBasicaC__Main.h"
#include <wx/msgdlg.h>
#include <string>//importamos la libreria string
#include <cmath>//importamos la libreria cmath para la funcion sqrt()

using std::string;//Declaramos que solamente vamos a usar string con std

//(*InternalHeaders(CalculadoraBasicaC__Frame)
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(CalculadoraBasicaC__Frame)
const long CalculadoraBasicaC__Frame::ID_BUTTON1 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_TEXTCTRL1 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON2 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON3 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON4 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON5 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON6 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON7 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON8 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON9 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON10 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON11 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON12 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON13 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON14 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON15 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON16 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON17 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON18 = wxNewId();
const long CalculadoraBasicaC__Frame::ID_BUTTON19 = wxNewId();
const long CalculadoraBasicaC__Frame::idMenuQuit = wxNewId();
const long CalculadoraBasicaC__Frame::idMenuAbout = wxNewId();
const long CalculadoraBasicaC__Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CalculadoraBasicaC__Frame,wxFrame)
    //(*EventTable(CalculadoraBasicaC__Frame)
    //*)
END_EVENT_TABLE()

CalculadoraBasicaC__Frame::CalculadoraBasicaC__Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(CalculadoraBasicaC__Frame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("Calculadora Basica C++"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX|wxMINIMIZE_BOX|wxCLIP_CHILDREN, _T("wxID_ANY"));
    SetClientSize(wxSize(264,368));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
    btn7 = new wxButton(this, ID_BUTTON1, _("7"), wxPoint(24,120), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont btn7Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn7->SetFont(btn7Font);
    textcalculadora = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(24,24), wxSize(216,40), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    textcalculadora->Disable();
    textcalculadora->SetFocus();
    wxFont textcalculadoraFont(20,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("DigifaceWide"),wxFONTENCODING_DEFAULT);
    textcalculadora->SetFont(textcalculadoraFont);
    btn8 = new wxButton(this, ID_BUTTON2, _("8"), wxPoint(80,120), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont btn8Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn8->SetFont(btn8Font);
    btn9 = new wxButton(this, ID_BUTTON3, _("9"), wxPoint(136,120), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont btn9Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn9->SetFont(btn9Font);
    btn4 = new wxButton(this, ID_BUTTON4, _("4"), wxPoint(24,168), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont btn4Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn4->SetFont(btn4Font);
    btn5 = new wxButton(this, ID_BUTTON5, _("5"), wxPoint(80,168), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont btn5Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn5->SetFont(btn5Font);
    btn6 = new wxButton(this, ID_BUTTON6, _("6"), wxPoint(136,168), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    wxFont btn6Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn6->SetFont(btn6Font);
    btn1 = new wxButton(this, ID_BUTTON7, _("1"), wxPoint(24,216), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    wxFont btn1Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn1->SetFont(btn1Font);
    btn2 = new wxButton(this, ID_BUTTON8, _("2"), wxPoint(80,216), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    wxFont btn2Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn2->SetFont(btn2Font);
    btn3 = new wxButton(this, ID_BUTTON9, _("3"), wxPoint(136,216), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    wxFont btn3Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btn3->SetFont(btn3Font);
    btnsum = new wxButton(this, ID_BUTTON10, _("+"), wxPoint(192,72), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    wxFont btnsumFont(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btnsum->SetFont(btnsumFont);
    btnres = new wxButton(this, ID_BUTTON11, _("-"), wxPoint(192,120), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    wxFont btnresFont(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btnres->SetFont(btnresFont);
    btnmul = new wxButton(this, ID_BUTTON12, _("*"), wxPoint(192,168), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    wxFont btnmulFont(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btnmul->SetFont(btnmulFont);
    btn0 = new wxButton(this, ID_BUTTON13, _("0"), wxPoint(24,264), wxSize(104,40), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    btndiv = new wxButton(this, ID_BUTTON14, _("/"), wxPoint(192,216), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON14"));
    wxFont btndivFont(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btndiv->SetFont(btndivFont);
    btnresult = new wxButton(this, ID_BUTTON15, _("="), wxPoint(192,264), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON15"));
    btnpunto = new wxButton(this, ID_BUTTON16, _("."), wxPoint(136,264), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON16"));
    btnce = new wxButton(this, ID_BUTTON17, _("CE"), wxPoint(80,72), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON17"));
    wxFont btnceFont(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btnce->SetFont(btnceFont);
    btnraizc = new wxButton(this, ID_BUTTON18, _("_/ x"), wxPoint(136,72), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON18"));
    wxFont btnraizcFont(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    btnraizc->SetFont(btnraizcFont);
    btneraseback = new wxButton(this, ID_BUTTON19, _("<-"), wxPoint(24,72), wxSize(48,40), 0, wxDefaultValidator, _T("ID_BUTTON19"));
    wxFont btnerasebackFont(10,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    btneraseback->SetFont(btnerasebackFont);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn7Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn8Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn9Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn1Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn2Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn3Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtnsumClick);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtnresClick);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtnmulClick);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::Onbtn0Click);
    Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtndivClick);
    Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtnresultClick);
    Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtnpuntoClick);
    Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtncClick);
    Connect(ID_BUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtnraizcClick);
    Connect(ID_BUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnbtnerasebackClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CalculadoraBasicaC__Frame::OnAbout);
    //*)
}

char signo;//Variable de tipo caracter signo(+,- etc)
double num;//Variable que almacenara lo que esta en el campo de texto de la calculadora
double resultado;//Variable mostrara el resultado en el campo de texto
bool nuevaoperacion = false;//Variable de tipo booleano si es verdadero borra la pantalla

CalculadoraBasicaC__Frame::~CalculadoraBasicaC__Frame()
{
    //(*Destroy(CalculadoraBasicaC__Frame)
    //*)
}

void CalculadoraBasicaC__Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void CalculadoraBasicaC__Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void calcular(char signo, double numero){//Funcion calcular de tipo void con 2 parametros signo y numero
    switch(signo){//Cada case se ejecutara segun el signo que se pase como parametro

        case '+':
            resultado += numero;//Aqui se acumula la suma
            break;

        case '-':
            if(resultado==0){//Si el resultado es 0 o si es el primer numero resultado sera igual al numero
                resultado = numero;
            }else{
                resultado -= numero;//Si el resultado no es igual a 0 se hara la resta
            }                        //Lo mismo sera para los siguientes signos * y /
            break;

        case '*':
            if(resultado==0){
                resultado = numero;
            }else{
                resultado *= numero;
            }
            break;

        case '/':
            if(resultado==0){
                resultado = numero;
            }else{
                resultado /= numero;
            }
            break;

        case 'r':
            resultado = sqrt(numero);//sqrt para calcular la raiz cuadrada
            break;
    }
}

void CalculadoraBasicaC__Frame::Onbtn1Click(wxCommandEvent& event)//Boton 1
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");//Si nueva operacion = true se borra la pantalla con SetValue("")
    }
    textcalculadora->AppendText("1");//AppendText para agregar un numero seguido de otro de otro
    nuevaoperacion = false;//nueva operacion = false para que no se borre la pantalla
}//Lo mismo sera para los numeroos del 1 al 9, 0 y el punto.

void CalculadoraBasicaC__Frame::Onbtn2Click(wxCommandEvent& event)//Boton 2
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("2");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn3Click(wxCommandEvent& event)//Boton 3
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("3");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn4Click(wxCommandEvent& event)//Boton 4
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("4");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn5Click(wxCommandEvent& event)//Boton 5
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("5");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn6Click(wxCommandEvent& event)//Boton 6
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("6");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn7Click(wxCommandEvent& event)//Boton 7
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("7");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn8Click(wxCommandEvent& event)//Boton 8
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("8");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn9Click(wxCommandEvent& event)//Boton 9
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("9");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::Onbtn0Click(wxCommandEvent& event)//Boton 0
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText("0");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::OnbtnpuntoClick(wxCommandEvent& event)//Boton .
{
    if(nuevaoperacion){
        textcalculadora->SetValue("");
    }
    textcalculadora->AppendText(".");
    nuevaoperacion = false;
}

void CalculadoraBasicaC__Frame::OnbtnsumClick(wxCommandEvent& event)//Boton +
{
    wxString result = wxT("");//Variable wxString para mostrar el resultado em pantalla
    if(textcalculadora->GetValue().ToDouble((&num))){//Validar si hay texto en pantalla textcalculadora
        signo = '+';//El signo sera igual a +
        calcular(signo, num);//se llama la funcion calcular y se le pasan los parametros
        nuevaoperacion = true;//nueva operacion = true para que se borre la pantalla
        result = wxString::Format(wxT("%.9g"), resultado);//wxString::Format para darle el formato de salida a la variable como double
        textcalculadora->SetValue(result);//Se mostrara en pantalla el resultado
    }//Lo mismo sera para los otros botones -, *, / y _/ x
}

void CalculadoraBasicaC__Frame::OnbtnerasebackClick(wxCommandEvent& event)//Boton <-
{
    string cadena = textcalculadora->GetValue().ToStdString();//Se captura en la variable de cadena el texto de textcalculadora como string
    cadena.erase(cadena.size()-1);//Se borra el ultimo caracter del texto de textcalculadora
    textcalculadora->SetValue(cadena);//Se imprime en pantalla el texto sin el ultimo caracter
}

void CalculadoraBasicaC__Frame::OnbtnresClick(wxCommandEvent& event)//Boton -
{
    wxString result = wxT("");
    if(textcalculadora->GetValue().ToDouble((&num))){
        signo = '-';
        calcular(signo, num);
        nuevaoperacion = true;
        result = wxString::Format(wxT("%.9g"), resultado);
        textcalculadora->SetValue(result);
    }else{
        textcalculadora->AppendText("-");
        nuevaoperacion = false;
    }
}

void CalculadoraBasicaC__Frame::OnbtnmulClick(wxCommandEvent& event)//Boton *
{
    wxString result = wxT("");
    if(textcalculadora->GetValue().ToDouble((&num))){
        signo = '*';
        calcular(signo, num);
        nuevaoperacion = true;
        result = wxString::Format(wxT("%.9g"), resultado);
        textcalculadora->SetValue(result);
    }
}

void CalculadoraBasicaC__Frame::OnbtndivClick(wxCommandEvent& event)//Boton /
{
    wxString result = wxT("");
    if(textcalculadora->GetValue().ToDouble((&num))){
        signo = '/';
        calcular(signo, num);
        nuevaoperacion = true;
        result = wxString::Format(wxT("%.9g"), resultado);
        textcalculadora->SetValue(result);
    }
}

void CalculadoraBasicaC__Frame::OnbtnraizcClick(wxCommandEvent& event)//Boton _/ x raiz cuadrada
{
    wxString result = wxT("");
    if(textcalculadora->GetValue().ToDouble((&num))){
        signo = 'r';
        calcular(signo, num);
        nuevaoperacion = true;
        result = wxString::Format(wxT("%.9g"), resultado);
        textcalculadora->SetValue(result);
        resultado = 0;
    }
}

void CalculadoraBasicaC__Frame::OnbtnresultClick(wxCommandEvent& event)//Boton =
{
    wxString result = wxT("");
    if(textcalculadora->GetValue().ToDouble((&num))){
        calcular(signo, num);
        nuevaoperacion = true;
        result = wxString::Format(wxT("%.9g"), resultado);
        textcalculadora->SetValue(result);
        resultado = 0;
    }
}

void CalculadoraBasicaC__Frame::OnbtncClick(wxCommandEvent& event)//Boton CE
{
    textcalculadora->Clear();//Se limpia el campo de texto textcalcular
    resultado = 0;
}
