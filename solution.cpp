#include <map>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::map<int,int> num_counters;
        for (int i = 0; i < nums.size(); i++) {
           num_counters[nums.at(i)]++;
           if (num_counters[nums.at(i)] == 3) {
             num_counters.erase(nums.at(i));
           }
         }
         return num_counters.begin()->first;
    }
};
