// -*- C++ -*- generated by wxGlade "faked test version"

#include <wx/wx.h>
#include <wx/image.h>
// begin wxGlade: ::dependencies
// end wxGlade


#ifndef GAUGE_H
#define GAUGE_H


// begin wxGlade: ::extracode
// end wxGlade


class MyFrame: public wxFrame {
public:
    // begin wxGlade: MyFrame::ids
    // end wxGlade

    MyFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: MyFrame::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: MyFrame::attributes
    wxGauge* gauge_1;
    // end wxGlade
}; // wxGlade: end class


#endif // GAUGE_H