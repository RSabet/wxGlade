// -*- C++ -*-
//
// generated by wxGlade "faked test version"
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef ALLWIDGETS_30_H
#define ALLWIDGETS_30_H

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/intl.h>

#ifndef APP_CATALOG
#define APP_CATALOG "AllWidgets30App"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/artprov.h>
#include <wx/calctrl.h>
#include <wx/datectrl.h>
#include <wx/generic/calctrlg.h>
#include <wx/grid.h>
#include <wx/hyperlink.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/propgrid/manager.h>
#include <wx/spinbutt.h>
#include <wx/spinctrl.h>
#include <wx/splitter.h>
#include <wx/statline.h>
#include <wx/tglbtn.h>
#include <wx/treectrl.h>
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class All_Widgets_Frame: public wxFrame {
public:
    // begin wxGlade: All_Widgets_Frame::ids
    enum {
        mn_IDUnix = wxID_HIGHEST + 1000,
        mn_IDWindows = wxID_HIGHEST + 1001,
    };
    // end wxGlade

    All_Widgets_Frame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: All_Widgets_Frame::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: All_Widgets_Frame::attributes
    wxMenuItem* mn_Unix;
    wxMenuItem* mn_Windows;
    wxMenuItem* mn_RemoveTabs;
    wxMenuItem* mn_RemoveWhiteSpaces;
    wxMenuItem* mn_KeepWhiteSpaces;
    wxMenuBar* All_Widgets_menubar;
    wxStatusBar* All_Widgets_statusbar;
    wxToolBar* All_Widgets_toolbar;
    wxBitmapButton* bitmap_button_icon1;
    wxBitmapButton* bitmap_button_empty1;
    wxBitmapButton* bitmap_button_icon2;
    wxBitmapButton* bitmap_button_art;
    wxPanel* notebook_1_wxBitmapButton;
    wxButton* button_3;
    wxPanel* notebook_1_wxButton;
    wxCalendarCtrl* calendar_ctrl_1;
    wxPanel* notebook_1_wxCalendarCtrl;
    wxGenericCalendarCtrl* generic_calendar_ctrl_1;
    wxPanel* notebook_1_wxGenericCalendarCtrl;
    wxCheckBox* checkbox_1;
    wxCheckBox* checkbox_2;
    wxCheckBox* checkbox_3;
    wxCheckBox* checkbox_4;
    wxCheckBox* checkbox_5;
    wxCheckBox* checkbox_6;
    wxPanel* notebook_1_wxCheckBox;
    wxCheckListBox* check_list_box_1;
    wxPanel* notebook_1_wxCheckListBox;
    wxChoice* choice_empty;
    wxChoice* choice_filled;
    wxPanel* notebook_1_wxChoice;
    wxComboBox* combo_box_empty;
    wxComboBox* combo_box_filled;
    wxPanel* notebook_1_wxComboBox;
    wxDatePickerCtrl* datepicker_ctrl_1;
    wxPanel* notebook_1_wxDatePickerCtrl;
    wxGauge* gauge_1;
    wxPanel* notebook_1_wxGauge;
    wxGrid* grid_1;
    wxPanel* notebook_1_wxGrid;
    wxHyperlinkCtrl* hyperlink_1;
    wxPanel* notebook_1_wxHyperlinkCtrl;
    wxListBox* list_box_empty;
    wxListBox* list_box_filled;
    wxPanel* notebook_1_wxListBox;
    wxListCtrl* list_ctrl_1;
    wxPanel* notebook_1_wxListCtrl;
    wxPropertyGridManager* property_grid_2;
    wxPanel* notebook_1_wxPropertyGridManager;
    wxRadioBox* radio_box_empty1;
    wxRadioBox* radio_box_filled1;
    wxRadioBox* radio_box_empty2;
    wxRadioBox* radio_box_filled2;
    wxPanel* notebook_1_wxRadioBox;
    wxRadioButton* radio_btn_1;
    wxTextCtrl* text_ctrl_1;
    wxRadioButton* radio_btn_2;
    wxTextCtrl* text_ctrl_2;
    wxRadioButton* radio_btn_3;
    wxTextCtrl* text_ctrl_3;
    wxPanel* notebook_1_wxRadioButton;
    wxSlider* slider_1;
    wxPanel* notebook_1_wxSlider;
    wxTextCtrl* tc_spin_button;
    wxSpinButton* spin_button;
    wxPanel* notebook_1_wxSpinButton;
    wxSpinCtrl* spin_ctrl_1;
    wxPanel* notebook_1_wxSpinCtrl;
    wxStaticText* label_top_pane;
    wxPanel* splitter_1_pane_1;
    wxStaticText* label_buttom_pane;
    wxPanel* splitter_1_pane_2;
    wxSplitterWindow* splitter_1;
    wxScrolledWindow* notebook_1_wxSplitterWindow_horizontal;
    wxStaticText* label_left_pane;
    wxPanel* splitter_2_pane_1;
    wxStaticText* label_right_pane;
    wxPanel* splitter_2_pane_2;
    wxSplitterWindow* splitter_2;
    wxScrolledWindow* notebook_1_wxSplitterWindow_vertical;
    wxStaticBitmap* bitmap_empty;
    wxStaticBitmap* bitmap_file;
    wxStaticBitmap* bitmap_nofile;
    wxStaticBitmap* bitmap_art;
    wxPanel* notebook_1_wxStaticBitmap;
    wxStaticLine* static_line_2;
    wxStaticLine* static_line_3;
    wxStaticLine* static_line_4;
    wxStaticLine* static_line_5;
    wxPanel* notebook_1_wxStaticLine;
    wxStaticText* label_1;
    wxStaticText* label_4;
    wxStaticText* label_5;
    wxPanel* notebook_1_wxStaticText;
    wxStaticText* label_3;
    wxStaticText* label_2;
    wxPanel* notebook_1_Spacer;
    wxTextCtrl* text_ctrl;
    wxPanel* notebook_1_wxTextCtrl;
    wxToggleButton* button_2;
    wxToggleButton* button_4;
    wxPanel* notebook_1_wxToggleButton;
    wxTreeCtrl* tree_ctrl_1;
    wxPanel* notebook_1_wxTreeCtrl;
    wxNotebook* notebook_1;
    wxStaticLine* static_line_1;
    wxButton* button_5;
    wxButton* button_1;
    // end wxGlade

    DECLARE_EVENT_TABLE();

public:
    void onSelectUnix(wxCommandEvent &event); // wxGlade: <event_handler>
    void onSelectWindows(wxCommandEvent &event); // wxGlade: <event_handler>
    void onRemoveTabs(wxCommandEvent &event); // wxGlade: <event_handler>
    void OnRemoveWhiteSpaces(wxCommandEvent &event); // wxGlade: <event_handler>
    void OnKeepWhiteSpaces(wxCommandEvent &event); // wxGlade: <event_handler>
    void onShowManual(wxCommandEvent &event); // wxGlade: <event_handler>
    void OnBitmapButtonPanelNavigationKey(wxNavigationKeyEvent &event); // wxGlade: <event_handler>
    void OnNotebookPageChanged(wxBookCtrlEvent &event); // wxGlade: <event_handler>
    void OnNotebookPageChanging(wxBookCtrlEvent &event); // wxGlade: <event_handler>
    void onStartConverting(wxCommandEvent &event); // wxGlade: <event_handler>
}; // wxGlade: end class


#endif // ALLWIDGETS_30_H
