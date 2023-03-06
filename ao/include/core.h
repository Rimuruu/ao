#include <iostream>
#include <SDL.h>
#include "window.h"
#include "windowSDL.h"
namespace ao {
    class core {
        ao::window* screen;
    public:
        core();
        virtual int init();
        virtual int update();
        virtual int exit();
    };



}