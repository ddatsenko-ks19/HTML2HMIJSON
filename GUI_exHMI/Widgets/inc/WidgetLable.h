#ifndef emSys_W_LABLE_H
#define emSys_W_LABLE_H

#include "makise_config.h"

#if emSys_W_LABLE > 0

#ifdef __cplusplus
extern "C" {
#endif

#include "makise_e.h"

typedef struct {
    const emSysFont*   font;
    guiColor              font_col;

    guiColor              bg_color;
    guiColor              border_c;

    uint32_t            scroll_speed; // speed of scroll if text doesn't fit. 0 - not scroll. pixels per 100 draw calls
    
    uint16_t            thickness;
} emSysStyle_Lable;

// Lable.
// Simply draws required text.
// It can be only in one line. And it won't be cutting and folding text.
typedef struct {
    emWidget           el;

    char*               text;
    uint32_t            text_width;
    MDTextPlacement     alignment;

    uint8_t             scroll_enable;
    uint32_t            scroll_x;

    emSysStyle_Lable*  style;
} MLable;

void m_create_lable( MLable*             b,
                     MContainer*         c,
                     MPosition           pos,
                     emSysStyle_Lable*  style );

void m_lable_set_text( MLable *b,
		       char   *text);

char* m_lable_get_text( MLable *b );

void m_lable_enable_scroll( MLable *b, uint8_t enable );

/* void m_lable_set_alignment( MLable *b, */
/*                             MDTextPlacement alignment); */

    
#ifdef __cplusplus
}
#endif

#endif

#endif
