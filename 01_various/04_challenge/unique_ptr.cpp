#include "unique_ptr.hpp"

unique_int_ptr::unique_int_ptr(int number) : 
    number_ptr(new int(number))
    {
    // this->number_ptr = new int;
    // *this->number_ptr =number;
    }

unique_int_ptr::~unique_int_ptr( ){
    delete this->number_ptr;
};

int* unique_int_ptr::get(){
    return number_ptr;
    };

int* unique_int_ptr::release(){
        int* released_ptr = number_ptr;
        number_ptr = nullptr;
        return released_ptr;
    };

int& unique_int_ptr::operator*(){
    return *number_ptr;
};


