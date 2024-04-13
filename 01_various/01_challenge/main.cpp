// コードを入力してください
#include "timer.hpp"
#include <thread>


int main(){


    std::string name = "timer";
    Timer timer(name);

    std::this_thread::sleep_for(std::chrono::seconds(1));

    return 0;
}