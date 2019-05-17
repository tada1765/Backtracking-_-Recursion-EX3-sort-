#include "Backtracking_Recursion_EX3_sort.h"

char * PrintGreeting(int trigger){
	char * good = "Hello World";
	char * bad = "Who are you";
	
	if(trigger == TRUE)
		return good;
	return bad;
}


/* 
 * Note: This isArrayInSortedOrder function only can take in int type of arra:
 */
int isArrayInSortedOrder(int arr[], int n){
	 char * error = n;
	 if(n <= 0){
		 throwError(1,"ERROR %d: '%s' is the size of this array.",1,(error));
		 //printf("why\n");
	 }else if(n == 1){return 1;}
	else
	return(arr[n-1]<arr[n-2])?0:isArrayInSortedOrder(arr,n-1);
}