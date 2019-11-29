// this program is to show the basic recursion programs for various tree applications 


#include <stdio.h>

// tree element decalaration
struct node {
	char data;
	struct node * left ;
	struct node * right;
};

// functions declarations

int countNode(struct node *t){
		if (!t) return 0;
		return ( countNode(t->left) + countNode(t->right)+ 1);		
	}
int countLeafs(struct node *t){
		if (!t) return 0;
		if (!t->left && !t->right) return 1;
		return (countLeafs(t->left)+countLeafs(t->right));

}

int noLeafs(struct node *t){
	 if (!t) return 0;
	 if (!t->left && !t->right) return 0;
	 return ( noLeafs(t->left)+ noLeafs(t->right) + 1);




}


int countFullNodes(struct node *t ){
		if (!t) return 0;
		if (!t->left && !t->right) return 0;
		return ( countFullNodes(t->left) + countFullNodes(t->right) + (t->left && t->right) ?1:0 );

}


void main(){
	// getting recursions is so easy !!!
	






}
