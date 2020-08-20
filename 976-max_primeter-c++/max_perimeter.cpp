#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// class Solution {
// public:
//     int largestPerimeter(vector<int>& A) {
//         sort(A.begin(), A.end());
//         for (int i = A.size()-1; i >= 0; i--){
//             for (int j = i-1; j >= 0; j--){
//                 for (int k = j-1; k >= 0; k--){
//                     if (A[i] + A[j] > A[k] && abs(A[i]-A[j]) < A[k]) {
//                         return A[i] + A[j] + A[k];
//                     }
//                 }
//             }
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());
        for(int i = A.size()-1; i >= 2; i--){
            if(A[i-2] + A[i-1] > A[i]) return A[i-2] + A[i-1] + A[i];
        }
        return 0;
    }
};