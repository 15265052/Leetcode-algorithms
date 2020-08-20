#include <iostream>
#include <vector>
using namespace std;
// class Solution {
// public:
//     vector<int> sortArrayByParityII(vector<int>& A) {
//         vector<int> ans;
//         vector<int> B;
//         for(auto it = A.begin();it != A.end();){
//             if(*it % 2 == 0){
//                 B.push_back(*it);
//                 A.erase(it);
//                 continue;
//             }
//             it++;
//         }
//         for(int i = 0,j = 0; j < B.size();){
//             if ((i+j) % 2 == 0) {
//                 ans.push_back(A[i]);
//                 i++;
//             }else{
//                 ans.push_back(B[j]);
//                 j++;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ans(A.begin(),A.end());
        int odd_index = 1;
        int even_index = 0;
        for (int i = 0; i < A.size(); i++){
            if(A[i] % 2 == 0){
                ans[even_index] = A[i];
                even_index += 2;
            }else{
                ans[odd_index] = A[i];
                odd_index += 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> A = {4,5,2,7};
    vector<int> ans = s.sortArrayByParityII(A);
    cout << ans[0] << ans[1] << ans[2] << ans[3];
    return 0;
}