//
//  main.cpp
//  cpp_grammar
//
//  Created by 권혜민 on 2022/01/01.
//

#include <iostream>
using namespace std;

int main() {
    int num1 = 11;
    int num2 = 011;//8진수
    int num3 = 0b11;//2진수
    int num4 = 0x11;//16진수
    cout<<num1<<endl;
    cout<<num2<< endl;//8+1
    cout<<num3<<endl;//2+1
    cout<<num4<<endl;//16+1
    return 0; //종료코드 0이면 정상
}
