 #include "core.h"
 
 
 
 ao::core::core(){
     this->screen = new windowSDL();
        }


 int ao::core::init() {
     if (this->screen->init()) {
         return -1;
     }
     return 0;
 
 }


 int ao::core::update() {
     std::cout << "update core" << std::endl;
     while (true) {

     }
         return 0;
 }


 int ao::core::exit() {
     screen->exit();
     std::cout << "exit core" << std::endl;
     return 0;
 }