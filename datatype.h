// In the file datatype.h, define the type Data Item, the type Sub Key, the type Key, and
// declare prototypes of the functions for type Data Item and type Key.


typedef float Data_Item;
typedef char* Sub_Key;
typedef struct {Sub_Key key1; Sub_Key key2;} Key;

int key_comp(Key key1, Key key2);
Key key_gen(Sub_Key key1, Sub_Key key2);
void key_print(Key key);
void data_print(Data_Item data);
