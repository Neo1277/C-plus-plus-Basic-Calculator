/***************************************************************
 * Name:      CalculadoraBasicaC__App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2015-05-09
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CalculadoraBasicaC__App.h"

//(*AppHeaders
#include "CalculadoraBasicaC__Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CalculadoraBasicaC__App);

bool CalculadoraBasicaC__App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	CalculadoraBasicaC__Frame* Frame = new CalculadoraBasicaC__Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
