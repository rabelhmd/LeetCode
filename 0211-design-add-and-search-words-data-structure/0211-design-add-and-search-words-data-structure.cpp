class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool is_end_of_word;
    
    TrieNode() {
        is_end_of_word = false;
    }
};

class WordDictionary {
public:
    TrieNode* root;
    
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(std::string word) {
        TrieNode* node = root;
        for (char &c : word) {
            if (node->children.count(c) == 0) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->is_end_of_word = true;
    }
    
    bool search(std::string word) {
        return searchRecursive(word, root);
    }
    
    bool searchRecursive(std::string word, TrieNode* node) {
        if (word.size() == 0) return node->is_end_of_word;
        
        char& c = word[0];
        if (c == '.') {
            for (auto it = node->children.begin(); it != node->children.end(); ++it) {
                if (searchRecursive(word.substr(1), it->second)) {
                    return true;
                }
            }
            return false;
        }
        if (node->children.count(c) == 0) return false;
        return searchRecursive(word.substr(1), node->children[c]);
    }
};
/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */