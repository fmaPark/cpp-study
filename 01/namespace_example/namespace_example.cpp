#include <iostream>
#include "header1.h"
#include "header2.h"

// 자기 자신이 포함되어 있는 이름공간 안에서는 굳이 앞에 이름공간을 명시하지 않음
namespace header1 {
    // 헤더에 정의된 함수를 정의해주어야 함
    // 헤더파일에 직접 정의하는 방법도 있음
    int foo() {
        std::cout << "header1 foo" << std::endl;
        return 0;
    }
    
    void bar() {
        std::cout << "header1 bar" << std::endl;
    }

    int func() {
        foo(); // header1::foo()
        header2::foo();  // header2::foo()
        return 0;
    }
}

namespace header2 {
    int foo() {
        std::cout << "header2 foo" << std::endl;
        return 0;
    }
    
    void bar() {
        std::cout << "header2 bar" << std::endl;
    }
}

using namespace header1; //앞으로 사용할 namespace 정의할 수 있음 (비권장)
int main() {
    func();
    foo();  // header1 에 있는 함수를 호출
    bar();  // header1 에 있는 함수를 호출
}


// 컴파일 시 모든 관련 파일을 함께 컴파일해야 함
// g++ -std=c++14 namespace_example.cpp header1.cpp header2.cpp -o namespace_example
