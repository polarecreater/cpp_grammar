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
    float num0 = 0.1f;
    float num1 = 0.02f * 5.0f;
    cout.precision(64);//cout할 때 정밀하게 출력
    cout<< num0 <<endl;
    cout<< num1 <<endl;
    
    if(num0 == num1){//같은데 실행이 안 됨
        cout << "Equal 1" <<endl;
    }
    if(num0 == 0.1f){
        cout << "Equal 2" <<endl;//출력됨
    }
    if(num0 == 0.1){//0.1은 더블
        cout << "Equal 3" <<endl;
    }
    if(num0 == 0.1L){//롱더블
        cout << "Equal 4" <<endl;
    }
    cout<<0.1f<<endl;
    cout<<0.1<<endl;
    cout<<0.1L<<endl;
    
    cout << endl;
    
    //float은 ==으로 비교하면 위험함
    //대신 차이의 절댓값과 epsilon(1보다 조금 큼)을 비교하는 경우도 있지만 항상 맞지 않음
    if(fabsf(num0-num1) <= __FLT_EPSILON__){
        cout<< "Equal 5" <<endl;
    }
    
    return 0; //종료코드 0이면 정상
}

