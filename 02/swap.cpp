// 포인터 대신 참조자를 사용하는 이유 : 불필요한 *, & 없어짐

#include <iostream>

void swap_with_pointer(int *pa, int *pb);
void swap_with_reference(int &a, int &b);

int main() {
    int a = 10, b= 20;
    int a2 = 10, b2= 20;

    swap_with_pointer(&a, &b); // a, b의 주소를 인수로 주고 함수 호출
    std::cout << "a: " << a << ", b: " << b << std::endl;
    
    swap_with_reference(a2, b2); // 참조자로 전달하여 함수 호출
    std::cout << "a2: " << a2 << ", b2: " << b2 << std::endl;
    
    return 0;
}

void swap_with_pointer(int *pa, int *pb) {
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swap_with_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}