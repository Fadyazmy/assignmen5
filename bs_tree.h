// In the file bs tree.h, define the type BStree node, the type BStree and declare prototypes
// of the operations on BStree.

struct Bst_Node {
	Key key;
	Data_Item data;
	struct Bst_Node *left, *right;
};
typedef struct Bst_Node BStree_node;
typedef BStree_node** BStree;

BStree bs_tree_ini(void);

void bs_tree_insert(BStree bst, Key key, Data_Item data);

Data_Item *bs_tree_search(BStree bst, Key key);

void bs_tree_traversal(BStree bst);


void bs_tree_free(BStree bst);