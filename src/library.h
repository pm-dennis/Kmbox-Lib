#ifndef KMBOX_LIBRARY_H
#define KMBOX_LIBRARY_H

namespace kmbox {
    int init(char* ip, char* port, char* mac);
    int mouse_move(short x, short y);
    int mouse_left(int isdown);
    int mouse_right(int isdown);
    int mouse_middle(int isdown);
    int mouse_wheel(int wheel);
    int mouse_side1(int isdown);
    int mouse_side2(int isdown);
    int mouse_all(int button, int x, int y, int wheel);
    int mouse_move_auto(int x, int y, int time_ms);
    int mouse_move_beizer(int x, int y, int ms, int x1, int y1, int x2, int y2);

    int keydown(int vkey);
    int keyup(int vkey);
    int keypress(int vk_key, int ms =10);

    int monitor(short port);
    int monitor_mouse_left();
    int monitor_mouse_middle();
    int monitor_mouse_right();
    int monitor_mouse_side1();
    int monitor_mouse_side2();
    int monitor_mouse_xy(int* x, int* y);
    int monitor_mouse_wheel(int* wheel);
    int monitor_keyboard(short  vk_key);

    int mask_mouse_left(int enable);
    int mask_mouse_right(int enable);
    int mask_mouse_middle(int enable);
    int mask_mouse_side1(int enable);
    int mask_mouse_side2(int enable);
    int mask_mouse_x(int enable);
    int mask_mouse_y(int enable);
    int mask_mouse_wheel(int enable);
    int mask_keyboard(short vkey);
    int unmask_keyboard(short vkey);
    int unmask_all();

    namespace enc {
        int keydown(int vkey);
        int keyup(int vkey);
        int keypress(int vk_key, int ms = 10);

        int mouse_move(short x, short y);
        int mouse_left(int isdown);
        int mouse_right(int isdown);
        int mouse_middle(int isdown);
        int mouse_wheel(int wheel);
        int mouse_side1(int isdown);
        int mouse_side2(int isdown);
        int mouse_all(int button, int x, int y, int wheel);
        int mouse_move_auto(int x, int y, int time_ms);
        int mouse_move_beizer(int x, int y, int ms, int x1, int y1, int x2, int y2);
    }

    int reboot();
    int setconfig(char* ip, unsigned short port);
    int setvidpid(unsigned short vid,unsigned short pid);
    // int debug(short port, char enable);
    int lcd_color(unsigned short rgb565);
    int lcd_picture_bottom(unsigned char* buff_128_80);
    int lcd_picture(unsigned char* buff_128_160);
}

#endif //KMBOX_LIBRARY_H
