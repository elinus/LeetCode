#include "stdc++.h"
using namespace std;

struct TrieNode {
    std::vector<TrieNode *> children;
    bool isEndOfWord;

    TrieNode() : children(26, nullptr), isEndOfWord(false) {}
};

class Trie {
    TrieNode *root;

   public:
    Trie() { root = new TrieNode(); }

    void insert(string word) {
        int n = word.size();
        TrieNode *curr = root;
        for (int i = 0; i < n; i++) {
            int key = word[i] - 'a';
            if (!curr->children[key]) curr->children[key] = new TrieNode();
            curr = curr->children[key];
        }
        curr->isEndOfWord = true;
    }

    bool search(string word) {
        int n = word.size();
        TrieNode *curr = root;
        for (int i = 0; i < n; i++) {
            int key = word[i] - 'a';
            if (!curr->children[key]) return false;
            curr = curr->children[key];
        }
        return curr && curr->isEndOfWord;
    }

    bool startsWith(string prefix) {
        int n = prefix.size();
        TrieNode *curr = root;
        for (int i = 0; i < n; i++) {
            int key = prefix[i] - 'a';
            if (!curr->children[key]) return false;
            curr = curr->children[key];
        }
        return curr;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}
