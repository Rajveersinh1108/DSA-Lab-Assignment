#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

class Solution{

    public:

    vector<int> topKFrequent(vector<int>&nums,int k){
       
    std::unordered_map<int, int> fr;
    for (int n : nums) {
        fr[n]++;
    }

   
    vector<pair<int, int>> v1(fr.begin(), fr.end());

    
    std::sort(v1.begin(), v1.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; 
    });

    
    std::vector<int> v;
    for (int i = 0; i < k; i++) {
        v.push_back(v1[i].first); 
    }

    return v;
    }
};
