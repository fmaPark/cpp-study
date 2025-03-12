#include <iostream>

int main() {

    // 힙(heap): 프로그램 실행 시에 자유롭게 할당하고 해제할 수 있는 공간
    // 컴파일러에 의해 어느 정도 안전성이 보장되는 스택(stack)과 달리, 힙은 사용자가 직접 관리해야 함
    // 힙은 동적 할당을 통해 사용할 수 있음

    // c언어에서는 malloc과 free 함수를 사용하여 힙을 사용할 수 있었음
    // c++에서는 new와 delete 연산자를 사용하여 힙을 사용할 수 있음 (malloc, free도 사용 가능)
    // new : malloc과 대응, 메모리 할당
    // delete : free와 대응, 메모리 해제
    
    int *p = new int; // int 크기를 할당하여 주소값을 p에 저장
    *p = 10;

    std::cout << *p << std::endl;

    delete p; // p에 할당된 공간 해제
    // delete로 해제할 수 있는 메모리 공간은 사용자가 new를 통해서 할당한 공간만 가능
    // 지역변수를 delete로 해제하면 Heap이 아닌 공간을 해제하려고 한다는 경고 메시지 발생



    //배열 할당 예제
    int arr_size;
    std::cout << "array size :";
    std::cin >> arr_size;
    int *list = new int[arr_size];
    for (int i = 0; i < arr_size; i++) {
        std::cin >> list[i];
    }
    for (int i = 0; i < arr_size; i++) {
        std::cout << i << "th element of list: " << list[i] << std::endl;
    }

    delete[] list;

    return 0;
}