class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans=0;
        int maxdiagonal=0;


        for(int i=0;i<dimensions.size();i++){
        int l=dimensions[i][0];
        int w=dimensions[i][1];


         
        int diagonal=l*l+w*w;
        int area=l*w;
       if(diagonal>maxdiagonal){
        maxdiagonal=diagonal;
        ans=area;
       }
        else if (diagonal == maxdiagonal) {
                ans = max(ans, area);
            
            }
        }
        return ans;
    }
    
};