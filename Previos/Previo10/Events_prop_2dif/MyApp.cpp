#include "MyApp.hpp"
#include "MainFrame.hpp"

// Macro que define el punto de entrada de la aplicación.
wxIMPLEMENT_APP(App);

// OnInit se ejecuta al iniciar la aplicación.
bool App::OnInit() {
    // Crea una ventana principal con el título "C++ GUI".
    MainFrame* mainFrame = new MainFrame("C++ GUI");
    // Muestra la ventana principal.
    mainFrame->Show();
    // Retorna true para indicar que la inicialización fue exitosa.
    return true;
}