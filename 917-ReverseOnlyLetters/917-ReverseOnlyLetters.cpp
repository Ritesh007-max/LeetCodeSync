// Last updated: 4/9/2026, 12:08:09 PM
1class Solution {
2public:
3bool isChar(char c) {
4        c = tolower(c);
5        return (c >= 65 && c <= 90 || c >= 97 && c <= 122);
6    }
7
8    string reverseOnlyLetters(string s) {
9        int i = 0;
10        int j = s.size() - 1;
11
12        while (i < j) {
13            
14            while (i < j && !isChar(s[i])) {
15                i++;
16            }
17
18            while (i < j && !isChar(s[j])) {
19                j--;
20            }
21
22            swap(s[i], s[j]);
23            i++;
24            j--;
25        }
26
27        return s;
28    }
29};