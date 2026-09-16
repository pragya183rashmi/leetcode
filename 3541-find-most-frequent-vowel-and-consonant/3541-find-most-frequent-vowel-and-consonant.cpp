class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26] = {0};

        // Frequency count
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int maxVowel = 0;
        int maxConsonant = 0;

        // Find maximum vowel and consonant frequency
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int f = freq[ch - 'a'];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                maxVowel = max(maxVowel, f);
            } 
            else {
                maxConsonant = max(maxConsonant, f);
            }
        }

        return maxVowel + maxConsonant;
    }
};