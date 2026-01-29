#include <vector>
using namespace std;

class Node {
public:
  int val;
  Node *prev;
  Node *next;
  Node *child;
};

class Solution {

  Node *newNode(int val) {
    Node *node = new Node;
    node->val = val;
    node->prev = nullptr;
    node->next = nullptr;
    node->child = nullptr;
  }

  void dfs(Node *node, vector<int> &flat_vec) {
    if (node) {
      flat_vec.push_back(node->val);
      dfs(node->child, flat_vec);
      dfs(node->next, flat_vec);
    }
  }

public:
  Node *flatten(Node *head) {
    vector<int> flat_vec;
    dfs(head, flat_vec);
    Node *nhead{nullptr}, *prev{nullptr};
    for (int i = 0; i < flat_vec.size(); i++) {
      Node *node = newNode(flat_vec[i]);
      if (nhead == nullptr) {
        nhead = node;
      } else {
        prev->next = node;
        node->prev = prev;
      }
      prev = node;
    }
    return nhead;
  }
};