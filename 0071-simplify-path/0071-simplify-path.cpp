class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string dir;

        stringstream ss(path);

        while (getline(ss, dir, '/')) {

            if (dir == "" || dir == ".") {
                continue;
            }

            if (dir == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } else {
                st.push_back(dir);
            }
        }

        if (st.empty()) {
            return "/";
        }

        string ans;

        for (string folder : st) {
            ans += "/" + folder;
        }

        return ans;
    }
};