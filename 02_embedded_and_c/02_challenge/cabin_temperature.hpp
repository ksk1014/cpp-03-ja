// コードを入力してください
#include "temperature_sensor.hpp"

class CabinTemperature : public TemperatureSensor {
public:
    temperature::kelvin read() const override;
};
