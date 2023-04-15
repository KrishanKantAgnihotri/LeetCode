class TrieNode{
    public:
    TrieNode* child[26];
    bool is_end;
    TrieNode(){
        is_end = false;
        for(int i = 0 ;i<26 ;i++){
            this->child[i] = NULL;
        }
    }
};
class Trie {
    TrieNode* root ;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur = root ; 
        for(auto c:word){
            if(cur->child[c-'a']==NULL){
                cur->child[c-'a'] = new TrieNode;
             }
             cur = cur->child[c-'a'];
        }
        cur->is_end = true; 
    }
    
    bool search(string word) {
        TrieNode* cur = root;
        for(auto c:word){
            if(cur->child[c-'a'] == NULL) {
                return false;
            }
            cur = cur->child[c-'a'];
            }        
            return cur->is_end;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = root;
        for(auto c:prefix){
            if(cur->child[c-'a']==NULL){
                return false;
            }
            cur = cur->child[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */