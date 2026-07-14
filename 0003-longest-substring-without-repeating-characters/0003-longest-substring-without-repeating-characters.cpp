class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>windows;

        int left = 0, maxLength = 0;

        for(int right=0; right<s.length(); right++){
            while(windows.count(s[right])){
                windows.erase(s[left]);
                left++;
            }
            windows.insert(s[right]);

            maxLength = max(maxLength, right-left+1);
        }
        return maxLength;
    }
};