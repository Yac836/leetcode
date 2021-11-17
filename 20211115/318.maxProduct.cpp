#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<string>& words) {
    int len  = words.size();
    vector<int> masks(len);
    for (int i = 0; i < len; i++){
        string word = words[i];
        int wordLen = word.size();
        for (int j = 0; j < wordLen; j++) {
            masks[i] |= 1<< (word[j] - 'a');
        }
    }
    int maxPord = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len ; j ++) {
            if ((masks[i] & masks[j]) == 0) {
                maxPord = max(maxPord, int(words[i].size() * words[j].size()));
            }
        }
    }

    return maxPord;
}
int main() {


}
