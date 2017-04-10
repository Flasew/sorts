/*
 * Filename: cmpfunc.c
 * Author: Weiyang Wang
 * Description: different comparition function and struct definition used in
 *              test cases.
 * Date: Apr 10 2017
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#include "mySorts.h"
#include "test.h"

/*
 * Function name: intcmpfunc()
 * Function prototype: int intcmpfunc( const void * p1, const void * p2 )
 * Desctiption: 
 *     compare two int just like '>'. Returns '*p1 > *p2' as the result
 */
int intcmpfunc( const void * p1, const void * p2 ){
	return *((int*)p1) > *((int*)p2);
}

/*
 * Function name: intSameArr()
 * Function prototype: 
 *     int intSameArr( const int * arr1, const int * arr2, int nele )
 * Description: 
 *     Judege if two int array are the same by value. returns 0 if same, 1 if
 *     not.
 */
int intSameArr( const int * arr1, const int * arr2, int nele ){
	for( int i = 0; i < nele; i++ )
		if( arr1[i] != arr2[i] )
			return 0;
	return 1;
}