#include "MainFrame.hpp"
#include <wx/wx.h>
#include <wx/spinctrl.h>

// Constructor de la clase MainFrame
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    // Crear un panel dentro de la ventana principal
    wxPanel* panel = new wxPanel(this);

    // Crear un botón y colocarlo en el panel
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35), wxBU_LEFT);

    // Casilla de verificación con tres estados y colocarla en el panel
    wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(550, 55), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);

    // Texto estático (no editable) y colocarlo en el panel
    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "StaticText - NOT editable", wxPoint(150, 150), wxSize(400, -1), wxALIGN_CENTRE_HORIZONTAL);
    staticText->SetBackgroundColour(*wxLIGHT_GREY);

    // Campo de texto para contraseña y colocarlo en el panel
    wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(500, 145), wxSize(200, -1), wxTE_PASSWORD);

    wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1), wxSL_VALUE_LABEL);

    // Crear un medidor vertical
    wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(590, 205), wxSize(-1, 125), wxGA_VERTICAL);
    gauge->SetValue(50);

    // Crear una lista de opciones
    wxArrayString choices;
    choices.Add("Item C");
    choices.Add("Item A");
    choices.Add("Item B");

    wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices, wxCB_SORT);
    choice->SetSelection(0);

    // Control de números y colocarlo en el panel
    wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1), wxSP_WRAP);

    // Cuadro de lista que permite múltiples selecciones y colocarlo en el panel
    wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices, wxLB_MULTIPLE);

    // Botones de radio especificando filas y colocarlo en el panel
    wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox", wxPoint(555, 450), wxDefaultSize, choices, 3, wxRA_SPECIFY_ROWS);
}
