#include "kmbox.h"

#include "kmboxNet/kmboxNet.h"

int kmbox::init(char *ip, char *port, char *mac) {
    return kmNet_init(ip, port, mac);
}

int kmbox::mouse_move(short x, short y) {
    return kmNet_mouse_move(x, y);
}

int kmbox::mouse_left(int isdown) {
    return kmNet_mouse_left(isdown);
}

int kmbox::mouse_right(int isdown) {
    return kmNet_mouse_right(isdown);
}

int kmbox::mouse_middle(int isdown) {
    return kmNet_mouse_middle(isdown);
}

int kmbox::mouse_wheel(int wheel) {
    return kmNet_mouse_wheel(wheel);
}

int kmbox::mouse_side1(int isdown) {
    return kmNet_mouse_side1(isdown);
}

int kmbox::mouse_side2(int isdown) {
    return kmNet_mouse_side2(isdown);
}

int kmbox::mouse_all(int button, int x, int y, int wheel) {
    return kmNet_mouse_all(button, x, y, wheel);
}

int kmbox::mouse_move_auto(int x, int y, int time_ms) {
    return kmNet_mouse_move_auto(x, y, time_ms);
}

int kmbox::mouse_move_beizer(int x, int y, int ms, int x1, int y1, int x2, int y2) {
    return kmNet_mouse_move_beizer(x, y, ms, x1, y1, x2, y2);
}

int kmbox::keydown(int vkey) {
    return kmNet_keydown(vkey);
}

int kmbox::keyup(int vkey) {
    return kmNet_keyup(vkey);
}

int kmbox::keypress(int vk_key, int ms) {
    return kmNet_keypress(vk_key, ms);
}

int kmbox::monitor(short port) {
    return kmNet_monitor(port);
}

int kmbox::monitor_mouse_left() {
    return kmNet_monitor_mouse_left();
}

int kmbox::monitor_mouse_middle() {
    return kmNet_monitor_mouse_middle();
}

int kmbox::monitor_mouse_right() {
    return kmNet_monitor_mouse_right();
}

int kmbox::monitor_mouse_side1() {
    return kmNet_monitor_mouse_side1();
}

int kmbox::monitor_mouse_side2() {
    return kmNet_monitor_mouse_side2();
}

int kmbox::monitor_mouse_xy(int *x, int *y) {
    return kmNet_monitor_mouse_xy(x, y);
}

int kmbox::monitor_mouse_wheel(int *wheel) {
    return kmNet_monitor_mouse_wheel(wheel);
}

int kmbox::monitor_keyboard(short vk_key) {
    return kmNet_monitor_keyboard(vk_key);
}

int kmbox::mask_mouse_left(int enable) {
    return kmNet_mask_mouse_left(enable);
}

int kmbox::mask_mouse_right(int enable) {
    return kmNet_mask_mouse_right(enable);
}

int kmbox::mask_mouse_middle(int enable) {
    return kmNet_mask_mouse_middle(enable);
}

int kmbox::mask_mouse_side1(int enable) {
    return kmNet_mask_mouse_side1(enable);
}

int kmbox::mask_mouse_side2(int enable) {
    return kmNet_mask_mouse_side2(enable);
}

int kmbox::mask_mouse_x(int enable) {
    return kmNet_mask_mouse_x(enable);
}

int kmbox::mask_mouse_y(int enable) {
    return kmNet_mask_mouse_y(enable);
}

int kmbox::mask_mouse_wheel(int enable) {
    return kmNet_mask_mouse_wheel(enable);
}

int kmbox::mask_keyboard(short vkey) {
    return kmNet_mask_keyboard(vkey);
}

int kmbox::unmask_keyboard(short vkey) {
    return kmNet_unmask_keyboard(vkey);
}

int kmbox::unmask_all() {
    return kmNet_unmask_all();
}

int kmbox::enc::keydown(int vkey) {
    return kmNet_enc_keydown(vkey);
}

int kmbox::enc::keyup(int vkey) {
    return kmNet_enc_keyup(vkey);
}

int kmbox::enc::keypress(int vk_key, int ms) {
    return kmNet_enc_keypress(vk_key, ms);
}

int kmbox::enc::mouse_move(short x, short y) {
    return kmNet_enc_mouse_move(x, y);
}

int kmbox::enc::mouse_left(int isdown) {
    return kmNet_enc_mouse_left(isdown);
}

int kmbox::enc::mouse_right(int isdown) {
    return kmNet_enc_mouse_right(isdown);
}

int kmbox::enc::mouse_middle(int isdown) {
    return kmNet_enc_mouse_middle(isdown);
}

int kmbox::enc::mouse_wheel(int wheel) {
    return kmNet_enc_mouse_wheel(wheel);
}

int kmbox::enc::mouse_side1(int isdown) {
    return kmNet_enc_mouse_side1(isdown);
}

int kmbox::enc::mouse_side2(int isdown) {
    return kmNet_enc_mouse_side2(isdown);
}

int kmbox::enc::mouse_all(int button, int x, int y, int wheel) {
    return kmNet_enc_mouse_all(button, x, y, wheel);
}

int kmbox::enc::mouse_move_auto(int x, int y, int time_ms) {
    return kmNet_enc_mouse_move_auto(x, y, time_ms);
}

int kmbox::enc::mouse_move_beizer(int x, int y, int ms, int x1, int y1, int x2, int y2) {
    return kmNet_enc_mouse_move_beizer(x, y, ms, x1, y1, x2, y2);
}

int kmbox::reboot() {
    return kmNet_reboot();
}

int kmbox::setconfig(char *ip, unsigned short port) {
    return kmNet_setconfig(ip, port);
}

int kmbox::setvidpid(unsigned short vid, unsigned short pid) {
    return kmNet_setvidpid(vid, pid);
}

int kmbox::lcd_color(unsigned short rgb565) {
    return kmNet_lcd_color(rgb565);
}

int kmbox::lcd_picture_bottom(unsigned char *buff_128_80) {
    return kmNet_lcd_picture_bottom(buff_128_80);
}

int kmbox::lcd_picture(unsigned char *buff_128_160) {
    return kmNet_lcd_picture(buff_128_160);
}
