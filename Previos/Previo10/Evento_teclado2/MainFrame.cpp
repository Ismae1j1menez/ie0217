#include "MainFrame.hpp"
#include <wx/wx.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel
    wxPanel* panel = new wxPanel(this);

    // Crear botones y añadirlos al panel
    wxButton* btn1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 150), wxSize(200, 100));
    wxButton* btn2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(350, 350), wxSize(200, 100));

    panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);

    // Crear una barra de estado para mostrar mensajes
    CreateStatusBar();
}

// Función manejadora para eventos de teclado
void MainFrame::OnKeyEvent(wxKeyEvent& evt) {
    wxChar keyChar = evt.GetUnicodeKey();

    if (keyChar == WXK_NONE) {
        int keyCode = evt.GetKeyCode();  // Obtener el código de la tecla
        wxLogStatus("Key Event %d", keyCode);  // Mostrar el código de la tecla en la barra de estado
    } else {
        wxLogStatus("Key Event %c", keyChar);  // Mostrar el carácter de la tecla en la barra de estado
    }
}