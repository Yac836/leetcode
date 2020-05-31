#include <iostream>

#include <map>
#include <vector>
#include <string>

using namespace std;


class Solution {
    public:
        vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

            vector<string> res;
            for(auto word :words) {
                if(match(word,pattern)){
                    res.push_back(word);

                }

            }
            return res;

        }
        bool match(string word,string pattern){
            map<char, char> first;
            map<char,char> sec;
            auto  len = word.size();
            for( int i= 0; i != len ; i++ ) {
                if(!first.count(word[i])) {
                    first[word[i]]= pattern[i];

                }
                if(!sec.count(pattern[i])){
                    sec[pattern[i]] = word[i];

                }
                if(first[word[i]] != pattern[i] || sec[pattern[i]] != word[i]) {
                    return false;

                }

            }
            return true;

        }

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;

}

