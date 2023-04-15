class Solution {
public:
    class TrieNode{
        public:
        unordered_map<char,TrieNode*> child;
        bool is_end;
        TrieNode(){
            is_end = false;
        }
    };
    class Trie{
        
        TrieNode* root;
        public:
        Trie(){
            root= new TrieNode();
        }
        void insert( string s){
            TrieNode* cur = root;
            for(char c : s){
                if(cur->child[c] == NULL){
                    cur->child[c] = new TrieNode();
                }
                cur = cur->child[c];
            }
            cur->is_end = true;
        }
        bool search(string s){
            TrieNode* cur = root;
            for(char c: s){
                if(cur->child[c]==NULL){
                    return false;
                }
                cur = cur->child[c];
            } 
            return (cur->is_end);
        }
        string lcp(){
            TrieNode* cur  = root;
            string ans = "";
            while(cur->is_end==false){
                int c1 = 0 ; 
                int c2 = 0;
                char c = 'a';
                for(auto ch : cur->child){
                    if(ch.second==NULL) c1++;
                    c2++;
                    c = ch.first;
                }
                if(c2!=1) return ans;
                ans+=c;
                cur = cur->child[c];
            } 
            return ans;
        }
    };
    string longestCommonPrefix(vector<string>& strs) {
        Trie mytrie;

        for(auto c : strs){
            mytrie.insert(c);
        }
        return mytrie.lcp();
    }
};