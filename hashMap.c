
typedef struct {
    int key[1000001];
    int value[1000001];
} MyHashMap;


MyHashMap* myHashMapCreate() {
    MyHashMap *o = calloc(1,sizeof(MyHashMap));
    return o;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
  
}

int myHashMapGet(MyHashMap* obj, int key) {
  
}

void myHashMapRemove(MyHashMap* obj, int key) {
  
}

void myHashMapFree(MyHashMap* obj) {
    
}

/**
 * Your MyHashMap struct will be instantiated and called as such:
 * MyHashMap* obj = myHashMapCreate();
 * myHashMapPut(obj, key, value);
 
 * int param_2 = myHashMapGet(obj, key);
 
 * myHashMapRemove(obj, key);
 
 * myHashMapFree(obj);
*/