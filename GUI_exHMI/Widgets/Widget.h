#ifndef emHMI_W_H
#define emHMI_W_H      1

#ifdef __cplusplus
extern "C" {
#endif
#include "emHMI_config.h"
    
#include "emHMI_gui_elements.h"
#include "emHMI_gui_container.h"

#define em_W_MUTEX_REQUEST(e) em_Widget_mutex_request(&(e)->el);
#define em_W_MUTEX_RELEASE(e) em_Widget_mutex_release(&(e)->el);    
    
#include "fonts.h"
#include "emHMI_W_buttons.h"
#include "emHMI_W_canvas.h"
#include "emHMI_W_lable.h"
#include "emHMI_W_slider.h"
#include "emHMI_W_tabs.h"
#include "emHMI_W_text_field.h"
#include "emHMI_W_toggle.h"
#include "emHMI_W_message_window.h"
#include "emHMI_W_slist.h"
#include "emHMI_W_fsviewer.h"

void _m_e_helper_draw_box_param ( emHMIBuffer* b, emPosition *p,
                                  emColor border_color, emColor bg_color,
                                  uint16_t thickness );
    
void _m_e_helper_draw_box(emHMIBuffer* b, emPosition *p, const emHMIStyleTheme *th );

#ifdef __cplusplus
}
#endif

#endif
