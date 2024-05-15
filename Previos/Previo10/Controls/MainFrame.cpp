#include "MainFrame.hpp"
#include <wx/wx.h>
#include <wx/spinctrl.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crea un panel 
    wxPanel* panel = new wxPanel(this);

    // Botón y colocarlo en el panel
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));

    // Casilla de verificación y colocarla en el panel
    wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(550, 55));

    // Texto estático (no editable) y colocarlo en el panel
    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "StaticText - NOT editable", wxPoint(120, 150));

    // Texto editable y colocarlo en el panel
    wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(500, 145), wxSize(200, -1), wxTE_LEFT);

    // Control deslizante y colocarlo en el panel
    wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(250, 200), wxSize(200, -1));

    // Medidor y colocarlo en el panel, inicializado en 50
    wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(500, 255), wxSize(200, -1));
    gauge->SetValue(50);

    // Crear una lista de opciones
    wxArrayString choices;
    choices.Add("Item A");
    choices.Add("Item B");
    choices.Add("Item C");

    // Crear un control desplegable
    wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices);
    choice->SetSelection(0); 

    // Crear un control de números
    wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1));

    // Crear un cuadro de lista
    wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices);

    // Crear un grupo de botones de radio
    wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox", wxPoint(485, 475), wxDefaultSize, choices);
}
