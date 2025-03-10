#include <iostream>

int main() {
    // 레퍼런스의 배열은 불가능 : 레퍼런스는 특별한 경우가 아닌 이상 메모리 상에서 공간을 차지하지 않기 때문
    // int a, b;
    // int& arr[2] = {a, b} //컴파일 오류

    // 배열들의 레퍼런스는 가능
    int arr[3] = {1, 2, 3};
    int(&ref)[3] = arr; //ref가 arr을 참조하도록 함
    // ref[0]부터 ref[2]가 각각 arr[0]부터 arr[2]의 레퍼런스가 됨

    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;

    std::cout << arr[0] << arr[1] << arr[2] << std::endl;
    
    return 0;
}