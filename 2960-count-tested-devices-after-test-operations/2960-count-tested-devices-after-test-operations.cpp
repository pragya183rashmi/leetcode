class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count=0;
        int currentbattery=0;
        int n=batteryPercentages.size();
        for(int i=0;i<n;i++){
            currentbattery = batteryPercentages[i] - count;

            if(currentbattery > 0){
                count++;
            }
        }
        return count;
        }
        
    
};