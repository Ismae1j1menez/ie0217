// Incluir la biblioteca principal de wxWidgets
#include <wx/wx.h>

// Definición de la clase MainFrame que hereda de wxFrame
class MainFrame : public wxFrame {
public:
    // Constructor con un título para la ventana
    MainFrame(const wxString& title);

private:
    // Evento de clic en el botón
    void OnButtonClicked(wxCommandEvent& evt);

    // Cambios en el deslizador
    void OnSliderChanged(wxCommandEvent& evt);

    // Cambios en el campo de texto
    void OnTextChanged(wxCommandEvent& evt);
};
