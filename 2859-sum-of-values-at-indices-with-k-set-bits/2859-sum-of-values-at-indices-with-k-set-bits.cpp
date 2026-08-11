class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int x=i;
            int count=0;
            while(x>0){
                count+=x &1;
                x=x>>1;
            }
            if(count==k){
                ans+=nums[i];
            }
        }
        return ans;
        
    }
};