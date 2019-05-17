#include "unity.h"
#include "Backtracking_Recursion_EX3_sort.h"
#include "Error.h"
#include 	<Exception.h>
#include 	"Exception.h"
#include 	"CException.h"
void setUp(void)
{
}

void tearDown(void)
{
}

void test_BacktrackingRecursionEX3sort_simple_test(void)
{
  char * good = "Hello World";
	char * bad = "Who are you";
	char * result = PrintGreeting(FALSE);
	
	TEST_ASSERT_EQUAL_STRING(bad, result);  
}

void test_function_isArrayInSortedOrder_given_an_nonSortedArr_expected_0_as_return(void)
{
	int A[]={4,3,1,5,2};
	int size = (sizeof(A)/sizeof(int));
	// printf("Number of integers is n = %d\n",size-1);
	// printf("Array is as follows:- \n");
	//for(int i = size ; i > 0 ; i--){
	//printf("%d | ",A[size-i]);
	//}
	int isSort = isArrayInSortedOrder(A, size);
	//printf("\nIs this array sorted?= %d (Note:0-NO 1-YES)\n", isSort);
	TEST_ASSERT_EQUAL_INT(FALSE, isSort);
}

void test_function_isArrayInSortedOrder_given_an_SortedArr_expected_1_as_return(void)
{
	int A[]={1,2,3,4,5,6};
	int size = (sizeof(A)/sizeof(int));
	int isSort = isArrayInSortedOrder(A, size);
	TEST_ASSERT_EQUAL_INT(TRUE, isSort);
}

void test_function_isArrayInSortedOrder_given_an_CharArr_expected_0_as_return(void)
{
	int A[]={10,3,456,2,5};
	int size = (sizeof(A)/sizeof(int));
	int isSort = isArrayInSortedOrder(A, size);
	TEST_ASSERT_EQUAL_INT(FALSE, isSort);
}

void test_function_isArrayInSortedOrder_given_an_onlyOneElementArr_expected_1_as_return(void)
{
	int A[]={1};
	int size = (sizeof(A)/sizeof(int));
	//printf("Number of integers is n = %d\n",size-1);
	//printf("Array is as follows:- \n");
	//for(int i = size ; i > 0 ; i--){
	//printf("%d | ",A[size-i]);
	//}
	int isSort = isArrayInSortedOrder(A, size);
	//printf("\nIs this array sorted?= %d (Note:0-NO 1-YES)\n", isSort);
	TEST_ASSERT_EQUAL_INT(TRUE, isSort);
}

 void test_function_isArrayInSortedOrder_given_an_EmptyElementArr_expected_0(void)
 {
	 int A[]={};
	 int size = (sizeof(A)/sizeof(int));
	 //printf("Number of integers is n = %d\n",size-1);
	 CEXCEPTION_T e;
	Try {
	int isSort = isArrayInSortedOrder(A, (void*)size);
	TEST_FAIL_MESSAGE("Expect DATA_NOT_FOUND. But no exception thrown.");
	} Catch(e){
		printf(e->errorMsg);
		TEST_ASSERT_EQUAL(EMPTY_ARRAY, e->errorCode);
		freeError(e);
		} 
	//int isSort = isArrayInSortedOrder(A, size);
	//TEST_ASSERT_EQUAL_INT(FALSE, isSort);
 } 