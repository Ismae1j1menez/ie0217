// Archivo de encabezado MainFrame.hpp
#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
    // Constructor con título para la ventana
    MainFrame(const wxString& title);

private:
    // Función para manejar eventos de teclado
    void OnKeyEvent(wxKeyEvent& evt);
};