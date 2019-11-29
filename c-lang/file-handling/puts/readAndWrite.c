#include <stdio.h>
#include <stdlib.h>
int main(){
	
	// this program is to demonstrate writting and reading of files
	
	char fileName[50];
	FILE * fp;
	char ch;
	printf("Enter the file name you want to create:");
	scanf("%s",fileName);
	fp=fopen(fileName,"w");
	if(fp==NULL){
		printf("Sorry file cannot be created \n");
		exit(0);
	}
	else {
		printf("File sucessfully created ! \n");
		// enter the contents
		
		printf("Enter the contents of the file and then press ctrl+c to exit \n");
		ch=getchar();
		while((ch!=EOF)){
		
			// keep putting characters
			putc(ch,fp);
			ch=getchar();

		}

		printf(" \n Data sucessfully has written ");
		fclose(fp);	
	}
	
	return 0;
}
