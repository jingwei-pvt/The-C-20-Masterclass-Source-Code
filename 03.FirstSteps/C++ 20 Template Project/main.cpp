#include <iostream>

consteval int get_value(){
    return 3;
}

int main(){
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;
    return 0;
}
//core features: int main(){... }, which is the rule of Cpp
//standard library: like iostream
//STL: Standard Templete Library of C++ 