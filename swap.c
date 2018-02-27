#include "my.h"

void swap(int* array1, int one, int two)
{       //swapping one with two
	int temp = array1[one];     
	array1[one] = array1[two];
	array1[two] = temp;
} // end of swap()
