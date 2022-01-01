//
//  main.cpp
//  cpp_grammar
//
//  Created by 권혜민 on 2022/01/01.
//
using namespace std;
#include <iostream>

int main(int argc, const char * argv[]) {
    /*
    int x,y,z; //선언 여러 개 가능
    x = 1;
    y = 2;
    z = 3;
    std::cout << "Hello, World!\n";
    std::cout << x<<std::endl;//endl = 개행
    */
    //초기화 버전
    int x(1), y(2), z=4;
    
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    
    return 0; //종료코드 0이면 정상
}
