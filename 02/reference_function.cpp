#include <iostream>

int function() {
    int a = 2;
    return a;
}

int& function_ref_x() {
    int a = 2;
    return a;
}

int& function_ref(int& a) {
    a = 5;
    return a;
}

int main() {
    int b = function();
    // function안에 정의된 a라는 값이 b에 복사됨
    // -> function이 종료되고 나면 a는 메모리에서 사라짐

    int b2 = function_ref_x();
    b2 = 3; //컴파일 오류 발생
    // function_ref_x에서 참조자를 리턴했지만 참조하고 있던 변수가 사라졌기 때문
    // -> 댕글링 레퍼런스

    int b3 = 2;
    int c = function_ref(b3); //실행 시점에서 a는 main의 b를 참조하고 있게 됨
    // 따라서 function_ref가 리턴한 참조자는 아직 살아있는 변수인 b를 계속 참조
    // -> 그냥 c에 현재의 b값인 5를 대입한 것과 동일한 문장

    // 참조자 리턴의 장점
    // : C언어에서 엄청나게 큰 구조체가 있을 때 해당 구조체 변수를 그냥 리턴하면 전체 복사가 발생해서 시간이 오래 걸림
    // but 해당 구조체를 가리키는 포인터를 리턴한다면 그냥 포인터 주소 한 번 복사로 매우 빠르게 끝남
    // : 마찬가지로, 레퍼런스를 리턴하게 되면 레퍼런스가 참조하는 타입의 크기와 상관 없이 딱 한 번의 주소값 복사로 전달이 끝남
    // -> 매우 효율적!

    // 함수가 값을 리턴하는데 참조자로 받는 경우
    const int &d = function();
    // 원래는 댕글링 레퍼런스가 발생해야 하지만, 상수(const) 레퍼런스로 리턴값을 받게 되면 해당 리턴값의 생명이 연장됨
    // 연장되는 기간: 레퍼런스가 사라질 때까지
    std::cout << "c : " << c << std::endl;
    return 0;
}