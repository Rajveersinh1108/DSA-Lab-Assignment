#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{

    public:

        int LongestConsecutive(vector<int>& nums){

            if(nums.empty()){
                return 0;
            }

            unordered_set <int> us;

            for(int n : nums){
                us.insert(n);
            }
            int max_len = 0;

            for(int n : us){
                if(us.find(n-1) == us.end()){
                    int cur_no = n;
                    int cur_len = 1;

                    while(us.find(cur_no + 1) != us.end()){
                        cur_no++;
                        cur_len++;
                    }
                    max_len = max(max_len,cur_len);
                }
            }
            return max_len;
        }
};