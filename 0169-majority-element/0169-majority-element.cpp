class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, canditate = 0;
        for(int num : nums){
            if(count == 0){
                canditate = num;
            }
            if(canditate == num){
                count++;
            }else{
                count--;
            }
        }
        return canditate;
    }
};