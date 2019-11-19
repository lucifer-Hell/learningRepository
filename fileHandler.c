#include <stdio.h>
#include <stdlib.h>
void main(){
	
	// this is a basic file pointer program 
	FILE *fp; // declaring file pointer
	int len; // for finding size of file

	// opening file
	fp=fopen("test.txt","r");
	if (fp==NULL){
		printf("ERROR FILE NOT OPENED \n");
	
	}
	else{
		printf("file sucessfully opened\n");
	}
	fseek(fp,0,SEEK_END); // FILE POINTER MOVES TO ZERO TH OFFSET OF THE END POSITION
	// calculating lenth of file
	// using ftell --> tells u current position of file pointer.
	len=ftell(fp);
	printf("size of file is -> %d \n",len);
	// finally closing the file
	fclose(fp);



}
