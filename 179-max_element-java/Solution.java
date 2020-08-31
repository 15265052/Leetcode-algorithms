import java.util.*;
class Solution {
    public String largestNumber(int[] nums) {
        String[] nums_str = new String[nums.length];
        for (int i = 0; i < nums.length;i++) {
            nums_str[i] = ((Integer) nums[i]).toString();
        }
        Arrays.sort(nums_str,(x,y)->{
            String str1 = x + y;
            String str2 = y + x;
            return -(str1.compareTo(str2));
        });
        StringBuilder ans = new StringBuilder();
        for (String string : nums_str) {
            ans.append(string);
        }
        String str_ans = ans.toString();
        if(str_ans.charAt(0) == '0') str_ans = "0";
        return str_ans;
    }
}