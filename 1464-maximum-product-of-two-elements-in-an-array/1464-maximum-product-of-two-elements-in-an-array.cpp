class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstlargest =0;
        int secondlargest =0;
        for(int x:nums){
            if(x>=firstlargest){
                secondlargest=firstlargest;
                firstlargest=x;
            }else if
            ( x>secondlargest){
                secondlargest=x;
            }
            }
            return (firstlargest-1)*(secondlargest-1);

            

        }
    
};