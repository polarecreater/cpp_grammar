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
    //unsigned int
    cout << numeric_limits<uint8_t>::max()<<endl;//uint8_t의 최댓값 - unint8_t가 문자형이라서 \377로 값 나옴
    cout << (int)numeric_limits<uint8_t>::max()<<endl;//255
    cout << numeric_limits<uint16_t>::max()<<endl;//65535
    cout << numeric_limits<uint32_t>::max()<<endl;//4294967295
    cout << numeric_limits<uint64_t>::max()<<endl;//18446744073709551615
    
    cout<<endl;
    
    //signed int
    cout<<(int)numeric_limits<int8_t>::max()<<endl;
    cout<<numeric_limits<int16_t>::max()<<endl;
    cout<<numeric_limits<int32_t>::max()<<endl;
    cout<<numeric_limits<int64_t>::max()<<endl;
    
    cout<<endl;
    
    cout<<(int)numeric_limits<int8_t>::min()<<endl;
    cout<<numeric_limits<int16_t>::min()<<endl;
    cout<<numeric_limits<int32_t>::min()<<endl;
    cout<<numeric_limits<int64_t>::min()<<endl;
    return 0; //종료코드 0이면 정상
}
