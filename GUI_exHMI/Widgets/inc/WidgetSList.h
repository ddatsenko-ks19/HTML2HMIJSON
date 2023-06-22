#ifndef emGUI_W_SLIST_H
#define emGUI_W_SLIST_H        1

#include "makise_config.h"

#if ( emGUI_W_SLIST > 0 )

#ifdef __cplusplus
extern "C" {
#endif

#include "makise_e.h"


typedef struct {
    const MakiseFont*       font;
    uint32_t                font_line_spacing;

    //spacing set
    uint8_t                 left_margin;
    uint8_t                 item_margin; //vertical

    //scroll
    uint8_t                 scroll_width;
    guiColor                 scroll_bg_color; //may be 0
    guiColor                 scroll_color;

    emGUI_StyleTheme  normal;
    emGUI_StyleTheme  focused;
    emGUI_StyleTheme  active;
} emGUI_Style_SList;

typedef struct {
    const emGUI_StyleFont*       font;
    uint32_t                font_line_spacing;
    
    //text scroll
    uint32_t                text_scroll_speed;
    
    emGUI_StyleTheme  normal;
    emGUI_StyleTheme  focused;
    emGUI_StyleTheme  active;
} emGUI_Style_SListItem;
    
    
// Simple list element.
// Can display items. Supports scrolling.
// Modes: list, radio buttons, checkboxes.
typedef enum {
    guiSList_List,
    guiSList_RadioButton,
    guiSList_Checkbox
} guiSList_Type;

typedef struct _guiSList_Item guiSList_Item;
typedef struct _guiSList guiSList;

typedef struct _guiSList_Item {
    char*                         text;           // text of item
    uint32_t                      value;          // value. It may be checkbox or radio button status

    guiSList_Item*                  prev;
    guiSList_Item*                  next;

    uint32_t                      id;             // c ustom id, if NOT is_array, else - position in the array(will be computed automatically by guiSList).
} guiSList_Item;

typedef struct _guiSList {
    emSysGUI*                    gui;
    guiWidget                      el;

    const char*                   text;

    guiSList_Item*                  items;          // item's array pointer or pointer to the first element of the list
    uint8_t                       is_array;       // if 1 then items will be
    uint32_t                      len;            // matters only if is_array

    guiSList_Item*                  selected;

    uint32_t                      text_scroll_x;
    uint32_t                      text_scroll_width;

#if emGUI_GUI_INPUT_POINTER_ENABLE == 1
    uint8_t                       started;        // was pressing already started
    int32_t                       sx;             // cursor's x when pressing was started
    int32_t                       sy;
    guiSList_Item*                  sitem;          // focused item when pressing was started
#endif

    void                          ( *onselection )  ( guiSList *l, guiSList_Item *selected );     // when selected item is changing
    void                          ( *click )        ( guiSList *l, guiSList_Item *selected );     // when OK button clicked

    guiSList_Type                   type;
    const emGUI_Style_SList*      style;
    const emGUI_Style_SListItem*  item_style;

    uint32_t                state;          // focus state
} guiSList;

void m_create_slist( guiSList*                      b,
                     guiContainer*                  c,
                     guiMPosition                    pos,
                     char*                        text,
                     void                         ( *onselection )    ( guiSList *l, guiSList_Item *selected ),
                     void                         ( *click )          ( guiSList *l, guiSList_Item *selected ),
                     guiSList_Type                  type,
                     const emGUI_Style_SList*     style,
                     const emGUI_Style_SListItem* item_style);

void m_slist_add        ( guiSList *l, guiSList_Item *item );                   // Add one item to the list at the end. Only if NOT is_array.
void m_slist_clear      ( guiSList *l);                                       // Clear all pointers
void m_slist_remove     ( guiSList *l, guiSList_Item *item );                   // Remove item from linked list. Only if NOT is_array.
void m_slist_set_array  ( guiSList *l, guiSList_Item *array, uint32_t len );    // Set new data source. Simple array.
void m_slist_set_list   ( guiSList *l, guiSList_Item *first );                  // Set linked list as new data source.

    
void m_slist_set_header ( guiSList *l, const char* text );

/* void m_slist_set_onselection(guiSList *l, void (*onselection)(guiSList *l, guiSList_Item selected)); */
/* void m_slist_set_click(guiSList *l, void (*click)(guiSList *l, guiSList_Item selected)); */

#ifdef __cplusplus
}
#endif

#endif

#endif

