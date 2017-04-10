/*
 * Filename: mySorts.h
 * Author: Weiyang Wang 
 * Description: Header file of different sorting algorithms. All implementations
 *              in this program takes the similar form as C's qsort() function:
 *                void qsort(void *base, size_t nel, size_t width,
 *                           int (*compar)(const void *, const void *))
 *              Written as a practice as well as a library file for future 
 *              usage. Includes common sorting algorithms such as bubble sort,
 *              selection sort, insertion sort, merge sort, quick sort and 
 *              heap sort. 
 *              See README for more detailed information
 * Date: Apr 3, 2017
 */
#ifndef MYSORT_H
#define MYSORT_H 

#include <errno.h>
#include <stdlib.h>
#include <stddef.h>

// Function prototypes
// Functions returning an int indicates that memory allocation is needed for 
// that type of sorting, and ENOMEM may occur as the result
void bubbleSort(void *base, size_t nel, size_t width, 
	int (*cmpfunc)(const void *, const void *));
void selectionSort(void *base, size_t nel, size_t width, 
	int (*cmpfunc)(const void *, const void *));
void insertionSort(void *base, size_t nel, size_t width, 
	int (*cmpfunc)(const void *, const void *));
void quickSort(void *base, size_t nel, size_t width, 
	int (*cmpfunc)(const void *, const void *));
int mergeSort(void *base, size_t nel, size_t width, 
	int (*cmpfunc)(const void *, const void *));

#endif