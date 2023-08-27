//https://leetcode.com/problems/verifying-an-alien-dictionary/

class Solution {
public:
    bool compare(string a, string b, unordered_map <char, int> m){
        //a = prev
        //b = current
            int length = (a.size()<b.size()) ? a.size() : b.size();
            for (int i = 0; i<length; i++) {
                if (m[a[i]]<m[b[i]]) return true;
                if (m[a[i]]>m[b[i]]) return false;
            }
            return (a.size() <= b.size());
        }

    bool isAlienSorted(vector<string>& words, string order) {
        if (words.size()==1) return true;

        //storing the new lexical order 
        unordered_map <char, int> m;
        for (int i = 0; i<26; i++) {
            m[order[i]] = i;
        }
        

        //pairwise compare all the strings in 'words' vector
        for (int i = 1; i<words.size(); i++) {
            //compare words[i] and words[i-1]
            if (!compare(words[i-1], words[i], m)) return false;
        }
        return true;
    }
};
