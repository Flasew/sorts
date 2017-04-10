/*
 * File: test.h
 * Description: Header file that provides test macro and function definition.
 * Author: UCSD CSE30 team for the TEST macro, Weiyang Wang otherwise
 */
#ifndef TEST

#include <stdio.h>

/* Macro to explicity print tests that are run along with colorized result. */
#define TEST(EX) (void)((fprintf( stderr, "(%s:%d) %s:", __FILE__, __LINE__,\
                 #EX)) && ((EX && fprintf(stderr, "\t\x1b[32mPASSED\x1b[0m\n"))\
                 || (fprintf(stderr, "\t\x1b[31mFAILED\x1b[0m\n")) ))

// int test functions
int intcmpfunc( const void * p1, const void * p2 );
int intSameArr( const int * arr1, const int * arr2, int nele );

#endif
