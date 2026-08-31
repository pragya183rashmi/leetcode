class Solution {
public:
    string truncateSentence(string s, int k) {
        string result = "";
        int count = 0;

        for(char ch : s) {
            if(ch == ' ') {
                count++;

                if(count == k)
                    break;
            }

            result += ch;
        }

        return result;
    }
};