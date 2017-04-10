/*
 * Filename: bubbleSort.c
 * Author: Weiyang Wang
 * Description: Bubble sort algorithm. O(n^2).
 * Date: Apr 5 2017
 */

#include <stdlib.h>
#include <string.h> 
#include <stddef.h>

#include "mySorts.h"

/*
 * Function name: bubbleSort()
 * Function Prototype: 
 *     void bubbleSort(void *base, size_t nel, size_t width, 
 *         int (*cmpfunc)(const void *, const void *))
 * Description: 
 *     Bubble sort implementation. One of the most easy-to-understand
 *     algorithm. Usually has O(n^2). Dong by comparing adjacent elements 
 *     of the list and switch them if necessary, until the whole list is sorted
 * Parameters:
 *     void *base - arg1 - pointer to the begining of the array to be sorted
 *     size_t nel - arg2 - number of element in the array 
 *     size_t width - arg3 - size of each element in the array
 *     int (*cmpfunc)(const void *, const void *) - comparision function, used 
 *         to determine which element is "larger" by judging the result of 
 *         calling this function. Has to be provided by the user.
 *         Returing a positive number means first argument is larger, 0 for two
 *         are equal, negative if second one is larger.
 * Side effects: base array is sorted upon successful execution
 * Error conditions: 
 *     Null pointers passed in: Exit function by "return" to avoid crush 
 *        (may be improved to indicate error in the future)
 * Return value: void function, no return value
 */
void bubbleSort(void *base, size_t nel, size_t width, 
	int (*cmpfunc)(const void *, const void *)){

	// check null pointer
	if( base == NULL || cmpfunc == NULL )
		return;

	// bubble sort outer loop, i for loop counter
	// use each element of the array as a unit -- see for's argument
	for( size_t i = 0; i < nel - 1; i++ ){
		// bubble sort inner loop, j for counter
		// compare each element and it's neighbor
		for( size_t j = 0; j < nel - i - 1; j++ ){
			// compare the current element and it's adjancent, if greater, swap
			if( cmpfunc( base+(j*width), base+((1+j)*width) ) > 0 ){
				// std. swap precedure, creat a temp to store an element
				void* temp = malloc( width );  
				memcpy( temp, base+(j*width), width );
				// now move the next element back
				memcpy( base+(j*width), base+((1+j)*width), width );
				// put the temp back
				memcpy( base+((1+j)*width), temp, width );
				// deallocate heap memory
				free( (void*)temp );
			}
		}
	}
}
