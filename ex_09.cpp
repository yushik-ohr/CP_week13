#include <stdio.h>

int main(void)
{
    char s[] = "Barking dogs seldom bite.";
    char t[] = "A bad workman blames his tools";
    const char* p = s;
    char* const q = s;

    // p[3] = 'a';   // 이 라인은 컴파일 오류를 발생시킴 (p는 const char*로 정의되어 수정 불가)
    p = t;  // p는 수정 가능 (const가 아니므로 t로 변경 가능)
    q[3] = 'a';  // q는 const char*로 정의되어 있으므로 수정 불가능한데, 이는 컴파일 오류 발생
    // q = t;   // 이 라인은 컴파일 오류를 발생시킴 (q는 const char* const로 선언되어, 포인터 자체를 수정할 수 없음)

    return 0;
}
