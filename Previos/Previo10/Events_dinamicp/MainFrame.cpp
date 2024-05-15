// Incluir los archivos necesarios para trabajar con wxWidgets
#include "MainFrame.hpp"
#include <wx/wx.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel que actuará como contenedor de los controles
    wxPanel* panel = new wxPanel(this);

    // Crear y configurar un botón
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 275), wxSize(200, 50));

    // Crear y configurar un deslizador
    wxSlider* slider = new wxSlider(panel, wxID_ANY, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));

    // Crear y configurar un campo de texto
    wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(300, 375), wxSize(200, -1));

    // Asociar los eventos de los controles con sus manejadores específicos
    button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
    slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
    textCtrl->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged, this);

    // Crear una barra de estado para mostrar mensajes
    CreateStatusBar();
}

// Función manejadora cuando se hace clic en el botón
void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");  // Mostrar un mensaje en la barra de estado
}

// Función manejadora cuando el valor del deslizador cambia
void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
    wxString str = wxString::Format("Slider Value: %d", evt.GetInt());  // Formatear el valor del deslizador
    wxLogStatus(str);  // Mostrar el valor en la barra de estado
}

// Función manejadora cuando el texto cambia
void MainFrame::OnTextChanged(wxCommandEvent& evt) {
    wxString str = wxString::Format("Text: %s", evt.GetString());  // Formatear el texto introducido
    wxLogStatus(str);  // Mostrar el texto en la barra de estado
}

