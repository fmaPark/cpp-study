#include <iostream>

int change_val(int *p) {
    *p = 3;

    return 0;
}

int change_val(int &p) {
    // 함수의 인자로 참조자를 받게 함
    // int& p = number
    
    p = 3;

    return 0;
}

int main() {
    int number = 5;

    // 포인터를 활용한 변수 접근
    std::cout << number << std::endl;
    change_val(&number);
    std::cout << number << std::endl;

    // C언어에서는 어떠한 변수를 가리키고 싶을 땐 반드시 포인터를 사용해야 했음.
    // C++에서는 다른 변수나 상수를 가리키는 방법으로 또 다른 방식을 제공하는데, 이를 참조자(레퍼런스)라고 함.

    int a = 3; 
    int& another_a = a; //a의 참조자 another_a 정의 = another_a는 a의 또다른 이름이다
    // 참조자 정의 방법 : 가리키고자 하는 타입 뒤에 & 붙이기
    // int*와 같은 포인터 타입의 참조자: int*&
    // another_a에 어떠한 작업을 수행하든 사실상 a에 작업을 하는 것과 같음
    // 정의 시에 반드시 누구의 별명인지 명시해야 함

    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;

    int b = 3;
    another_a = b; // a에 b를 대입, a = b와 동치
    // 포인터는 메모리 상에서 8바이트를 차지하지만, 레퍼런스는 메모리 상에 존재하지 않을 수 있음
    // 존재하는 경우도 있음 : 함수 인자로 레퍼런스를 받는 경우

    std::cout << number << std::endl;
    change_val(number); // 참조자 p는 number의 새로운 별명
    std::cout << number << std::endl;
}