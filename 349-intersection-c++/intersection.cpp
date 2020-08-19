#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         map<int, int> count;
//         vector<int> ans;
//         for (int i = 0; i < nums1.size(); i++){
//             count[nums1[i]] = 1;
//         }        
//         for (int i = 0; i < nums2.size(); i++){
//             if(count.count(nums2[i])){
//                 ans.push_back(nums2[i]);
//                 count.erase(nums2[i]);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans;
        unordered_set<int> nums1_aux(nums1.begin(),nums1.end());
        for(int i : nums2){
            if(nums1_aux.find(i) != nums1_aux.end() ){
                ans.insert(i);
            }
        }
        return vector<int> (ans.begin(),ans.end());
    }
};