//• In the file bs tree.c, implement the functions on BStree.

Bst_Node bs_tree_insert_node(Bst_Node node, Key key, Data_Item data);

BStree bs_tree_ini(void) {
BStree bst = (BStree) malloc(sizeof(BStree_node*)); // allocate space for tree
(*bst) = NULL; // allocate NULL for root node
//mabado: make sure to return the bst!
return bst;
}





void bs_tree_insert(BStree bst, Key key, Data_Item data){

if((*bst) == NULL){ // if root is NULL
//mabado: this will probably give you a segmentation fault
//        since *bst==NULL, you can't talk about (**bst).
//
//        you will need something like: *bst = (BStree_node*) malloc(sizeof(BStree_node));
  (**bst).key = key; //root.key 
	(**bst).data = data;//root.data 
	//mabado: also, you can just set these children ptrs to NULL for now - they will be empty until later!
	(**bst).left = (BStree_node)malloc(sizeof(BStree_node*));//root.key 
	(**bst).right = (BStree_node)malloc(sizeof(BStree_node*));//root.key 
}

//mabado: this might be easier to do recursively!
else{
	int x = 0
	while(i){
	if((**bst)->key > key){//go right     //mabado: can't use > to compare Keys (remember key_comp() )
			(**bst) = (**bst)->right; //mabado: wrong direction, I think
						  //        also, the types don't match
						  //        (**bst).right (note: you need the ".", not the "->")
						  //        ...is of type BStree_node*, but (**bst) is of type BStree_node
			}//if function
	else if((**bst)->key < key){ // go left
		(**bst) = (**bst)->left;
		}
	else if((**bst)->key == key){
		;//identical node already exist
		}
	else{ //must be NULL
		if ((*bst) == NULL){ //current node is NULL
				(**bst).key = key; //root.key 
				(**bst).data = data;//root.data 
				(**bst).left = (BStree_node)malloc(sizeof(BStree_node*));//root.key 
				(**bst).right = (BStree_node)malloc(sizeof(BStree_node*));//root.key 
				break;
				} 
			}
		}// while function
	}//else 
}//bs_tree_insert function



Data_Item *bs_tree_search(BStree bst, Key key){

while(i){
	if((**bst)->key > key){//go right
			(**bst) = (**bst)->right;
			}//if function
	else if((**bst)->key < key){ // go left
		(**bst) = (**bst)->left;
		}
	else if((**bst)->key == key){
		return (**bst)->data;//identical data item node
		}
	else{ //must be NULL
		if ((*bst) == NULL){ //current node is NULL
				//Not found
			printf("Node not found\n");
				return NULL;
				} 
			}
		}// while function
}

