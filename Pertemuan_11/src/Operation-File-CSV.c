// C program for the above approach
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	// membuka dan membuat file untuk append data
	FILE* fp = fopen("operation.csv", "a+");
	char name[50];
	int accountno, amount;
	if (!fp) {
		// jika file tidak ada maka program berhenti
		printf("Can't open file\n");
		return 0;
	}
	// menambahkan record data
	printf("Enter Account Holder Name : ");
	scanf("%s", &name);
	printf("Enter Account Number : ");
	scanf("%d", &accountno);
	printf("Enter Available Amount : ");
	scanf("%d", &amount);
	// menyimpan data pada file
	fprintf(fp, "%s, %d, %d\n", name, accountno, amount);
	printf("\nNew Account added to record");
	fclose(fp); //menutup file
    
    printf("\n\n\n");

    // membuka dan membaca file
    FILE* fpp = fopen("operation.csv", "r+");
    if (!fpp)
    {
        // jika file tidak ada maka program berhenti
        printf("Can't open file\n");
        return 0;
    }
    else 
    {
        // membuat buffer array
        char buffer[1024];
        int row = 0;
        int column = 0;
        while (fgets(buffer, 1024, fpp)) 
        {
            column = 0;
            row++;
            // Tpenyesuaian kolom data
            if (row == 0)
                continue;
            // split data
            char* value = strtok(buffer, ", ");
 
            while (value) {
                // Column 1
                if (column == 0) {
                    printf("Name :");
                }
                // Column 2
                if (column == 1) {
                    printf("\tAccount No. :");
                }
                // Column 3
                if (column == 2) {
                    printf("\tAmount :");
                }
                printf("%s", value); //menampilkan data
                value = strtok(NULL, ", ");
                column++;
            }
            // printf("\n");
        }
        // Close the file
        fclose(fpp);
    }
	return 0;
}

