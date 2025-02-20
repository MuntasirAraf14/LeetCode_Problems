class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 1
        for j in range(1, len(nums)):
            if nums[j] != nums[i-1]: 
                """
                taking i & j same value then comparing i-1th value with jth value
                """
                nums[i] = nums[j]
                i += 1
        return i