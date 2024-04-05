// コードを入力してください

class unique_int_ptr {
public:
    unique_int_ptr(int number);
    ~unique_int_ptr( );

    int* get();
    int* release();
    int& operator*();

private:
    int* number_ptr;
};

template<typename T>
class unique_ptr {
public:
    unique_ptr(T input):
    input_ptr(new T( input )){};
    ~unique_ptr( ){
        delete input_ptr;
    };

    T* get(){
        return input_ptr;
    };
    T* release(){
        T* released_ptr = input_ptr;
        input_ptr = nullptr;
        return released_ptr;
    };

    T& operator*(){
        return *input_ptr;
    };

private:
    T* input_ptr;
};
