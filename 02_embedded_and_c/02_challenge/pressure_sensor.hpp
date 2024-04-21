// コードを入力してください
#include "units.hpp"

class PressureSensor {
public:
    virtual ~PressureSensor() {}
    virtual pressure::psi read() const = 0;
};