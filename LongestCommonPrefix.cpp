// https://leetcode.com/problems/longest-common-prefix/submissions/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //sort them to get lexicographic order
        sort(strs.begin(), strs.end());

        //this is done because, once ordered, now it is obvious that longest common prefix
        //will come from the common of first and last of the sorted array
        //lexicographically, means ordered like in a dictionary
        //beech waale saare strings mai obviously voh sab hoga jo bhi first aur last mai aayega

        int i = 0;
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];

        while (i<s1.size() && i<s2.size()) {
            if (s1[i] != s2[i]) {
                break;
            }
            else i++;
        }

        return s1.substr(0, i);
    }
};
