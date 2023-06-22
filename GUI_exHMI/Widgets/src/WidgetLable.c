#include "gui_w_lable.h"

#if GUI_W_LABLE > 0

static guiResult draw   ( MElement* b, MakiseGUI *gui );

static char name[] = "Lable";

void m_create_lable( guiLable*             b,
                     guiContainer*         c,
                     guiPosition           pos,
                     guiStyle_Lable*   style )
{
    //clear structure
    memset(b, 0, sizeof(guiLable));
    
    guiWidget *e = &b->el;

    m_element_create(e, name, b,
		     1, guiFocusPrior_Focusble, pos,
		     &draw,
		     0,
		     0,
		     0,
		     0,
		     0, 0);
    
    b->text = 0;
    b->style = style;
    b->scroll_enable = 1; //enable scroll by default
    b->scroll_x = 0;
    b->alignment = MDTextPlacement_LeftCenter;

    makise_g_cont_add(c, e);
    
    
    GUI_DEBUG_OUTPUT("Lable %d created\n", e->id);
}

static guiResult draw ( guiWidget* b, emGUI *gui )
{
    guiLable *e = b->data;
    
    _m_e_helper_draw_box_param( gui->buffer, &b->position,
                                e->style->border_c, e->style->bg_color, e->style->thickness );

    if(e->text_width == UINT32_MAX)
        e->text_width = makise_d_string_get_width(gui->buffer, e->text,
                                                  MDTextAll, e->style->font);
    
    if ( e->text != 0 ) {
	int32_t dx = 0, scrlx = e->scroll_x / 100;
	if(e->scroll_enable && b->position.width < e->text_width)
	{
	    if(scrlx >= (int32_t)e->text_width) {
		e->scroll_x = 0;
		dx = 0;
	    }
	    else
	    {
		if(scrlx < (int32_t)b->position.width / 2)
		    dx = 0;
		else if(scrlx >= (int32_t)(e->text_width - (b->position.width / 4)))
		    dx = -(e->text_width - (b->position.width / 4))
			+ b->position.width / 2;
		else
		    dx = -scrlx + b->position.width / 2;
	    }
	    e->scroll_x += e->style->scroll_speed;
	}
        makise_d_string(gui->buffer,
			e->text, MDTextAll,
			(int32_t)(b->position.real_x + 2 + dx),
			b->position.real_y + b->position.height / 2,
			MDTextPlacement_LeftCenter,
			e->style->font,
			e->style->font_col);
    }
    
    return gui_OK;
}

void gui_lable_set_text( guiLable *b,
		       char   *text)
{
    gui_W_MUTEX_REQUEST(b);
    
    b->text = text;
    b->text_width = UINT32_MAX;
    b->scroll_x = 0;
    
    gui_W_MUTEX_RELEASE(b);
}

char* m_lable_get_text( guiLable *b )
{
    gui_W_MUTEX_REQUEST(b);

    char *t = b->text;
    
    gui_W_MUTEX_RELEASE(b);
    return t;
}

void m_lable_enable_scroll( guiLable *b, uint8_t enable )
{
    gui_W_MUTEX_REQUEST(b);    
    
    b->scroll_enable = enable;
    b->scroll_x = 0;
    
    gui_W_MUTEX_RELEASE(b);
}

/* void m_lable_set_alignment( guiLable *b, */
/*                             MDTextPlacement alignment) */
/* { */
/*     gui_W_MUTEX_REQUEST(b);     */
    
/*     b->alignment = alignment; */
    
/*     gui_W_MUTEX_RELEASE(b); */
/* } */


#endif
