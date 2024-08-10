# Kmbox Library

The Kmbox Library is a C++ library designed to provide various functionalities for interacting with a kmbox device. This includes mouse and keyboard event handling, monitoring, masking, and other utility functions.

## Installation

To include the Kmbox Library in your project, use CMake's `FetchContent_Declare` feature:

```cmake
include(FetchContent)

FetchContent_Declare(Kmbox
GIT_REPOSITORY https://github.com/pm-dennis/Kmbox-Lib.git
GIT_TAG 1.0.0)
FetchContent_MakeAvailable(Kmbox)
```

## Usage

Include the necessary headers in your source files and link against the `Kmbox` library in your `CMakeLists.txt`:

```c++
#include "kmboxNet.h"
#include "library.h"
```

```cmake
target_link_libraries(YourTarget PRIVATE Kmbox)
```

## Example

Here is an example of how to use the Kmbox Library in your project:

```c++
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
```
