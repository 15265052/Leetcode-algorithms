# Leetcode-algorithm
### 一、两数相加（twosum）- 1
        主要用了hash表方法，找两个数相加为指定数的组，即找指定数与一个数相减后的数是否在集合中即可，这样寻找的方法即可想到hash表映射的方法，时
        间复杂度为O（N），空间复杂度为O（1）。

### 二、字母异位（letterdiff）- 242
        一种方法是用排序算法将两个字符串排序过后，比较两个字符串是否相等，这也是一开始就想到的方法，但排序算法所需时间复杂度为O（NlogN），
        比较两字符串为O（N),故其总时间复杂度为O（NlogN），空间复杂度为O（1）。
        第二种方法（最优解）是hash方法，用哈希表记录每个字母在两个字符串中的位置，一个字符串累加，一个字符串累减，最后检查hash表是否全为0
        即可。由于一共循环了N+26次，累加和累减是常数次操作，故时间复杂度是O（N），空间复杂度近似为常数（因为只存了26个字母的hash表）。
### 三、两个数组交集 | - 349
        一种方法是我自己想的，先用hash表存储一个集合的所有元素（作为主键），再遍历另一个数组寻找是否有相同的元素，遍历了两次，时间复杂度为O(N),空间复杂度也为O（N）。第二种网上的解法是 
        用unordered_set，思想差不多，复杂度也相同，不过unordered_set可以自动排除相同元素。

### 三、按奇偶排序（odd_even_sort)
        我自己想到的方法是把奇偶数分开来，最后奇数位放奇数，偶数位放偶数。但这样需要循环两次，且消耗了很多空间。最好的方法即先存一份原数组的备份，然后用奇偶索引改变，这样只用循                 环一次，且空间内存占用也不大。
