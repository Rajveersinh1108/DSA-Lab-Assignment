#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> nm;
        
        
        for (int i = 0; i < nums.size(); ++i) {
            
            int complement = target - nums[i];
            
           
            if (nm.find(complement) != nm.end()) {
             
                return {nm[complement], i};
            }
          
            nm[nums[i]] = i;
        }
        
 
        return {};
    }
};
