#include <iostream>

int main() {
    // 변수 정의
    int i1;
    char c;
    double d;
    float f;

    // 포인터
    // 포인터 개념에 대한 설명은 pointer_example.cpp 파일 참조
    int arr[10];
    int *parr = arr;
    
    int i2;
    int *pi2 = &i2;

    // for문
    // C에서는 변수의 선언이 항상 최상단에 있어야 했지만, C++에서는 어느 위치에서든지 선언 가능
    int i;

    for (i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    // if - else 문
    int lucky_number = 3;
    std::cout << "내 비밀 수를 맞추어 보세요~" << std::endl;

    int user_input;  // 사용자 입력

    while (1) {
        std::cout << "입력 : ";
        std::cin >> user_input;
        if (lucky_number == user_input) {
            std::cout << "맞추셨습니다~~" << std::endl;
            break;
        } else {
            std::cout << "다시 생각해보세요~" << std::endl;
        }
    }
    
    // switch문
    int user_input_switch;
    std::cout << "저의 정보를 표시해줍니다" << std::endl;
    std::cout << "1. 이름 " << std::endl;
    std::cout << "2. 나이 " << std::endl;
    std::cout << "3. 성별 " << std::endl;
    std::cin >> user_input_switch;

    switch (user_input_switch) {
        case 1:
        std::cout << "Psi ! " << std::endl;
        break;

        case 2:
        std::cout << "99 살" << std::endl;
        break;

        case 3:
        std::cout << "남자" << std::endl;
        break;

        default:
        std::cout << "궁금한게 없군요~" << std::endl;
        break;
    }

    return 0;
}