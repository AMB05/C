// C program to resize dynamic array using realloc() 
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
		exit(0); 
	} 
	else 
    { 
		printf("Memory successfully allocated using calloc.\n"); 
	} 
	// melakukan insert index data elemen pada array
	for (int j = 0; j < size; ++j) 
    { 
		ptr[j] = j + 1; 
	} 
    //menampilkan elemen array yang dialokasikan dengan calloc()
	printf("The elements of the array are: \n"); 
	for (int k = 0; k < size; ++k) 
    { 
		printf("%d, ", ptr[k]); 
	} 

	printf("\n"); 
	
    // size = 10; 
	int *temp = ptr; 
	// melakukan alokasi kembali dengan realloc () 
	ptr = realloc(ptr, size * sizeof(int)); 
	if (!ptr) 
    { 
		printf("Memory Re-allocation failed.\n"); 
		ptr = temp; 
	} 
	else 
    { 
		printf("Memory successfully re-allocated using realloc.\n"); 
	} 
	// melakukan insert index data elemen baru pada array
	for (int j = 1; j < size; ++j) 
    { 
		ptr[j] = j + 1; 
	} 
    //menampilkan array yang sudah dilakukan alokasi kembali
	printf("The new elements of the array are: \n"); 
	for (int k = 0; k < size; ++k) 
    { 
		printf("%d, ", ptr[k]); 
	} 
	return 0; 
}



