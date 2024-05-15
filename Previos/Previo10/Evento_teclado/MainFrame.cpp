#include "MainFrame.hpp"
#include <wx/wx.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel
    wxPanel* panel = new wxPanel(this);

    // Crear una barra de estado
    CreateStatusBar();

    // Evento de presión de tecla con el manejador
    panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);
}

// Función manejadora para eventos de teclado
void MainFrame::OnKeyEvent(wxKeyEvent& evt) {
    wxChar keyChar = evt.GetUnicodeKey();

    if (keyChar == WXK_NONE) {
        int keyCode = evt.GetKeyCode(); 
        wxLogStatus("Key Event %d", keyCode);  // Mostrar el código de la tecla en la barra de estado
    } else {
        wxLogStatus("Key Event %c", keyChar);  // Mostrar el carácter de la tecla en la barra de estado
    }
}