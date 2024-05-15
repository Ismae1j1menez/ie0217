#include <wx/wx.h>

// Esta es la declaración de la clase App que hereda de wxApp.
class App : public wxApp {
public:
    // Método OnInit que se sobreescribe para definir acciones de inicio de la app.
    bool OnInit();
};