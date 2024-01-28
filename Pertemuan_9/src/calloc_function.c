// C program to create dynamic array using calloc() function 
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	// address of the block created hold by this pointer 
	int* ptr; 
	int size; 
	// Size of the array 
	printf("Enter size of elements:"); 
	scanf("%d", &size); 
	//melakukan alokasi memori dinamis dengan calloc()
	ptr = (int*)calloc(size, sizeof(int)); 
	//melakukan cek untuk alokasi memori 
	if (ptr == NULL) 
    { 
		printf("Memory not allocated.\n"); 
	} 
	else 
    { 
		//alokasi memori  
		printf("Memory successfully allocated using calloc.\n"); 
		// Get the elements of the array 
		for (int j = 0; j < size; ++j) { 
			ptr[j] = j + 1; 
		} 
		//menampilkan elemen array 
		printf("The elements of the array are: \n"); 
		for (int k = 0; k < size; ++k) { 
			printf("%d, ", ptr[k]); 
		} 
	} 
	return 0; 
}



