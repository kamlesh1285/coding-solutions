# Reverse Vowels of a String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, reverse only all the vowels in the string and return it.

The vowels are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`, and they can appear in both lower and upper cases, more than once.

 

 **Example 1:** 

 **Input:**  s = "IceCreAm"

 **Output:**  "AceCreIm"

 **Explanation:** 

The vowels in `s` are `['I', 'e', 'e', 'A']`. On reversing the vowels, s becomes `"AceCreIm"`.

 **Example 2:** 

 **Input:**  s = "leetcode"

 **Output:**  "leotcede"

 

 **Constraints:** 

- 1 <= s.length <= 3 * 105
- s consist of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.2 MB (beats 73.55%)  
**Submitted:** 2026-09-28T15:11:57.878Z  

```cpp
class Solution {
public:
    string reverseVowels(string s) {

        int start=0;
        int end = s.size()-1;

        string vowels="AEIOUaeiou";
        while(start<end){
            // string::npos is returned by .find() when char is not present in given string
            while(start<end && vowels.find(s[start])==string::npos) start++;
            while(start<end && vowels.find(s[end])==string::npos) end--;
            
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-vowels-of-a-string/)