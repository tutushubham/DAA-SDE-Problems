# Question - https://leetcode.com/problems/3sum/

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        counter = collections.Counter(nums)
        nums = sorted(counter)
        ret = []
        for i, num in enumerate(nums):

            if num==0:
                if counter[num] > 2:
                    ret.append([0, 0, 0])

            elif counter[num] > 1 and -2 * num in counter:
                ret.append([num, num, -2 * num])

            if num < 0:
                opposite = -num
                left = bisect_left(nums, opposite - nums[-1], i + 1)
                right = bisect_right(nums, opposite / 2, left)
                for a in nums[left:right]:
                    b = opposite - a
                    if b in counter and a!=b:
                        ret.append([num, a, b])
                        
        return ret