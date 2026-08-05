class LRUCache {
public:
    int cap;
    list<pair<int,int>> lst;  
    unordered_map<int,list<pair<int,int>>::iterator> mp;

    LRUCache(int c) { cap=c; }

    int get(int key) {
        if(!mp.count(key)) return -1;
        lst.splice(lst.begin(), lst, mp[key]);
        return mp[key]->second;
    }

    void put(int key, int val) {
        if(mp.count(key)) {
            mp[key]->second=val;
            lst.splice(lst.begin(), lst, mp[key]);
            return;
        }
        if(lst.size()==cap) {
            mp.erase(lst.back().first);
            lst.pop_back();
        }
        lst.push_front({key,val});
        mp[key]=lst.begin();
    }
};