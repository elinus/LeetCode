#include "stdc++.h"
using namespace std;

struct TrieNode {
    std::vector<TrieNode *> children;
    bool isEndOfWord;

    TrieNode() : children(26, nullptr), isEndOfWord(false) {}
};

class WordDictionary {
    TrieNode *root;

   public:
    WordDictionary() { root = new TrieNode(); }

    void addWord(string word) {
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
            if (word[i] == '.') {
                for (int i = 0; i < 26; i++) {
                }

            } else {
                int key = word[i] - 'a';
                if (!curr->children[key]) false;
                curr = curr->children[key];
            }
        }
        return curr && curr->isEndOfWord;
    }
};