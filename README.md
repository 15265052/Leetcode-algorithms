# Leetcode-algorithm
### 一、两数相加（twosum）- 1
        主要用了hash表方法，找两个数相加为指定数的组，即找指定数与一个数相减后的数是		否在集合中即可，这样寻找的方法即可想到hash表映射的方法，时间复杂度为O（N），		 空间复杂度为O（1）。

### 二、字母异位（letterdiff）- 242
        一种方法是用排序算法将两个字符串排序过后，比较两个字符串是否相等，这也是一开始		   就想到的方法，但排序算法所需时间复杂度为O（NlogN），比较两字符串为O（N),故其		  总时间复杂度为O（NlogN），空间复杂度为O（1）。第二种方法（最优解）是hash方		 法，用哈希表记录每个字母在两个字符串中的位置，一个字符串累加，一个字符串累减，		最后检查hash表是否全为0即可。由于一共循环了N+26次，累加和累减是常数次操作，		  故时间复杂度是O（N），空间复杂度近似为常数（因为只存了26个字母的hash表）。

### 三、两个数组交集 | - 349
        一种方法是我自己想的，先用hash表存储一个集合的所有元素（作为主键），再遍历另		一个数组寻找是否有相同的元素，遍历了两次，时间复杂度为O(N),空间复杂度也为			O（N）。第二种网上的解法是用unordered_set，思想差不多，复杂度也相同，不过		unordered_set可以自动排除相同元素。

### 四、按奇偶排序（odd_even_sort)
        我自己想到的方法是把奇偶数分开来，最后奇数位放奇数，偶数位放偶数。但这样需要循         环两次，且消耗了很多空间。最好的方法即先存一份原数组的备份，然后用奇偶索引改		  变，这样只用循环一次，且空间内存占用也不大。

### 五、三角形最大周长（max_primeter)
		自己想的方法需要三层嵌套循环，时间复杂度为O（N^3)，太蠢了。最优解是先排好序		后，从数组末尾值设为c开始循环，将其前两个元素作为a，b，找到满足三角形条件的三		边，这样的三边一定是最大的，因为如果满足条件，排好序后的a,b,c之和一定是最大		的，不满足的话，比a,b小的元素更不可能满足了。时间复杂度仅为排序的					O（NlogN）。
### 六、合并区间
		该题用了一个合并区间的算法：先按左端点对区间进行排序，然后每两个区间有三种情		  况，一种是前区间和后区间互不相交，这种情况把后区间直接添加到答案列表中即可；第		 二种是两区间有相交，那么只要把前区间的右端点更新为后区间的右端点就行；第三种情		况是前区间包含后区间，那么就跳过后区间即可。这个算法的复杂度是以排序为主导，故		   时间复杂度是我采用的快排的O（NlogN），空间复杂度为O（logN）。启示：遇事不决		  可以先画张图；解题时可以一步步来，不要总想着宏观全局。Ps：注释中的BitSet方法		是一个大神的解法，待学~~~~