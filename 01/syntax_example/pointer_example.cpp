#include <iostream>

int main() {
    // 배열과 포인터
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *parr = arr; // 배열의 첫 번째 요소 주소를 가리킴

    // 단일 변수와 포인터
    int i = 42;
    int *pi = &i; // i의 주소를 저장

    std::cout << "==== 포인터 개념 확인 ====" << std::endl;

    // 배열과 포인터의 관계 확인
    std::cout << "배열 arr의 주소: " << arr << std::endl;
    std::cout << "포인터 parr가 가리키는 주소: " << parr << std::endl;
    std::cout << "배열 arr의 첫 번째 값: " << arr[0] << std::endl;
    std::cout << "포인터 parr을 통해 접근한 첫 번째 값: " << *parr << std::endl;

    // 포인터를 이용한 배열 순회
    std::cout << "\n배열 요소 접근 (포인터 사용)" << std::endl;
    for (int j = 0; j < 5; j++) {
        std::cout << "parr[" << j << "] = " << *(parr + j) << std::endl;
    }

    // 변수와 포인터의 관계 확인
    std::cout << "\n변수 i의 값: " << i << std::endl;
    std::cout << "변수 i의 주소: " << &i << std::endl;
    std::cout << "포인터 pi가 가리키는 주소: " << pi << std::endl;
    std::cout << "포인터 pi를 통해 접근한 값: " << *pi << std::endl;

    return 0;
}
