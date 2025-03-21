#week04-1.py 二合一的Python版本
#LeetCode 2529.Maximum Count of positive Integer and Negative Interger
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0
        for i in range(len(nums)):
            if nums[i]>0:pos +=1  #正數
            if nums[i]<0:neg +=1  #負數

        return max(pos,neg)  #把大的樹 return回去
