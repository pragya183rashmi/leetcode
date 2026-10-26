
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allCapital = true;
        bool allSmall = true;
        bool firstCapital = true;

        for (int i = 0; i < word.length(); i++) {
            if (word[i] < 'A' || word[i] > 'Z') {
                allCapital = false;
            }

            if (word[i] < 'a' || word[i] > 'z') {
                allSmall = false;
            }

            if (i == 0 && word[i] >= 'a' && word[i] <= 'z') {
                firstCapital = false;
            }

            if (i > 0 && word[i] >= 'A' && word[i] <= 'Z') {
                firstCapital = false;
            }
        }

        return allCapital || allSmall || firstCapital;
    }
};
