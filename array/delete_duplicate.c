#include<stdio.h>
#define MAX 20
int main(){
	int arr[MAX];
	int len;
	printf("Enter lenght of arr  :");
	scanf("%d ",&len);			//entering lenght
	for(int i =0; i< len; i++){
		printf("\narr element %d = ",i);
		scanf("%d",&arr[i]);		//entering values in the array
	}

	for(int i =0; i < len; i++){
		printf("%d\t",arr[i]);		//printing elements
	}
	printf("\n");

	for(int i =0; i< len; i++){
		arr[i] = arr[i+1];
	}

	int arr_len = sizeof(arr)/sizeof(arr[0]);
	printf("size of array : %d",arr_len);
	for(int i =0; i < len; i++){
		printf("%d\t",arr[i]);		//printing elements
	}
	printf("\n");
	return 0;
}
