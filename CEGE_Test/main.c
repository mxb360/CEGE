
#include <graphics.h>

int main()
{
    initgraph(640, 480);

    setfont(18, 0, "����");
    //settextjustify(LEFT_TEXT, TOP_TEXT); //Ĭ��ֵ
    outtext("Hello, world");
    outtext("hhhhh");

    getch();

    closegraph();
    return 0;
}