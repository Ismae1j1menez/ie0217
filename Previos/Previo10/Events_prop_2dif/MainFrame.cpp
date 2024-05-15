// Incluir los archivos necesarios para trabajar con wxWidgets
#include "MainFrame.hpp"
#include <wx/wx.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel que actuará como contenedor de los controles
    wxPanel* panel = new wxPanel(this);

    // Crear y configurar un botón
    wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
    wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 350), wxSize(200, 50));


    // Asociar los eventos 
    this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
    button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
    button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);

    // Crear una barra de estado
    CreateStatusBar();
}

// Mostrat al hacer clic en el botón
void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");  // Mostrar un mensaje en la barra de estado
}

void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 1 Clicked");  // Mostrar un mensaje en la barra de estado
    evt.Skip();
}


void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 2 Clicked");  // Mostrar un mensaje en la barra de estado
}



