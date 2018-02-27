#include"my.h"

void display(int* array1, int size)
{
	int index = 0; 
	 
	while(index != -1)   //-1 to exit the program
	{
		printf("Enter an index to view the value (-1 to exit): ");
		scanf("%d", &index);
		
		if(index == -1)
		{
			printf("-1 is called, the program will exit\n");
		}
		else if(index < 0 || index >= size)  //validating input
		{
			printf("Invalid input\n");
			printf("Enter a integer > 0 and < %d \n", size);
		}
		else

		printf("Index %d value is %d\n", index, array1[index]);
	}
} //end of display()
