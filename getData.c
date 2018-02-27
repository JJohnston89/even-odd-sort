#include"my.h"

int* getData(char* file_name, int* size)
{
	FILE* spIN;
	int* newArray;
        int i;
		
	spIN = fopen(file_name, "r"); //opening file
		
        if(spIN == NULL) //checking if file is open
        {
        	printf("Could not open\n");
	        exit(1);
        }
		       

	fscanf(spIN, " %d ", size); //getting the first number
		
	newArray = (int*)calloc(*size, sizeof(int));
		
	for(i = 0; i  < *size; i++)
        {
        	fscanf(spIN, " %d ", &newArray[i]);  							
			
        }
	fclose(spIN); //closing the file
	return newArray;

}// end getData()
