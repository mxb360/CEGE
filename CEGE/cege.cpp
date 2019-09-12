#define SHOW_CONSOLE

#include "ege.h"
#include <cstdarg>
#include <cstdio>

#define  __CEGE_EGE__
#include "cege.h"


void cege_initgraph(int w, int h, int flag)
{
    ege::initgraph(w, h, flag);
    ege::setcaption("CEGE - EGE For C");
}

int cege_is_run(void)
{
    return ege::is_run();
}

void cege_setcaption(const char *caption)
{
    ege::setcaption(caption);
}

void cege_setinitmode(int mode, int x, int y)
{
    ege::setinitmode(mode, x, y);
}

void cege_arc(int x, int y, int stangle, int endangle, int radius, PIMAGE pimg)
{
    ege::arc(x, y, stangle, endangle, radius, (ege::PIMAGE)pimg);
}

void cege_bar(int left, int top, int right, int bottom, PIMAGE pimg)
{
    ege::bar(left, top, right, bottom, (ege::PIMAGE)pimg);
}

void cege_bar3d(int left, int top, int right, int bottom, int depth, int topflag, PIMAGE pimg)
{
    ege::bar3d(left, top, right, bottom, depth, topflag, (ege::PIMAGE)pimg);
}

void cege_circle(int x, int y, int radius, PIMAGE pimg)
{
    ege::circle(x, y, radius, (ege::PIMAGE)pimg);
}

void cege_drawbezier(int numpoints, const int * polypoints, PIMAGE pimg)
{
    ege::drawbezier(numpoints, polypoints, (ege::PIMAGE)pimg);
}

void cege_drawlines(int numliness, const int * polypoints, PIMAGE pimg)
{
    ege::drawlines(numliness, polypoints, (ege::PIMAGE)pimg);
}

void cege_drawpoly(int numliness, const int * polypoints, PIMAGE pimg)
{
    ege::drawpoly(numliness, polypoints, (ege::PIMAGE)pimg);
}

void cege_ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius, PIMAGE pimg)
{
    ege::ellipse(x, y, stangle, endangle, xradius, yradius, (ege::PIMAGE)pimg);
}

void cege_fillpoly(int numpoints, const int * polypoints, PIMAGE pimg)
{
    ege::fillpoly(numpoints, polypoints, (ege::PIMAGE)pimg);
}

void cege_floodfill(int x, int y, int border, PIMAGE pimg)
{
    ege::floodfill(x, y, border, (ege::PIMAGE)pimg);
}

void cege_floodfillsurface(int x, int y, color_t areacolor, PIMAGE pimg)
{
    ege::floodfillsurface(x, y, areacolor, (ege::PIMAGE)pimg);
}

color_t cege_getfillcolor(PIMAGE pimg)
{
    return ege::getfillcolor((ege::PIMAGE)pimg);
}

color_t cege_hsl2rgb(float H, float S, float L)
{
    return ege::hsl2rgb(H, S, L);
}

color_t cege_hsv2rgb(float H, float S, float V)
{
    return ege::hsv2rgb(H, S, V);
}

color_t cege_rgb2gray(color_t rgb)
{
    return ege::rgb2gray(rgb);
}

void cege_rgb2hsl(color_t rgb, float *H, float *S, float *L)
{
    ege::rgb2hsl(rgb, H, S, L);
}

void cege_rgb2hsv(color_t rgb, float *H, float *S, float *V)
{
    ege::rgb2hsv(rgb, H, S, V);
}

void cege_setbkcolor(color_t color, PIMAGE pimg)
{
    ege::setbkcolor(color, (ege::PIMAGE)pimg);
}

void cege_setbkcolor_f(color_t color, PIMAGE pimg)
{
    ege::setbkcolor_f(color, (ege::PIMAGE)pimg);
}

void cege_setbkmode(int iBkMode, PIMAGE pimg)
{
    ege::setbkmode(iBkMode, (ege::PIMAGE)pimg);
}

void cege_setcolor(color_t color, PIMAGE pimg)
{
    ege::setcolor(color, (ege::PIMAGE)pimg);
}

int cege_getheight(PIMAGE pimg)
{
    return ege::getheight((ege::PIMAGE)pimg);
}

color_t cege_getpixel(int x, int y, PIMAGE pimg)
{
    return ege::getpixel(x, y, (ege::PIMAGE)pimg);
}

int cege_getwidth(PIMAGE pimg)
{
    return ege::getwidth((ege::PIMAGE)pimg);
}

int cege_getx(PIMAGE pimg)
{
    return ege::getx((ege::PIMAGE)pimg);
}

int cege_gety(PIMAGE pimg)
{
    return ege::gety((ege::PIMAGE)pimg);
}

void cege_line(int x1, int y1, int x2, int y2, PIMAGE pimg)
{
    ege::line(x1, y1, x2, y2, (ege::PIMAGE)pimg);
}

void cege_linerel(int dx, int dy, PIMAGE pimg)
{
    ege::linerel(dx, dy, (ege::PIMAGE)pimg);
}

void cege_lineto(int x, int y, PIMAGE pimg)
{
    ege::lineto(x, y, (ege::PIMAGE)pimg);
}

void cege_moverel(int dx, int dy, PIMAGE pimg)
{
    ege::moverel(dx, dy, (ege::PIMAGE)pimg);
}

void cege_moveto(int x, int y, PIMAGE pimg)
{
    ege::moveto(x, y, (ege::PIMAGE)pimg);
}

void cege_pieslice(int x, int y, int stangle, int endangle, int radius, PIMAGE pimg)
{
    ege::pieslice(x, y, stangle, endangle, radius, (ege::PIMAGE)pimg);
}

void cege_putpixel(int x, int y, color_t color, PIMAGE pimg)
{
    ege::putpixel(x, y, color, (ege::PIMAGE)pimg);
}

void cege_putpixels(int nPoint, int *pPoints, PIMAGE pimg)
{
    ege::putpixels(nPoint, pPoints, (ege::PIMAGE)pimg);
}

void cege_rectangle(int left, int top, int right, int bottom, PIMAGE pimg)
{
    ege::rectangle(left, top, right, bottom, (ege::PIMAGE)pimg);
}

void cege_sector(int x, int y, int stangle, int endangle, int xradius, int yradius, PIMAGE pimg)
{
    ege::sector(x, y, stangle, endangle, xradius, yradius, (ege::PIMAGE)pimg);
}

void cege_setfillcolor(color_t color, PIMAGE pimg)
{
    ege::setfillcolor(color, (ege::PIMAGE)pimg);
}

void cege_setfontbkcolor(color_t color, PIMAGE pimg)
{
    ege::setfontbkcolor(color, (ege::PIMAGE)pimg);
}

void cege_getfont(LOGFONT *font, PIMAGE pimg)
{
    ege::getfont(font, (ege::PIMAGE)pimg);
}

void cege_outtext(const char *textstring, PIMAGE pimg)
{
    ege::outtext(textstring, (ege::PIMAGE)pimg);
}

void cege_outtextrect(int x, int y, int w, int h, const char *textstring, PIMAGE pimg)
{
    ege::outtextrect(x, y, w, h, textstring, (ege::PIMAGE)pimg);
}

void cege_outtextxy(int x, int y, const char * textstring, PIMAGE pimg)
{
    ege::outtextxy(x, y, textstring, (ege::PIMAGE)pimg);
}

void cege_rectprintf(int x, int y, int w, int h, const char * textstring, ...)
{
    va_list ap;
    va_start(ap, textstring);
    char *p = new char[strlen(textstring)];
    vsprintf(p, textstring, ap);
    ege::rectprintf(x, y, w, h, p);
    va_end(ap);
    //delete[] p;
}

void cege_xyprintf(int x, int y, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    char *p = new char[strlen(fmt)];
    vsprintf(p, fmt, ap);
    ege::xyprintf(x, y, p);
    va_end(ap);
    //delete[] p;
}

void cege_setfont_all(int nHeight, int nWidth, const char *lpszFace, int nEscapement, int nOrientation,
             int nWeight, int bItalic, int bUnderline, int bStrikeOut, PIMAGE pimg)
{
    ege::setfont(nHeight, nWidth, lpszFace, nEscapement, nOrientation,
        nWeight, bItalic, bUnderline, bStrikeOut, (ege::PIMAGE)pimg);
}

void cege_setfont(int nHeight, int nWidth, LPCSTR lpszFace, PIMAGE pimg)
{
    ege::setfont(nHeight, nWidth, lpszFace, (ege::PIMAGE)pimg);
}

void cege_settextjustify(int horiz, int vert, PIMAGE pimg)
{
    ege::settextjustify(horiz, vert, (ege::PIMAGE)pimg);
}

int cege_textheight(const char * textstring, PIMAGE pimg)
{
    return ege::textheight(textstring, (ege::PIMAGE)pimg);
}

int cege_textwidth(const char * textstring, PIMAGE pimg)
{
    return ege::textwidth(textstring, (ege::PIMAGE)pimg);
}

PIMAGE cege_newimage(int width, int height)
{
    return (PIMAGE)ege::newimage(width, height);
}

void cege_delimage(PIMAGE pImg)
{
    ege::delimage((ege::PIMAGE)pImg);
}

void cege_getimage_from_pimage(PIMAGE pDstImg, const PIMAGE pSrcImg, int srcX, int srcY, int srcWidth, int srcHeight)
{
    if (pSrcImg == NULL)
        ege::getimage((ege::PIMAGE)pDstImg, srcX, srcY, srcWidth, srcHeight);
    else
        ege::getimage((ege::PIMAGE)pDstImg, (ege::PIMAGE)pSrcImg, srcX, srcY, srcWidth, srcHeight);
}

void cege_getimage(PIMAGE pDstImg, const char *pImgFile, int zoomWidth, int zoomHeight)
{
    ege::getimage((ege::PIMAGE)pDstImg, pImgFile, zoomWidth, zoomHeight);
}

int cege_imagefilter_blurring(PIMAGE imgdest, int intensity, int alpha, int nXOriginDest, int nYOriginDest, int nWidthDest, int nHeightDest)
{
    ege::imagefilter_blurring((ege::PIMAGE)imgdest, intensity, alpha, nXOriginDest, nYOriginDest, nWidthDest, nHeightDest);
    return 0;
}

void cege_putimage(PIMAGE pDstImg, int dstX, int dstY, int dstWidth, int dstHeight, PIMAGE pSrcImg, int srcX, int srcY, int srcWidth, int srcHeight, DWORD dwRop)
{
    ege::putimage((ege::PIMAGE)pDstImg, dstX, dstY, dstWidth, dstHeight, (ege::PIMAGE)pSrcImg, srcX, srcY, srcWidth, srcHeight, dwRop);
}

int cege_putimage_alphablend(PIMAGE imgdest, PIMAGE imgsrc, int nXOriginDest, int nYOriginDest, unsigned char alpha, int nXOriginSrc, int nYOriginSrc, int nWidthSrc, int nHeightSrc)
{
    return ege::putimage_alphablend((ege::PIMAGE)imgdest, (ege::PIMAGE)imgsrc, nXOriginDest, nYOriginDest, alpha, nXOriginSrc, nYOriginSrc, nWidthSrc, nHeightSrc);
}

int cege_putimage_transparent(PIMAGE imgdest, PIMAGE imgsrc, int nXOriginDest, int nYOriginDest, color_t crTransparent, int nXOriginSrc, int nYOriginSrc, int nWidthSrc, int nHeightSrc)
{
    return ege::putimage_transparent((ege::PIMAGE)imgdest, (ege::PIMAGE)imgsrc, nXOriginDest, nYOriginDest, crTransparent, nXOriginSrc, nYOriginSrc, nWidthSrc, nHeightSrc);

}

int cege_putimage_alphatransparent(PIMAGE imgdest, PIMAGE imgsrc, int nXOriginDest, int nYOriginDest, color_t crTransparent, unsigned char alpha, int nXOriginSrc, int nYOriginSrc, int nWidthSrc, int nHeightSrc)
{
    return ege::putimage_alphatransparent((ege::PIMAGE)imgdest, (ege::PIMAGE)imgsrc, nXOriginDest, nYOriginDest, crTransparent, alpha, nXOriginSrc, nYOriginSrc, nWidthSrc, nHeightSrc);
}


void cege_setlinestyle(int linestyle, WORD upattern, int thickness, PIMAGE pimg)
{
    ege::setlinestyle(linestyle, upattern, thickness, (ege::PIMAGE)pimg);
}

void cege_setlinewidth(float thickness, PIMAGE pimg)
{
    ege::setlinewidth(thickness, (ege::PIMAGE)pimg);
}

void cege_setwritemode(int mode, PIMAGE pimg)
{
    ege::setwritemode(mode, (ege::PIMAGE)pimg);
}

color_t cege_getbkcolor(PIMAGE pimg)
{
    return ege::getbkcolor((ege::PIMAGE)pimg);
}

color_t cege_getcolor(PIMAGE pimg)
{
    return ege::getcolor((ege::PIMAGE)pimg);
}

void cege_setrendermode(rendermode_e mode)
{
    ege::setrendermode((ege::rendermode_e)mode);
}

void cege_settarget(PIMAGE pbuf)
{
    ege::settarget((ege::PIMAGE)pbuf);
}


void cege_window_getviewport(int *pleft, int *ptop, int *pright, int *pbottom)
{
    ege::window_getviewport(pleft, ptop, pright, pbottom);
}

void cege_window_setviewport(int left, int top, int right, int bottom)
{
    ege::window_setviewport(left, top, right, bottom);
}

void cege_closegraph(void)
{
    ege::closegraph();
}

PIMAGE cege_gettarget(void)
{
    return (PIMAGE)ege::gettarget();
}

void cege_getviewport(int *pleft, int *ptop, int *pright, int *pbottom, int *pclip, PIMAGE pimg)
{
    ege::getviewport(pleft, ptop, pright, pbottom, pclip, (ege::PIMAGE)pimg);
}

void cege_setviewport(int left, int top, int right, int bottom, int clip, PIMAGE pimg)
{
    ege::setviewport(left, top, right, bottom, clip, (ege::PIMAGE)pimg);
}

int cege_getch(void)
{
    return ege::getch();
}

key_msg cege_getkey(void)
{
    return *(key_msg *)&ege::getkey();
}

mouse_msg cege_getmouse(void)
{
    return *(mouse_msg *)&ege::getmouse();
}

int cege_kbhit(void)
{
    return ege::kbhit();
}

int cege_kbmsg(void)
{
    return ege::kbmsg();
}

int cege_keystate(int key)
{
    return ege::keystate(key);
}

int cege_mousemsg(void)
{
    return ege::mousemsg();
}

void cege_flushmouse(void)
{
    ege::flushmouse();
}

int cege_mousepos(int * x, int * y)
{
    return ege::mousepos(x, y);
}

int cege_showmouse(int bShow)
{
    return ege::showmouse(bShow);
}

void cege_api_sleep(long dwMilliseconds)
{
    ege::api_sleep(dwMilliseconds);
}

void cege_delay(long Milliseconds)
{
    ege::delay(Milliseconds);
}

void cege_delay_ms(long Milliseconds)
{
    ege::delay_ms(Milliseconds);
}

void cege_delay_fps(double fps)
{
    ege::delay_fps(fps);
}

void cege_delay_jfps(double fps)
{
    ege::delay_jfps(fps);
}

double cege_fclock(void)
{
    return ege::fclock();
}

unsigned int cege_random(unsigned int n)
{
    return ege::random(n);
}

double cege_randomf(void)
{
    return ege::randomf();
}

void cege_randomize(void)
{
    ege::randomize();
}

int cege_inputbox_getline(const char *title, const char *text, char *buf, int len)
{
    return ege::inputbox_getline(title, text, buf, len);
}

MUSIC cege_MUSIC_New(void)
{
    return (MUSIC)new ege::MUSIC;
}

void cege_MUSIC_Delete(MUSIC music)
{
    delete (ege::MUSIC *)music;
}

int cege_MUSIC_IsOpen(MUSIC music)
{
    return ((ege::MUSIC *)music)->IsOpen();
}

int cege_MUSIC_OpenFile(MUSIC music, const char * filepath)
{
    return ((ege::MUSIC *)music)->OpenFile(filepath);
}

int cege_MUSIC_Play(MUSIC music, int dwFrom, int dwTo)
{
    return ((ege::MUSIC *)music)->Play(dwFrom, dwTo);
}

int cege_MUSIC_Pause(MUSIC music)
{
    return ((ege::MUSIC *)music)->Pause();
}

int cege_MUSIC_Seek(MUSIC music, int dwTo)
{
    return ((ege::MUSIC *)music)->Seek(dwTo);
}

int cege_MUSIC_SetVolume(MUSIC music, float value)
{
    return ((ege::MUSIC *)music)->SetVolume(value);
}

int cege_MUSIC_Close(MUSIC music)
{
    return ((ege::MUSIC *)music)->Close();
}

int cege_MUSIC_Stop(MUSIC music)
{
    return ((ege::MUSIC *)music)->Stop();
}

unsigned long cege_MUSIC_GetPosition(MUSIC music)
{
    return ((ege::MUSIC *)music)->GetPosition();
}

unsigned long cege_MUSIC_GetLength(MUSIC music)
{
    return ((ege::MUSIC *)music)->GetLength();
}

float cege_getfps(void)
{
    return ege::getfps();
}

void cege_cleardevice(PIMAGE pimg)
{
    ege::cleardevice((ege::PIMAGE)pimg);
}

void cege_clearviewport(PIMAGE pimg)
{
    ege::clearviewport((ege::PIMAGE)pimg);
}

void cege_ege_enable_aa(int enable, PIMAGE pimg)
{
    ege::ege_enable_aa(enable, (ege::PIMAGE)pimg);
}

void cege_ege_line(float x1, float y1, float x2, float y2, PIMAGE pimg)
{
    ege::ege_line(x1, y1, x2, y2, (ege::PIMAGE)pimg);
}

void cege_ege_drawpoly(int numpoints, ege_point *polypoints, PIMAGE pimg)
{
    ege::ege_drawpoly(numpoints, (ege::ege_point *)polypoints, (ege::PIMAGE)pimg);
}

void cege_ege_drawcurve(int numpoints, ege_point* polypoints, PIMAGE pimg)
{
    ege::ege_drawcurve(numpoints, (ege::ege_point *)polypoints, (ege::PIMAGE)pimg);
}

void cege_ege_rectangle(float x, float y, float w, float h, PIMAGE pimg)
{
    ege::ege_rectangle(x, y, w, h, (ege::PIMAGE)pimg);
}

void cege_ege_ellipse(float x, float y, float w, float h, PIMAGE pimg)
{
    ege::ege_ellipse(x, y, w, h, (ege::PIMAGE)pimg);
}

void cege_ege_pie(float x, float y, float w, float h, float stangle, float sweepAngle, PIMAGE pimg)
{
    ege::ege_pie(x, y, w, h, stangle, sweepAngle, (ege::PIMAGE)pimg);
}

void cege_ege_arc(float x, float y, float w, float h, float stangle, float sweepAngle, PIMAGE pimg)
{
    ege::ege_arc(x, y, w, h, stangle, sweepAngle, (ege::PIMAGE)pimg);
}

void cege_ege_bezier(int numpoints, ege_point* polypoints, PIMAGE pimg)
{
    ege::ege_bezier(numpoints, (ege::ege_point *)polypoints, (ege::PIMAGE)pimg);
}

void cege_ege_fillpoly(int numpoints, ege_point* polypoints, PIMAGE pimg)
{
    ege::ege_fillpoly(numpoints, (ege::ege_point *)polypoints, (ege::PIMAGE)pimg);
}

void cege_ege_fillrect(float x, float y, float w, float h, PIMAGE pimg)
{
    ege::ege_fillrect(x, y, w, h, (ege::PIMAGE)pimg);
}

void cege_ege_fillellipse(float x, float y, float w, float h, PIMAGE pimg)
{
    ege::ege_fillellipse(x, y, w, h, (ege::PIMAGE)pimg);
}
void cege_ege_fillpie(float x, float y, float w, float h, float stangle, float sweepAngle, PIMAGE pimg)
{
    ege::ege_fillpie(x, y, w, h, stangle, sweepAngle, (ege::PIMAGE)pimg);
}

void cege_ege_setpattern_none(PIMAGE pimg)
{
    ege::ege_setpattern_none((ege::PIMAGE)pimg);
}

void cege_ege_setpattern_lineargradient(float x1, float y1, color_t c1, float x2, float y2, color_t c2, PIMAGE pimg)
{
    ege::ege_setpattern_lineargradient(x1, y1, c1, x2, y2, c2, (ege::PIMAGE)pimg);
}

void cege_ege_setpattern_pathgradient(ege_point center, color_t centercolor, int count, ege_point* points, int colcount, color_t* pointscolor, PIMAGE pimg)
{
    ege::ege_setpattern_pathgradient(*(ege::ege_point *)&center, centercolor, count, (ege::ege_point *)points, colcount, pointscolor, (ege::PIMAGE)pimg);
}

void cege_ege_setpattern_ellipsegradient(ege_point center, color_t centercolor, float x, float y, float w, float h, color_t color, PIMAGE pimg)
{
    ege::ege_setpattern_ellipsegradient(*(ege::ege_point *)&center, centercolor, x, y, w, h, color, (ege::PIMAGE)pimg);
}

void cege_ege_setpattern_texture(PIMAGE srcimg, float x, float y, float w, float h, PIMAGE pimg)
{
    ege::ege_setpattern_texture((ege::PIMAGE)srcimg, x, y, w, h, (ege::PIMAGE)pimg);
}

void cege_ege_setalpha(int alpha, PIMAGE pimg)
{
    ege::ege_setalpha(alpha, (ege::PIMAGE)pimg);
}

void cege_ege_gentexture(int gen, PIMAGE pimg)
{
    ege::ege_gentexture(gen, (ege::PIMAGE)pimg);
}

void cege_ege_puttexture(PIMAGE srcimg, ege_rect dest, ege_rect src, PIMAGE pimg)
{
    ege::ege_puttexture((ege::PIMAGE)srcimg, *(ege::ege_rect *)&dest, *(ege::ege_rect *)&src, (ege::PIMAGE)pimg);
}
