class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        hash = {}
        a = major = 0

        for n in nums:
            hash[n] = 1 + hash.get(n, 0)

            if hash[n] > major:
                a = n
                major = hash[n]

        return a