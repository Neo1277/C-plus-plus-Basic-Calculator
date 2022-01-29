/***************************************************************
 * Name:      CalculadoraBasicaC__Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2015-05-09
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef CALCULADORABASICAC__MAIN_H
#define CALCULADORABASICAC__MAIN_H

//(*Headers(CalculadoraBasicaC__Frame)
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class CalculadoraBasicaC__Frame: public wxFrame
{
    public:

        CalculadoraBasicaC__Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CalculadoraBasicaC__Frame();

    private:

        //(*Handlers(CalculadoraBasicaC__Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void Onbtn1Click(wxCommandEvent& event);
        void Onbtn2Click(wxCommandEvent& event);
        void Onbtn3Click(wxCommandEvent& event);
        void Onbtn4Click(wxCommandEvent& event);
        void Onbtn5Click(wxCommandEvent& event);
        void Onbtn6Click(wxCommandEvent& event);
        void Onbtn7Click(wxCommandEvent& event);
        void Onbtn8Click(wxCommandEvent& event);
        void Onbtn9Click(wxCommandEvent& event);
        void Onbtn0Click(wxCommandEvent& event);
        void OnbtnpuntoClick(wxCommandEvent& event);
        void OnbtnsumClick(wxCommandEvent& event);
        void OnbtnerasebackClick(wxCommandEvent& event);
        void OnbtnresClick(wxCommandEvent& event);
        void OnbtnmulClick(wxCommandEvent& event);
        void OnbtndivClick(wxCommandEvent& event);
        void OnbtnraizcClick(wxCommandEvent& event);
        void OnbtnresultClick(wxCommandEvent& event);
        void OnbtncClick(wxCommandEvent& event);
        void OnImageButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(CalculadoraBasicaC__Frame)
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long ID_BUTTON11;
        static const long ID_BUTTON12;
        static const long ID_BUTTON13;
        static const long ID_BUTTON14;
        static const long ID_BUTTON15;
        static const long ID_BUTTON16;
        static const long ID_BUTTON17;
        static const long ID_BUTTON18;
        static const long ID_BUTTON19;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CalculadoraBasicaC__Frame)
        wxButton* btn0;
        wxButton* btnmul;
        wxButton* btnce;
        wxButton* btn5;
        wxButton* btn3;
        wxButton* btn9;
        wxButton* btn2;
        wxButton* btnraizc;
        wxButton* btnpunto;
        wxButton* btnres;
        wxButton* btn6;
        wxButton* btn1;
        wxStatusBar* StatusBar1;
        wxButton* btn8;
        wxTextCtrl* textcalculadora;
        wxButton* btnresult;
        wxButton* btndiv;
        wxButton* btn7;
        wxButton* btneraseback;
        wxButton* btnsum;
        wxButton* btn4;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULADORABASICAC__MAIN_H
