/*
파일명 : ex02-02-variable-type.c

C언어 기본 자료형 종류
    -문자
        char        1바이트 -128 ~ +127
    -정수
        short       2바이트 -32,768 ~ +32,767
        int         4바이트 -2,147,483,648 ~ +2,147,483,647 (21억)
        long        4바이트 -2,147,483,648 ~ +2,147,483,647 (21억)
        long long   8바이트

    -실수
        float       4바이트
        double      8바이트
        long double 8바이트 이상


*/

#include <stdio.h>

int main(void)
{
    // 정의 되어 있지 않은 값을 처리할때 컴파일러는
    // 가장 빠르고 정확하게 표현할 수 있는 자료형을 선택 처리
    printf("size(100) : %d\n", sizeof(100));
    printf("size(3.14): %d\n",sizeof(3.14));
    
    char ch1 = 66, ch2 = 'B';
    short sh1 = 67;
    int in1=68;

    printf("%c\n", ch1);
    printf("%c\n", ch2);
    printf("%c\n", sh1);
    printf("%c\n", in1);

    return 0;
}
