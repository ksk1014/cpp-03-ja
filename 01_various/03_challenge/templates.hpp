// コードを入力してください

template<typename... Args>
bool allTrue(Args... args){
    if(sizeof(args) == 0){
        return true;
    }else{
        return (args && ...);
    }
}
