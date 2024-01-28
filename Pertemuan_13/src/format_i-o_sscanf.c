#include <stdio.h> 

int main() 
{ 
	char str[0]; 
	int a = 200, b = 8, c=10;
	int d, e, f; 

	sprintf(str, "a = %d, b = %d, c = %d", a, b, c); 

	sscanf(str, "a = %d, b = %d, c = %d", &d, &e, &f); 

	printf("d = %d, e = %d, f = %d", d, e, f); 
	// printf("c = %d and d = %d", c, d); 
	return 0; 
}

