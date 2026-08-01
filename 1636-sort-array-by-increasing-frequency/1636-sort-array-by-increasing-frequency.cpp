class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> freq;

        for (int x : nums)
            freq[x]++;

        sort(nums.begin(), nums.end(), [&](int a, int b) {

            if (freq[a] == freq[b])
                return a > b;      // same frequency -> smaller number first

            return freq[a] < freq[b];   // higher frequency first
        });

        return nums;
    }
};