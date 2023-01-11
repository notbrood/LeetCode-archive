class MyHashMap {
public:
    unordered_map<int, int> umap;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        umap[key] = value;
    }
    
    int get(int key) {
        for(auto i: umap){
            if(i.first == key){
                return i.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        umap.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */