import java.util.*;

class Solution {
    public String longestWord(String[] words) {

        HashSet<String> set = new HashSet<>();

        // Put all words into HashSet
        for (String word : words) {
            set.add(word);
        }

        String ans = "";

        for (String word : words) {

            boolean valid = true;

            // Check every prefix
            for (int i = 1; i <= word.length(); i++) {

                String prefix = word.substring(0, i);

                if (!set.contains(prefix)) {
                    valid = false;
                    break;
                }
            }

            // Update answer
            if (valid) {

                if (word.length() > ans.length()) {
                    ans = word;
                }
                else if (word.length() == ans.length()
                         && word.compareTo(ans) < 0) {
                    ans = word;
                }
            }
        }

        return ans;
    }
}