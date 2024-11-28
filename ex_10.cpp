#include <stdio.h>

void memzero(void* ptr, size_t len)
{
    for (; len > 0; len--)
    {
        *(char*)ptr = 0;
        ptr = (char*)ptr + 1;  // 포인터를 한 바이트씩 증가시키기 위해 추가
    }
}

int main(void)
{
    char a[10];
    memzero(a, sizeof(a));

    int b[10];
    memzero(b, sizeof(b));

    double c[10];
    memzero(c, sizeof(c));

    return 0;
}
