#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

class Solution{

    public:
     
        int firstUniqChar(string s){

            unordered_map <char , int> fr_s;

            for(char ch : s){
                fr_s[ch]++;
            }

            for(int i = 0;i < s.size();i++){
                if(fr_s[s[i]] == 1){
                    return i;
                }
            }

            return -1;
        }
};