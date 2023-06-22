#ifndef guiCore_H
#define guiCore_H      1

#ifdef __cplusplus
extern "C" {
#endif

#include "guiTypeData.h"


class GuiComponent
{private:
public:
    guiActStatus Status;
    guiAttribute Attribute;
            bool show;
           
    void visible();
    GuiComponent(/* args */);
    ~GuiComponent();
};

GuiComponent::GuiComponent(/* args */)
{
}

GuiComponent::~GuiComponent()
{
}
void GuiComponent::visible()
{
}
enum eTypeWidget {eLable,eShape, eButton, eValueBox, eSelectBox, eSlider, eProgresBar, eImage};  
class guiWidget : GuiComponent
{private:
    void Redraw();
 public:
    bool Eneble;
    eTypeWidget TypeWidget;

    void OnSelect();
    guiWidget();
    ~guiWidget();
};

guiWidget::guiWidget()
{
}
guiWidget::~guiWidget()
{
}
void guiWidget::Redraw()
{
}
void guiWidget::OnSelect()
{
}

typedef guiWidget * ptrWidget_t;
struct guiWinPage
{   u8 Index;
    u8 CntWidget;
  ptrWidget_t  ptrWidget[32];
    void WinOpen(u8);
    void WinClose(u8);
};
void guiWinPage::WinOpen(u8 Index)
{   
}
void guiWinPage::WinClose(u8 Index)
{
}

typedef guiWinPage* WinPage_t;
struct guiEngin
    {   u8 WinActive;
        u8 CntWindow;
      WinPage_t WinPage[16];
      void guiWinRender(u8);
      void ImageLoad();
    };
void guiEngin::guiWinRender(u8 Index) {}
void guiEngin::ImageLoad() {}

#ifdef __cplusplus
}
#endif
#endif