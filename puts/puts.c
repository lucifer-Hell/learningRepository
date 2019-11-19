#include <stdio.h>

int main (){
	// this program is to demonstrate puts and gets method
	// we require them becuase scanf ignores any text after space
	// char * gets(char *s ) read till eof or space 
	// int puts(char *s) puts the string to stdout
	
	char name[100];
	printf("Enter Your Name:\n");
	gets(name);

	printf("Your Name is : ");
	puts(name);
	

}
