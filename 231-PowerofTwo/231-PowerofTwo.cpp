// Last updated: 4/9/2026, 11:32:02 AM
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        for(int i=0;i<32;i++){
5            if(pow(2,i) == n){
6                return true;
7            }
8        }
9
10        return false;
11    }
12};