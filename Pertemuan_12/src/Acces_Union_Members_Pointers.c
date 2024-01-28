#include <stdio.h>

// union declaration
union number {
    int a;
    int b;
};

int main()
{
    //deklarasi union
    union number n;
    // pointer to union
    union number* ptr = &n;
    // akses anggota union dengan memberikan nilai
    ptr->a = 20;
    printf("a = %d\n", ptr->a);
    // akses anggota union dengan memberikan nilai
    ptr->b = 30;
    printf("b = %d\n", ptr->b);

    return 0;
}

