#ifndef emSyS_W_BUTTONS_H
#define emSyS_W_BUTTONS_H      1

#include "emHMI_config.h"

#if ( emSyS_W_BUTTONS > 0 )

#ifdef __cplusplus
extern "C" {
#endif

#include "emSys_W.h"

typedef struct {
    const emSysFont* font;
    
    uint32_t bitmap_gap; //gap between text and bitmap if it exists
    uint32_t active_delay; //delay in frames while active state will be on after click
    
    emSysStyleTheme normal;
    emSysStyleTheme focused;
    emSysStyleTheme active;
} emSysStyle_Button;

// Button - simple button. executes click() function when OK clicked.
typedef struct _emButton emButton;

typedef struct _emButton {
    emWidget           el;

    char*               text;
    const emSysBitmap* bitmap; 
    emSysStyle_Button* style;

    void                ( *click )      ( emButton* b );                  // When OK button clicked.
    uint8_t             ( *onkey )      ( emButton* b, emInputData data ); // Handle any key pressed on button.
                        // Return 1 if you want click method be executed if was click event.                      //        0 if not and send NOT_HANDLED.
                        //        2 if not and send HANDLED result.

    void                ( *onfocus )    ( emButton* b,emFocusEnum type );        // type == M_G_FOCUS_GET when focus recieved and M_G_FOCUS_LEAVE when dropped.

    uint8_t state;
} MButton;

void m_create_button( MButton*              b,
                      emContainer*           c,
                    emPosition             pos,
                      emSysStyle_Button*   style );

void m_button_set_text    (emButton *b, char *c);
void m_button_set_bitmap  (emButton *b, const emSysBitmap *bm);    
void m_button_set_click   (emButton *b, void (*click   )(emButton* b));
void m_button_set_onkey   (emButton *b, uint8_t (*onkey)(emButton* b, emInputData data));
void m_button_set_onfocus (emButton *b, void (*onfocus )(emButton* b, emFocusEnum type));
    
#ifdef __cplusplus
}
#endif

#endif

#endif
