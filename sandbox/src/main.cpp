#include "core.h"




int main(int argv, char** args) {
    ao::core engine = ao::core();
    engine.init();
    engine.update();
    return 0;
}