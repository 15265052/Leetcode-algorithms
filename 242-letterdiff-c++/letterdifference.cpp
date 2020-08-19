#include <string>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <map>
using namespace std;
// quicksort //slowest
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         quicksort(s, 0, s.size()-1);
//         quicksort(t, 0, t.size()-1);
//         cout << s << t;
//         if(s == t){
//             return true;
//         }
//         return false;
//     }
//     void quicksort(string& s, int lo, int hi){
//         if (hi-lo < 1){
//             return ;
//         }
//         srand((int)time(0));
//         int r_pi = (rand() % (hi-lo)) + lo;
//         Solution::swap(s,lo,r_pi);
//         int pa = Solution::Partition(s,lo,hi);
//         Solution::quicksort(s,lo,pa);
//         Solution::quicksort(s,pa+1,hi);
//         return;
//     }
//     int Partition(string& s,int lo, int hi){
//         int i = lo, j = lo + 1;
//         while(j <= hi){
//             if (s[lo] > s[j]){
//                 i++;
//                 Solution::swap(s,i,j);
//             }
//             j++;
//         }
//         Solution::swap(s,lo,i);
//         return i;
//     }

//     void swap(string&s,int x, int y){
//         char temp = s[x];
//         s[x] = s[y];
//         s[y] = temp;
//         return;
//     }
// };
//hash method// fastest
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int count[26] = {0};
        for(int i = 0; i < s.size(); i++){
            count[s[i]-97] += 1;
            count[t[i]-97] -= 1;
        }
        for(int i = 0; i < 26; i++){
            if(count[i] != 0){
                return false;
            }
        }
        return true;
    }
};
string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
          result.push_back(currentChar);
        }
    }
    return result;
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        string s = stringToString(line);
        getline(cin, line);
        string t = stringToString(line);
        bool ret = Solution().isAnagram(s, t);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}