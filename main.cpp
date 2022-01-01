//
//  main.cpp
//  cpp_grammar
//
//  Created by 권혜민 on 2022/01/01.
//

#include <iostream>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1.5;//int에는 소수점 뗌 - 비쥬얼 스튜디오에서는 데이터 손실 주의 알람 뜨는데 Xcode는 없군..
    int num3 = num2*2;//3이 아니라 2 : num2가 1이기 때문
    cout<<num1<<endl;
    cout<<num2<< endl;
    cout<<num3<<endl;
    return 0; //종료코드 0이면 정상
}
