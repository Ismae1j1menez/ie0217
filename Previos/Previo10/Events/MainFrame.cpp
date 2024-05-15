#include "MainFrame.hpp"
#include <wx/wx.h>

// Definir IDs para los diferentes controles
enum IDs {
    BUTTON_ID = 2,
    SLIDER_ID = 3,
    TEXT_ID = 4
};

// Declaración de la tabla de eventos
BEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(BUTTON_ID, MainFrame::OnButtonClicked)
    EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
    EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
END_EVENT_TABLE()

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel 
    wxPanel* panel = new wxPanel(this);

    // Crear y configurar un botón
    wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(300, 275), wxSize(200, 50));

    // Crear y configurar un control deslizante
    wxSlider* slider = new wxSlider(panel, SLIDER_ID, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));

    // Crear y configurar un campo de texto
    wxTextCtrl* textCtrl = new wxTextCtrl(panel, TEXT_ID, "", wxPoint(300, 375), wxSize(200, -1));

    // Crear una barra de estado para mostrar mensajes
    CreateStatusBar();
}

// Manejador de eventos para clic de botón
void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");
}

// Manejador de eventos para cambio en el deslizador
void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
    wxString str = wxString::Format("Slider Value: %d", evt.GetInt());
    wxLogStatus(str);
}

// Manejador de eventos para cambio de texto
void MainFrame::OnTextChanged(wxCommandEvent& evt) {
    wxString str = wxString::Format("Text: %s", evt.GetString());
    wxLogStatus(str);
}
