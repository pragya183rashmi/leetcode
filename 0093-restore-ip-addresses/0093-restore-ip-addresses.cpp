
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        vector<string> path;

        backtrack(s, 0, path, ans);
        return ans;
    }

    void backtrack(string &s, int index,
                   vector<string> &path,
                   vector<string> &ans) {

        if (path.size() == 4) {
            if (index == s.size()) {
                ans.push_back(path[0] + "." + path[1] + "." +
                              path[2] + "." + path[3]);
            }
            return;
        }

        for (int len = 1; len <= 3 && index + len <= s.size(); len++) {
            string part = s.substr(index, len);

            // No leading zeros
            if (len > 1 && part[0] == '0')
                break;

            // Segment must be between 0 and 255
            if (stoi(part) > 255)
                break;

            path.push_back(part);

            backtrack(s, index + len, path, ans);

            // Backtracking
            path.pop_back();
        }
    }
};
