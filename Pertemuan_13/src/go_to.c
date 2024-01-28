#include <stdio.h>

int main()
{
    label_1:
        printf("Ini statement label 1\n");
        goto label_3;
    
    label_2:
        printf("Ini statement label 2\n");

    label_3:
        printf("Ini statement label 3\n");
        goto label_2;
    return 0;
}

