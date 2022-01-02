//
//  main.cpp
//  cpp_grammar
//
//  Created by 권혜민 on 2022/01/01.
//

#include <iostream>
#include <numeric>

using namespace std;

int main() {
    //부동소수점
    unsigned int num0;
    float num1 = -118.625f;
    
    memcpy(&num0, &num1, sizeof(num1));//num1에 있는 값을 num0으로 카피
    
    cout<<num0<<endl;//3270328320//num1의 메모리 레이아웃//이 값을 이진수로 변환하면
    cout<<num1<<endl;//-118.625
    return 0; //종료코드 0이면 정상
}

