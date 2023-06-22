#ifndef emSys_W_SLIDER_H
#define emSys_W_SLIDER_H       1

#include "makise_config.h"

#if ( emSys_W_SLIDER > 0 )

#ifdef __cplusplus
extern "C" {
#endif

#include "makise_e.h"

typedef enum {
    guiSlider_Type_Read,
    guiSlider_Type_ReadWrite,
} guiSlider_Type;

#define _guiSlider_is_horizontal(x) (x->position.width >= x->position.height)

typedef struct _guiSlider guiSlider;

typedef struct _guiSlider {
    emSysGUI*                gui;
    guiWidget                 el;

    int32_t*                  value_p;      //pointer to value
    int32_t                   value;        //value
    int32_t                   value_max;    //minimal possible value
    int32_t                   value_min;    //max possible value

    guiSlider_Type              type;         //is slider readonly or you can control it

    void (*onchange)   (guiSlider* b, int32_t val );    // When value changed by user
    void (*onfocus )   (guiSlider* b, guiFocusEnum type); // type == M_G_FOCUS_GET when focus recieved and M_G_FOCUS_LEAVE when dropped.

    const emSysStyle*        style;
    uint8_t                   state; //focus state
} guiSlider;

void m_create_slider( guiSlider*                b,
                      guiContainer*             c,
                      guiPosition                pos,
                      guiSlider_Type            type,
                      const emSysStyle*      style );

void m_slider_set_range(guiSlider* b, int32_t i, int32_t j);
void    m_slider_set_value        (guiSlider* b, int32_t v);
//void    m_slider_set_value_pointer(guiSlider* b, int32_t*v);    
int32_t m_slider_get_value(guiSlider* b);
void m_slider_set_onchange(guiSlider* b, void (*onchange)(guiSlider* b, int32_t val));
void m_slider_set_onfocus (guiSlider* b, void (*onfocus )(guiSlider* b, MFocusEnum type));


    
#ifdef __cplusplus
}
#endif

#endif

#endif
