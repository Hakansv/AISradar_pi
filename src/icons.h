/* Autogenerated by png2wx.pl on Fri Sep  9 13:06:36 2011 */
#ifndef ICONS_H
#define ICONS_H 1

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#    include <wx/wx.h>
#endif

#include <wx/filename.h>
#include <wx/mstream.h>								   
extern void initialize_images(void);
extern void cleanup_images(void);

extern wxBitmap *_img_ais_pi;

#ifdef PLUGIN_USE_SVG
extern wxString _svg_aisradar;
extern wxString _svg_aisradar_rollover;
extern wxString _svg_aisradar_toggled;
#endif

#endif /* ICONS_H */
