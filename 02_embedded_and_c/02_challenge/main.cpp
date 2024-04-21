// コードを入力してください
#include "cabin_temperature.hpp"
#include "cpu_temperature.hpp"
#include "tire_pressure.hpp"

#include <iostream>


int main() {
    CPUTemperature cpuTemp;
    CabinTemperature cabinTemp;
    TirePressure tirePressure;

    // 温度値の読み取り
    std::cout << "CPU Temperature: " << cpuTemp.read().value << " K" << std::endl;
    std::cout << "Cabin Temperature: " << cabinTemp.read().value << " K" << std::endl;

    // 気圧値の読み取り
    std::cout << "Tire Pressure: " << tirePressure.read().value << " psi" << std::endl;

    return 0;
}