// コードを入力してください
#include "units.hpp"
#include "pressure_sensor.hpp"
class TirePressure : public PressureSensor {
public:
    pressure::psi read() const override;
};
