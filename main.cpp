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
    float a = 1.0;
    double b = 1.0;
    long double c = 1.0;
    
    cout<<"float "<<sizeof(a)<<endl;//4
    cout<<"double "<<sizeof(b)<<endl;//8
    cout<<"long double "<<sizeof(c)<<endl;//16 - 맥이라서
    
    return 0; //종료코드 0이면 정상
}

