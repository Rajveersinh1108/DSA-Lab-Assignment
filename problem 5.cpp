#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
        unordered_set<string> seen;
        
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                   
                    char no = board[i][j];
                    string rowKey = "row" + to_string(i) + ":" + no;
                    string colKey = "col" + to_string(j) + ":" + no;
                    string subBoxKey = "box" + to_string(i / 3) + "_" + to_string(j / 3) + ":" + no;
                    
                    if (seen.find(rowKey) != seen.end() || seen.find(colKey) != seen.end() || seen.find(subBoxKey) != seen.end()) {
                        return false; 
                    }
                    
          
                    seen.insert(rowKey);
                    seen.insert(colKey);
                    seen.insert(subBoxKey);
                }
            }
        }
        
        return true; 
    }
};
