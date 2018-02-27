/* This program opens up a file. Extract all the integers
 * and place the integers into an array.
 * The array gets sorted, and then prompts the user for a index.
 * The program then prints the value at the specified index.
 * Name: Josh Johnston
 * Date: 5/20/2015
 */ 
#include"my.h"

int main ( int argc, char *argv[] )
{
	int* x;
	int size;

	x = getData(&*argv[1], &size);  //getData returns an array

	even_odd_sort(x, size);  //calls the function to sort the array

	display(x, size);    //calls the function to displays the value at the index specified
        free(x);
	return 0;
} //end of main()
