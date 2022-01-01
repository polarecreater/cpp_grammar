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
    //overflow
    
    //unsigned
    uint32_t uintoverflow = numeric_limits<uint32_t>::max();
    uint32_t uintoverflow_ = uintoverflow + 1;//overflow : 0
    cout<<uintoverflow<<endl;
    cout<<uintoverflow_<<endl;
    
    cout<<endl;
    
    //signed
    int32_t intoverflow = numeric_limits<int32_t>::max();
    int32_t intoverflow_ = intoverflow + 1;//실제로 overflow는 아니지만 : 음수 최솟값
    cout<<intoverflow<<endl;
    cout<<intoverflow_<<endl;
    
    return 0; //종료코드 0이면 정상
}
