/* 第 1 课示例: 变量指挥图形 */
#include <graphics.h>

int main(void)
{
    initgraph(400, 300);
    cleardevice();

    int cx = 200, cy = 150;      /* 圆心坐标 */
    int radius = 80;             /* 半径 */
    int ring = 5;                /* 圆的数量 */
    int gap = 15;                /* 每个圆缩小的量 */

    for (int i = 0; i < ring; i++) {                /* 循环: i 从 0 到 ring-1 */
        solidcircle(cx, cy, radius - i * gap);      /* 半径逐个减小 */
    }

    delay(3000);
    closegraph();
    return 0;
}
