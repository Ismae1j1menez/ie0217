#include "MainFrame.hpp"
#include <wx/wx.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel
    wxPanel* panel = new wxPanel(this);

    // Barra de estado para mostrar mensajes
    CreateStatusBar();

    panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);
    panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
}

// Función manejadora para eventos de ratón
void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
    wxPoint mousePos = evt.GetPosition();
    wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);

    // Mostrar el mensaje en la barra de estado
    wxLogStatus(message);
}