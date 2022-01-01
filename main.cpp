//
//  main.cpp
//  cpp_grammar
//
//  Created by 권혜민 on 2022/01/01.
//

#include <iostream>
using namespace std;

int main() {
    unsigned int a = 11;//11이 unsigned가 아니기 때문에 내부적으로 타입 변환되어 성능에 문제 있음
    unsigned int b = 11u;//unsigned를 뒤에 명시
    long int c = 22L;//l로 명시 - 1과 헷갈려서 대문자로 넣어줌
    long long int d = 22LL;
    unsigned long long int e = 33ULL;//또는 LLU
    return 0; //종료코드 0이면 정상
}
