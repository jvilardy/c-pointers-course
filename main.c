#include <stdio.h>

void main() {
    int i = 0xAA;
    char c = 3;

    int x;
    char *cptr;
    printf("\n");
    printf("c = %c, &c = %p\n", c, &c);
    printf("(garbage) x = %d\n", x);
    printf("(garbage) cptr = %p\n", cptr);
    printf("(garbage) cptr = 0x%llx\n\n", (long long unsigned int)cptr);

    // 1. Use of & before the variable in non-pointer assigment
    // x = i & c;
    // printf("x = i & c; -> %d \n\n", x);

    // 2. Use of & before the variable in non-pointer assigment
    // cptr = &c;
    // x = i & cptr;
    // printf("x = i & &c; -> %d \n\n", x);
    // x = i & &c;
    // printf("x = i & &c; -> %d \n\n", x);

    // i = 0xFF;
    // x = i & (int)&c;
    // printf("x = i & (int)&c; -> %X \n\n", x);

    // 3. Assign pointer a valid address
    // cptr = &c;
    // printf("cptr = %p, &c = %p\n\n", cptr, &c);

    // 4. The use of * with a pointer variable
    // i = 2;
    // x = i * cptr;
    // printf("x = i *cptr; => %d\n\n", x);

    // 5. The use of * with a pointer variable
    cptr = &c;
    printf("cptr = %p, &c = %p\n\n", cptr, &c);
    i = 2;
    x = i * *cptr;
    printf("x = i * *cptr; => %d\n\n", x);

    // 6. The use of * with a pointer variable
    x = i * (*cptr);
    printf("x = i * (*cptr); => %d\n\n", x);

}