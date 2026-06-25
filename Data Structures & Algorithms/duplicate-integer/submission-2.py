class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # remove duplicates by using a set then convert back to list for comparison
        print(list(set(nums)))
        if len(set(nums)) == len(nums):
            return False
        return True

        
        