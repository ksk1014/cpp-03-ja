// コードを入力してください

template<typename T, typename... Args>
T sum(const T& first, Args... args){
    return sum(first, args...);
}
