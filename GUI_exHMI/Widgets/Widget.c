#include "em_W.h"

void _m_e_helper_draw_box( emHMIBuffer* b, emPosition *p, const emHMIStyleTheme *th ) {
    _m_e_helper_draw_box_param( b, p, th->border_c, th->bg_color, th->thickness );
}

void _m_e_helper_draw_box_param ( emHMIBuffer* b, emPosition *p,
                                  emColor border_color, emColor bg_color, uint16_t thickness ) {
    em_d_rect_filled( b,
                          emPoint){p->real_x,
                                  p->real_y},
                          p->width,
                          p->height,
                          thickness,
                          border_color,
                          bg_color);
}
