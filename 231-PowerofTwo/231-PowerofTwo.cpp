// Last updated: 4/9/2026, 11:41:47 AM
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        if(n == 0) return false;
5        if(n == 1) return true;
6        if(n % 2 != 0) return false;
7
8        return isPowerOfTwo(n / 2);
9    }
10};