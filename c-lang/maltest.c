#include <stdio.h>
#include <stdlib.h>

void main(){

	int arr[5]={1,2,3,4,5};
	int *p=arr;
	char ch;
	int index=4;
	int d=0;
	while((d>=0)){
		scanf("%d",&d);
		
		// trying to dynamically increase array size
		p=(int *)realloc(arr,(sizeof(arr)+sizeof(int)));
		arr=*p;		
		arr[++index]=d;
		printf("sucessfully added= %d",d);
		
		
		}


	}
