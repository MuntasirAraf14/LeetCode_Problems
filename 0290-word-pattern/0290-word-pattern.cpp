class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;

        // Split string s into words
        stringstream ss(s);
        while (ss >> word) {
            words.push_back(word);
        }

        // Number of pattern characters and words must be same
        if (pattern.length() != words.size()) {
            return false;
        }

        // Maps for bijection
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern[i];
            string w = words[i];

            // If character already mapped
            if (charToWord.count(c)) {
                if (charToWord[c] != w) {
                    return false;
                }
            } 
            else {
                charToWord[c] = w;
            }

            // If word already mapped
            if (wordToChar.count(w)) {
                if (wordToChar[w] != c) {
                    return false;
                }
            } 
            else {
                wordToChar[w] = c;
            }
        }

        return true;
    }
};