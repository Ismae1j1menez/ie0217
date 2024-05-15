// Incluir la biblioteca principal de wxWidgets
#include <wx/wx.h>

// Definición de la clase MainFrame que hereda de wxFrame
class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    // Función para manejar el evento de clic en el botón
    void OnButtonClicked(wxCommandEvent& evt);

    // Función para manejar cambios en el deslizador
    void OnSliderChanged(wxCommandEvent& evt);

    // Función para manejar cambios en el campo de texto
    void OnTextChanged(wxCommandEvent& evt);
    wxDECLARE_EVENT_TABLE();
};
