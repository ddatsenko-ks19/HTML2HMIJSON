#ifndef GUI_W_TEXT_FIELD_H
#define GUI_W_TEXT_FIELD_H

#include "gui_config.h"

#if ( GUI_W_TEXT_FIELD > 0 )

#ifdef __cplusplus
extern "C" {
#endif

#include "gui_w.h"

typedef struct {
    const guiFont*       font;
    uint32_t                font_line_spacing;

    //scroll
    uint8_t                 scroll_width; //if == 0 then total line count won't be calculated
    guiColor                scroll_bg_color; //may be 0
    guiColor                scroll_color;

    
    guiStyleTheme  normal;
    guiStyleTheme  focused;
    guiStyleTheme  active;
} guiStyle_TextField;

    
// This one will display multiline text with multiline, folding and cutting support.
typedef struct {
    emSysGUI*            gui;
    guiWidget              el;

    char*                 text;
    uint32_t              len;

    uint8_t               enable_scroll;
    uint32_t              current_line;
    uint32_t              total_lines ;

    uint8_t                state; //focus state
    guiStyle_TextField* style;
} guiTextField;

void m_create_text_field( MTextField*   b,
                          guiContainer*   c,
                          guiPosition     pos,
                          char*         text,
			  uint32_t      len,
			  uint8_t       enable_scroll,
                          guiStyle_TextField*  style );

void m_text_field_set_text ( MTextField*   b,
			     char*         text,
			     uint32_t      len );
			     

#ifdef __cplusplus
}
#endif

#endif

#endif
