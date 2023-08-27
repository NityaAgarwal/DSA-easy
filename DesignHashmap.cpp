// https://leetcode.com/problems/design-hashmap/

// SOLUTION 1 : time complexity wise it is poor, space complexity wise it performs better than solutions by fellow coders. Easy to understand, quite basic, coded it myself
class MyHashMap {
private: 
vector <pair<int,int>> v;
public:
    MyHashMap() {
        
    }
    void put(int key, int value) {
        int i = 0;
        for (; i<v.size(); i++) {
            if (v[i].first == key) {
                v[i].second = value;
                return ;
            }
        }
        v.push_back({key, value});
        return ;
    }
    
    int get(int key) {
        int i = 0;
        for (; i<v.size(); i++) {
            if (v[i].first == key) {
                return v[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int i = 0;
        int index_to_erase = 0;
        for (; i<v.size(); i++) {
            if (v[i].first == key) {
                index_to_erase = i;
                v.erase(v.begin()+index_to_erase);
                return ;
            }
        }
    }
};

// SOLUTION 2 : time wise it is better optimised, space wise not so good. Code generated using help of chatgpt, I myself though havent properly understood it yet. Storing here for future reference
class MyHashMap {
private:
    static const int bucketSize = 10000; // Size of the hash map array
    std::vector<std::list<std::pair<int, int>>> hashMap;

    // Helper function to find a key in a bucket and return its iterator
    std::list<std::pair<int, int>>::iterator findInBucket(int key, std::list<std::pair<int, int>>& bucket) {
        return std::find_if(bucket.begin(), bucket.end(), [key](const std::pair<int, int>& p) {
            return p.first == key;
        });
    }

public:
    MyHashMap() : hashMap(bucketSize) {
        
    }
    
    void put(int key, int value) {
        int index = key % bucketSize;
        auto& bucket = hashMap[index];
        auto it = findInBucket(key, bucket);
        
        if (it != bucket.end()) {
            it->second = value;
        } else {
            bucket.push_back({key, value});
        }
    }
    
    int get(int key) {
        int index = key % bucketSize;
        auto& bucket = hashMap[index];
        auto it = findInBucket(key, bucket);
        
        if (it != bucket.end()) {
            return it->second;
        }
        
        return -1;
    }
    
    void remove(int key) {
        int index = key % bucketSize;
        auto& bucket = hashMap[index];
        auto it = findInBucket(key, bucket);
        
        if (it != bucket.end()) {
            bucket.erase(it);
        }
    }
};
