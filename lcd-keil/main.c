#include <reg52.h>
#include "LCD1602.h"

void main()
{
    unsigned char i;

    //初始化lcd屏幕
    LCD_Init();

	//动画循环四次，每次为嘴巴一张一闭，最后用时为两秒
    for(i = 0; i < 4; i++)
    {
        //闭嘴
        //LCD_ShowString：行号, 列号, 字符串
        LCD_ShowString(1, 4, "( ^ _ ^ )");
        Delay_ms(250); 
        
        //张嘴
        LCD_ShowString(1, 4, "( ^ O ^ )");
        Delay_ms(250); 
    }

    //动画结束,显示感谢语字符串
    LCD_ShowString(1, 2, "TKS FOR WATCHING!");

    //空循环将程序挂起
    while(1)
    {
        ;
    }
}