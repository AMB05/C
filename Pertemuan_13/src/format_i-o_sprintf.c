#include <stdio.h> 

int main() 
{ 
	char str[50]; 
	int a = 2, b = 8; 

	sprintf(str, "%d and %d are even number", a, b); 

	printf("%s", str);
    
    return 0; 
}

