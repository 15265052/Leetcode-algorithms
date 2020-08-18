#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> set;
            vector<int> ans;
            for (int i = 0; i < nums.size();i++){ 
                int complement = target - nums[i];
                if (set.find(complement) != set.end() && i != set[complement]){
                    ans.push_back((set[complement]));
                    ans.push_back(i);
                    return ans;
                } 
                set[nums[i]] = i;
            }
            return ans;
        }
};



int main(){
    vector<int> nums = {2,7,11,13};
    int target = 13;
    Solution s;
    vector<int> answer = s.twoSum(nums,target);
    cout << answer[0] << ',' << answer[1] << endl;
    return 0;
}