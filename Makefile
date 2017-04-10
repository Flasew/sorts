# Filename: Makefile
# author: Weiyang Wang
# Desctiption: Makefile of the sorting project. Major purpose is to automate
#              the testing process of each function
#              
#              to use, type make test<name of the sort> to compile the specified
#              test.
#              make <RET> will attempt to make all the tests.
#              make clean will cleans up directory

# this gcc will be clang on a mac, by default
GCC      = gcc        
GCC_FLAG = -g -Werror --std=c99

HEADERS  = mySorts.h test.h
TEMP     = others.c cmpfunc.c

TEST_BIN = testbubbleSort testselectionSort testinsertionSort testquickSort\
		testmergeSort

all:	$(TEST_BIN)

testbubbleSort:testbubbleSort.c $(HEADERS) $(TEMP)
	@echo "Compiling testbubbleSort.c"
	$(GCC) $(GCC_FLAG) -o testbubbleSort testbubbleSort.c bubbleSort.c $(TEMP)
	@echo "done"

testselectionSort:testselectionSort.c $(HEADERS) $(TEMP)
	@echo "Compiling testselectionSort.c"
	$(GCC) $(GCC_FLAG) -o testselectionSort testselectionSort.c\
	                      selectionSort.c $(TEMP)
	@echo "done"

testinsertionSort:testinsertionSort.c $(HEADERS) $(TEMP)
	@echo "Compiling testinsertionSort.c"
	$(GCC) $(GCC_FLAG) -o testinsertionSort testinsertionSort.c\
	                      insertionSort.c $(TEMP)
	@echo "done"

testquickSort:testquickSort.c $(HEADERS) $(TEMP)
	@echo "Compiling testquickSort.c"
	$(GCC) $(GCC_FLAG) -o testquickSort testquickSort.c\
	                      quickSort.c $(TEMP)
	@echo "done"

testmergeSort:testmergeSort.c $(HEADERS) $(TEMP)
	@echo "Compiling testmergeSort.c"
	$(GCC) $(GCC_FLAG) -o testmergeSort testmergeSort.c\
	                      mergeSort.c $(TEMP)
	@echo "done"

clean:
	rm -f *.o $(TEST_BIN) core  $(HOME)/core
	rm -rf *.dSYM