#include <stdio.h>


int main() {

	// print int size
	int intSize = sizeof(int);
	printf("int size: %d bytes\n", intSize);


	// print int address
	int a;
	int* aptr = &a;
	printf("int aptr address %p\n", aptr);


	// print int array addresses
	int arr[10];
	for(int i = 0 ; i < 10 ; i++) printf("int arr[%d] address: %p\n", i, &arr[i]);


	return 0;	
}
