/* 第 0 课示例: 图形版 Hello World (EasyX) */
#include <graphics.h>
#include <stdio.h>

int main(void)
{
    initgraph(400, 300);        /* 开一个 400x300 的窗口 */
    cleardevice();              /* 用背景色清屏 */
    setfillcolor(RED);          /* 设填充色为红 */
    solidcircle(200, 150, 80);  /* 在 (200,150) 画实心圆, 半径 80 */
    settextstyle(24, 0, NULL);  /* 设置文字大小 */
    outtextxy(120, 40, "我的第一个图形程序!");  /* 在 (120,40) 写字 */
    delay(3000);                /* 暂停 3 秒让你看到画面 */
    closegraph();               /* 关窗口 */
    return 0;
}
