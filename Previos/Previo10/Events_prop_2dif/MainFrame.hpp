// Incluir la biblioteca principal de wxWidgets
#include <wx/wx.h>

// Definición de la clase MainFrame que hereda de wxFrame
class MainFrame : public wxFrame {
public:
    // Constructor con título para la ventana
    MainFrame(const wxString& title);

private:
    // Función para manejar el evento de clic en el botón
    void OnAnyButtonClicked(wxCommandEvent& evt);
    void OnButton1Clicked(wxCommandEvent& evt);
    void OnButton2Clicked(wxCommandEvent& evt);
};
