/*
 * Filename: testbubbleSort.c
 * Author: Weiyang Wang
 * Description: Unit test of bubbleSort.c. Performs bubbleSort on a given 
 *              array based on the comparefunc passed in.
 * Date: Apr 10 2017
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#include "mySorts.h"
#include "test.h"

/*
 * Unit test of bubbleSort()
 * void bubbleSort(void *base, size_t nel, size_t width, 
 *    int (*cmpfunc)(const void *, const void *));
 *  Bubble sort implementation. One of the most easy-to-understand
 *  algorithm. Usually has O(n^2). Dong by comparing adjacent elements 
 *  of the list and switch them if necessary, until the whole list is sorted
 */
void testbubbleSort(void){

	// easy case of integer
	int nele;              // number of element in the array

	nele = 7;
	int sorted[7] = {0,1,2,3,4,5,6};
	int unsorted[7] = {4,5,1,3,0,6,2};

	bubbleSort( unsorted, nele, sizeof(int), intcmpfunc );
	for( int i = 0; i < nele; i++ )
		printf("%d ",unsorted[i]);
	printf("\n");

	TEST( intSameArr(sorted, unsorted, nele) );

}

int main(void){
	testbubbleSort();
}