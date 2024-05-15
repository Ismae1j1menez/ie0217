#include "MainFrame.hpp"
#include <wx/wx.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel 
    wxPanel* panel = new wxPanel(this);

    // Botón y ubicarlo en el panel
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));

    // Barra de estado para mostrar mensajes
    wxStatusBar* statusBar = CreateStatusBar();
    statusBar->SetDoubleBuffered(true); 

    panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
    button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
}

// Función manejadora para eventos de movimiento del ratón
void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
    // Obtener la posición del ratón 
    wxPoint mousePos = evt.GetPosition();
    wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);

    // Mostrar el mensaje en la barra de estado
    wxLogStatus(message);
}