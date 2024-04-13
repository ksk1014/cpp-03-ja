#include <chrono>
#include <iostream>

// コードを入力してください

class Timer {
    
public:
    Timer();
    ~Timer();
    // Timer(const std::string& name); // Declare the constructor
    // ~Timer(); // Declare the destructor
    
private:
    using clock = std::chrono::high_resolution_clock;
    using ms = std::chrono::milliseconds;
    using time_point = std::chrono::time_point<clock>;

    time_point start;
    std::string name;

};
