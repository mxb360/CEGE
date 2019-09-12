
#include <graphics.h>

int main()
{
    initgraph(640, 480);

    setfont(18, 0, "кнлЕ");
    //settextjustify(LEFT_TEXT, TOP_TEXT); //д╛хож╣
    outtext("Hello, world");
    outtext("hhhhh");

    getch();

    closegraph();
    return 0;
}