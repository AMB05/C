#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    bool jawab = true;
    int i = 0;
    char jawab_2[20];

    while (jawab) {
        printf("ulang ngga? (ya/tidak)\n");
        scanf("%s", jawab_2);
        // Check the answer,
        if (strcasecmp(jawab_2, "tidak") == 0) {
            jawab = false;
        }
        i++;
    }
    printf("statement di ulang sebanyak %d kali\n", i);
    return 0;
}



// #include <stdio.h>

// void main()
// {
// 	int i, j, n;

// 	printf("Enter the number of lines: ");
// 	scanf("%d", &n);
// 	for (i=1; i<=n; i++)
// 	{
// 		for (j=1; j<=i; j++)
// 		{
// 			if ((i+j) %2==0)
// 				printf(" *");//perhatikan spasi
// 			else
// 				printf(" /");//perhatikan spasi
// 		}
// 		printf("\n");
// 	}
// }

