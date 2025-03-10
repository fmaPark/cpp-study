#include <iostream>

// 포인터 쓰레기값 예시
int main() {
    int* p;

    std::cout << p << std::endl; //0x104eb9b90
    std::cout << *p << std::endl; //95290216 - grabage value

    int i = 5;
    p = &i;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
}