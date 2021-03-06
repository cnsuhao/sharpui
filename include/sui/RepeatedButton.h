// 华勤科技版权所有 2010-2011
// 
// 文件名：RepeatedButton.h
// 功  能：实现频率按钮，支持三态切换。
// 
// 作  者：汪荣
// 时  间：2010-07-02
// 
// ============================================================================

# ifndef _UIREPEATEDBUTTON_H_
# define _UIREPEATEDBUTTON_H_

#include <sui/sharpuiconfig.h>
#include <sui/Button.h>

namespace ui
{

class SHARPUI_API RepeatedButton : public Button
{
public:

    RepeatedButton();
    virtual ~RepeatedButton();

    DeclareTypeofInfo(RepeatedButton, Button)

    // 鼠标左键压下时的延迟时间
    void SetDelay(int iDelay);

    // 发送click事件的间隔事件
    void SetInterval(int iInterval);

public:

    virtual void OnInitialized();
    virtual void OnUnloaded(suic::LoadedEventArg& e);

    virtual void OnRender(suic::DrawingContext * drawing);

    virtual void OnMouseLeftButtonDown(suic::MouseEventArg& e);
    virtual void OnMouseLeftButtonUp(suic::MouseEventArg& e);
    virtual void OnMouseEnter(suic::MouseEventArg& e);
    virtual void OnMouseLeave(suic::MouseEventArg& e);
    virtual void OnClick(suic::RoutedEventArg& e);

    virtual void OnTimer(int id);

    virtual void OnRepeated(bool bMouseIn);

protected:

    // 重复频率，毫秒
    int _iDelay;
    int _iInterval;
    suic::Int32 _iTimer300;
    suic::Int32 _iTimer301;

};

}

# endif
