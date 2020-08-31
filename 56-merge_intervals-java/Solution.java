import java.util.*;
class Solution {
    /**BitSet method */
    // public int[][] merge(int[][] intervals) {
    //     BitSet bitSet = new BitSet();
    //     int max = 0;
    //     for (int[] interval : intervals) {
    //         int temp = interval[1] * 2 + 1;
    //         bitSet.set(interval[0] * 2, temp, true);
    //         max = temp >= max ? temp : max;
    //     }

    //     int index = 0, count = 0;
    //     while (index < max) {
    //         int start = bitSet.nextSetBit(index);
    //         int end = bitSet.nextClearBit(start);

    //         int[] item = {start / 2, (end - 1) / 2};
    //         intervals[count++] = item;

    //         index = end;
    //     }
    //     int[][] ret = new int[count][2];
    //     for (int i = 0; i < count; i++) {
    //         ret[i] = intervals[i];
    //     }

    //     return ret;
    // }
    public int[][] merge(int[][] intervals) {
        if (intervals.length == 0) return new int[0][];
        List<int[]> ans = new ArrayList<>();
        Arrays.sort(intervals,(x,y)->x[0]-y[0]);
        ans.add(intervals[0]);
        for (int[] is : intervals) {
            if (is[0] <= ans.get(ans.size()-1)[1] && is[1] <= ans.get(ans.size()-1)[1]) continue;
            else if (is[0] <= ans.get(ans.size()-1)[1]) ans.get(ans.size()-1)[1] = is[1];
            else ans.add(is);
        }
        return (int[][])ans.toArray(new int[0][]);
    }
    public static void main(String[] args){
        int[][] test = {{1,4},{1,4},{8,10},{15,18}};
        Solution s = new Solution();
        System.out.println(Arrays.deepToString(s.merge(test)));
    }
}