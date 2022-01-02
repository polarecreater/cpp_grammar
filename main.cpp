//
//  main.cpp
//  cpp_grammar
//
//  Created by 권혜민 on 2022/01/01.
//

#include <iostream>
#include <cfloat>

using namespace std;

int main() {
    //부동소수점
    //1을 표현
    //1 =  1.0 * 10^0(2)
    unsigned int num0 = 0b00111111100000000000000000000000;//바이너리 형태로 표현(지수는 8자리, 0=127 / 가수는 23자리, 모두 0)
    float num1;
    memcpy(&num1,&num0,sizeof(num0));
    cout.precision(64);
    cout<<"num1 "<< num1 <<endl;//num1은 1으로 출력됨
    
    cout << endl;
    
    unsigned int num2 = 0b00111111100000000000000000000001;//1보다 크지만 가장 작은 수
    float num3;
    memcpy(&num3,&num2,sizeof(num2));
    
    cout<<"num3 "<< num3 <<endl; //1.00000011920928955078125
    
    //epsilon을 구하는 법
    cout<< num3 - num1 << endl;
    cout<< FLT_EPSILON << endl;
    //둘이 정확히 같은 값
    
    return 0; //종료코드 0이면 정상
}

