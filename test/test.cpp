#include "library.h"

// Change these values to match your kmbox
#define KMBOX_IP "192.168.2.188"
#define KMBOX_PORT "9346"
#define KMBOX_MAC "A7AA5054"

int main(int argc, char *argv[])
{
    kmbox::init(KMBOX_IP, KMBOX_PORT, KMBOX_MAC);

    kmbox::mouse_move_beizer(50, 50, 100, 0, 0, 50, 0);
    kmbox::mouse_move_beizer(-50, 50, 100, 0, 0, 0, 50);
    kmbox::mouse_move_beizer(-50, -50, 100, 0, 0, -50, 0);
    kmbox::mouse_move_beizer(50, -50, 100, 0, 0, 0, -50);

    return 0;
}
