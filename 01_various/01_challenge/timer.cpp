// コードを入力してください
#include "timer.hpp"
#include <iostream>

Timer::Timer() :  start(clock::now()) {
        // std::cout << name << "start" << std::endl;
    }

Timer::~Timer(){
        auto end = clock::now();
        auto duration = std::chrono::duration_cast<ms>(end - start).count();
        std::cout << name << " took " << duration << " milliseconds." << std::endl;
}

