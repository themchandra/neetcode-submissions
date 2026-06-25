class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # dict with nums and counts 
        nums_dict = {}
        for num in nums:
            nums_dict[num] = nums_dict.get(num,0) + 1
        
        # sort the dict in descending order
        sorted_dict = dict(sorted(nums_dict.items(), key= lambda item: item[1], reverse = True))
        
        top_k_elements = []
        count = 0
        for key in sorted_dict:
            if count == k:
                break
            top_k_elements.append(key)
            count += 1
        return top_k_elements

            


        