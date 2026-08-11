class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int last = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]+1){
                break;
            }
            
            last += nums[i];
        }

        for(int i=last;i<=51;i++){
            bool flag = true;
            for(int j=0;j<n;j++){
                if(nums[j] == i){
                    flag = false;
                    break;
                }
            }
            if(flag)
                return i;
        }

        return last;
    }
};