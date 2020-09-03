class Solution {
    public void sortColors(int[] nums) {
        // if(nums.length <= 1) return;
        // int[] count = new int[3];
        // for (int i : nums) {
        //     count[i]++;
        // }
        // for(int i = 0; i < 3; i++){
        //     if(count[i] != 0) {
        //         nums[i] = i;
        //         count[i]--;
        // }
        // return;
        int p_0 = 0,curr = 0;
        int p_1 = nums.length - 1;
        while(curr <= p_1){
            if(nums[curr] == 0){
                nums[curr] = nums[p_0];
                nums[p_0] = 0;
                p_0++;
                curr++;
            }else if(nums[curr] == 2){
                nums[curr] = nums[p_1];
                nums[p_1] = 2;
                p_1--;
            }else{
                curr++;
            }
        }
        return;
    }
    }
