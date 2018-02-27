#include"my.h"

void even_odd_sort(int* array1, int array_size)
{	
        int j;
	bool swapped = true;  //a flag to end the loop
		
	while(swapped)
        {	
		swapped = false;  
		for(j = 1; j < array_size-1; j+=2) //first pass when j is 0dd
                {
                	if(array1[j] > array1[j + 1]) //comparing key values
                        {
				swap(array1, j, j+1); //swap if [j] is > [j+1]
				swapped = true;      //swapped is true so the loop continues
			}
		}
		for(j = 0; j < array_size-1; j+=2) //second pass when j is even
                {
		   	if(array1[j] > array1[j + 1])
			{
				swap(array1, j, j+1);
				swapped = true;
			}
		}
	}
} //end of even_odd_sort()
