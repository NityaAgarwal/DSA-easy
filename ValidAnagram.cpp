//https://leetcode.com/problems/valid-anagram/

//METHOD -1 - sorting
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        //sort both the strings s and t, and then check if they are true
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        //check if same or nor
        for (int i = 0; i<s.size(); i++) {
            if (s[i] != t[i]) return false;
        }
        return true;
    }
};
//METHOD -2 - hashmap (unordered_map)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int>m;
        for (auto c : s) {
            if (m.count(c)) m[c] += 1;
            else m[c] = 1;
        }
        for (auto c : t) {
            if (m.count(c) && m[c]!=0) m[c] -= 1;
            else return false;
        }
        return true;
    }
};
//METHOD -3 - hashmap (array)
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        
        // Count the frequency of characters in string s
        for (char x : s) {
            count[x - 'a']++;
        }
        
        // Decrement the frequency of characters in string t
        for (char x : t) {
            count[x - 'a']--;
        }
        
        // Check if any character has non-zero frequency
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        
        return true;
    }
};
