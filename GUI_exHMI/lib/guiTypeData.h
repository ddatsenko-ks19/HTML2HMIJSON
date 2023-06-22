#ifndef guiTYPEDATA_H
#define guiTYPEDATA_H      1

#ifdef __cplusplus
extern "C" {
#endif
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef char* ptr8;
typedef short* ptr16;
typedef int* ptr32;



struct guiPoint{
     u16 X, Y;
     void point(u16 x, u16 y) { X=x; Y=y;}
     };

struct guiSize{
     u16 width, hight;
     void size(u16 W, u16 H) {width=W; hight=H;}
     };

struct guiColor{
     u16 cBody; u16 cBkGround;
     void color(u16 Body, u16 BkGround) {cBody=Body; cBkGround=BkGround;}
     };

struct guiActColor{
     u16 cHidden; u16 cPassive; u16 cActive; 
     void color(u16 c_Hidden, u16 c_Passive, u16 c_Active)
     {cHidden=c_Hidden; cPassive=c_Passive; cActive=c_Active;}
     };       

struct guiStyle{
     u8 border; u16 cBorder; bool visible; bool active; guiActColor color;
     void setBorder(void)
        {if(visible)
          if(active) cBorder=color.cActive;
          else cBorder=color.cPassive;
         else cBorder=color.cHidden; 
        }
     };
struct guiFont
     {  u8 width, hight;
      ptr8 Font; 
     };

struct guiText{
        char* text;
     guiFont  font;
    guiStyle  style;
    guiColor  color;
     };

struct guiAttribute
    { guiPoint locate;
       guiSize size;
      guiStyle border;
      guiColor defColor;
      guiColor actColor;
 void attibute(guiPoint _locate, guiSize _size, guiStyle _border)
        { locate=_locate; size=_size; border=_border;}
    };
enum eStatus {eHidden, ePassive, eSelect, eActive};    
struct guiActStatus
    { eStatus stutus;
          u32 TimeStatus;
         ptr8 Event;
      void getStatus(ptr32);
      void setStatus(ptr32);  
    };

    void guiActStatus::getStatus(ptr32) {}
    void guiActStatus::setStatus(ptr32) {}





#ifdef __cplusplus
}
#endif
#endif