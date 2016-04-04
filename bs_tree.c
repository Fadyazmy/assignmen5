#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bs_tree.h"

//• In the file bs tree.c, implement the functions on BStree.



BStree bs_tree_ini(void) {
BStree bst = (BStree) malloc(sizeof(BStree_node*)); // allocate space for tree
(*bst) = NULL; // allocate NULL for root node
return bst;
}





void bs_tree_insert(BStree bst, Key key, Data_Item data){

if((*bst) == NULL){ // if root is NULL

	(*bst) = (BStree_node*)malloc(sizeof(BStree_node));
  (**bst).key = key; //root.key 
	(**bst).data = data;//root.data 
	(**bst).left = NULL ;//(BStree_node*)malloc(sizeof(BStree_node));//root.key 
	(**bst).right = NULL ;//(BStree_node*)malloc(sizeof(BStree_node));//root.key 
}

else{
//using method recursively bs_tree_insert_node
bs_tree_insert_node(*(bst), key, data);
	}//bs_tree_insert function
}
//helping
void bs_tree_insert_node(struct Bst_Node *node, Key key, Data_Item data){

	if(node == NULL){
	//current node is NULL
	node = (BStree_node*)malloc(sizeof(BStree_node));
	node->key = key; //root.key 
	node->data = data;//root.data 
	node->left = (BStree_node*)malloc(sizeof(BStree_node));//root.key 
	node->right = (BStree_node*)malloc(sizeof(BStree_node));//root.key 
	}
	else if(key_comp(node->key, key) == 1){//go right

		printf("insert r\n");
	bs_tree_insert_node(node->right, key, data);
	}//if function
	else if(key_comp(node->key, key) == -1){ // go left
			printf("insert l\n");
	bs_tree_insert_node(node->left, key, data);
	}
	else{
			printf("node already exists\n"); //identical node already exist
	}

}




Data_Item *bs_tree_search(BStree bst, Key key){
int i = 1;
while(i){
if(key_comp((**bst).key, key) == 1){//go right
(*bst) = (**bst).right;
}//if function
else if(key_comp((**bst).key, key) == 1){ // go left
(*bst) = (**bst).left; // (**bst) OR (*bst)
}
else if(key_comp((**bst).key, key) == 0){
return &(**bst).data;//identical data item node
}
else{ //must be NULL
 //current node is NULL
//Not found
	printf("Node not found\n");
	return NULL;
	} 
}// while function
}


void bs_tree_traversal(BStree bst){
	inorder_bs_tree_traversal((*bst));
}

void inorder_bs_tree_traversal(struct Bst_Node *node){
if(node->left != NULL){
	printf("helllo left\n");
	inorder_bs_tree_traversal(node->left);
}
data_print(node->data);
key_print(node->key);
	if(node->right != NULL){
		printf("helllo right\n");
		inorder_bs_tree_traversal(node->right);
	}
}



// void bs_tree_free(BStree bst){
// bs_tree_free_node((**bst));
// }

// void bs_tree_free_node(struct Bst_Node node){
// 	if (node == NULL)
// 		return ;
// bs_tree_free_node(*node.left);
// bs_tree_free_node(*node.right);

// free(node);
// }

