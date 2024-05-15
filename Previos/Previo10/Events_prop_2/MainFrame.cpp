// Incluir los archivos necesarios para trabajar con wxWidgets
#include "MainFrame.hpp"
#include <wx/wx.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel 
    wxPanel* panel = new wxPanel(this);

    // Crear y configurar un botón
    wxButton* button = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
    wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 350), wxSize(200, 50));

    this->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

    // Crear una barra de estado para mostrar mensajes
    CreateStatusBar();
}


void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");  // Mostrar un mensaje en la barra de estado
}


