class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n

        "rotated is initialized as a new array of length n filled with zeros."
        
        rotated = [0] * n
        

        for i in range(n):
            rotated[(i + k) % n] = nums[i]

        for i in range(n):
            nums[i] = rotated[i]
        