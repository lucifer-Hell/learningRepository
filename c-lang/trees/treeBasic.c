#include <stdio.h>
#include <stdlib.h>
// this is basic implementation of tree
// here tree only refering to binary tree

// create a struct for tree

struct node {
    int a; // data
    struct node * left;
    struct node * right;
};

// creating traversals
//1. PREORDER( root->left->right)

void preOrder(struct node *t){
    if(t) // check condition whether tree is not equal to null 
    {
        printf(" %d",t->a);
        preOrder(t->left);
        preOrder(t->right);
        
    }
    
}

//2.INORDER TRAVERSAL (LEFT->ROOT->RIGHT)
void inOrder(struct node *t){
    if(t) // check condition whether tree is not equal to null 
    {
        preOrder(t->left);
        printf(" %d",t->a);
        preOrder(t->right);
        
    }
    
}

//3.POST ORDER TRAVERSAL (LEFT->RIGHT->ROOT)
void postOrder(struct node *t){
    if(t) // check condition whether tree is not equal to null 
    {
        preOrder(t->left);
        preOrder(t->right);
        printf(" %d",t->a);

    }
    
}




void main(){

// creating structures

struct node root;
// remebers pointer as just empty location showers you cannot expect to store
// anything but adress :)


struct node * p =&root;
struct node root2; // you could also do like this
struct node root3= {57,NULL,NULL}; // also like this :)
// // root 2 values
root2.a=55;
root2.right=NULL;
root2.left=NULL;

// remember implement in correct order otherwise you may get segmentation fault !!
p->a=54;         // pointer implementation
p->left=&(root2);         // pointer implementation
p->right=&(root3);


//Now function implementation
printf("\npreorder traversal implementation \n");
preOrder(p);
printf("\ninOrder traversal implementation \n");
inOrder(p);
 printf("\npostorder traversal implementation \n");
postOrder(p);
printf("\n");


}