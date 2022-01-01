//
//  main.cpp
//  cpp_grammar
//
//  Created by 권혜민 on 2022/01/01.
//

#include <iostream>
using namespace std;

int main() {
    int intnum = 0;
    long longnum = 0;
    int* intPointer = &intnum;//포인터
    
    //64비트 맥 환경에서
    cout<<sizeof(intnum)<<endl;//4
    cout<<sizeof(longnum)<< endl;//8
    cout<<sizeof(intPointer)<<endl;//8
    
    cout<<endl;
    
    //사이즈에 민감하다면 고정형 타입
    int8_t a = 0;
    int16_t b = 0;
    int32_t c = 0;
    
    cout<< sizeof(a) <<endl;//1 //8비트라서 8로 나누면 1
    cout<< sizeof(b) <<endl;//2
    cout<< sizeof(c) <<endl;//4
    return 0; //종료코드 0이면 정상
}
