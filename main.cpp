#include "lib.hpp"
#include <spdlog/spdlog.h>

int main ()
{   
//    spdlog:info("версия {} запущена успешно!", 32);
    spdlog::info ("версия {} запущена успешно!", version());                               

    return 0;
}
