class Trie {
public:
    unordered_map <char, vector <string> > Mp;
    unordered_map <string,int> src;
    
    Trie() {
        Mp.clear();
    }
    
    void insert(string word) {
        Mp[word[0]].push_back(word);
        src[word] += 1;
    }
    
    bool search(string word) {
        if(src[word]) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        for(auto x: Mp[prefix[0]]) {
            if(x.find(prefix) == 0) return true;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */