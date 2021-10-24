#include <string>
#include <vector>
using namespace std;
struct TrieNode {
    TrieNode () {
        child = vector<TrieNode*> (26, nullptr);
        isEnd = true;
    }
    void insert(TrieNode *root, std::string word) {
        if (word.size() == 0) {
            return;
        }
        TrieNode *node = root; 
        for (auto i : word) {
            if (node->child[i - 'a'] == nullptr) {
                node->child[i - 'a'] = new TrieNode();
                node->isEnd = false;
            }
            node = node->child[i - 'a'];
        }

        node->isEnd = true;
        
    }
    bool search(TrieNode *root, std::string word) {
        return dfs(root, 0, word);
    }
    bool dfs(TrieNode *root, int i , std::string word) {
        if (i == word.size()) {
            return root->isEnd;
        }
        if (root->child[word[i] - 'a'] != nullptr) {
           return dfs(root->child[word[i] - 'a'], i + 1, word); 
        }
        return false;
    }
    vector<TrieNode*>  child;
    bool isEnd;
    
};
int main() {

    return 0;
}
