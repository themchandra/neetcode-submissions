class Solution:
        
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_dict = {}

        for s in strs:

            # sorted returns list of chars so convert back to a string
            key = "".join(sorted(s))
            
            if key not in anagram_dict:
                anagram_dict[key] = []
            
            anagram_dict[key].append(s)
        
        anagram_list = []

        for value in anagram_dict.values():
            anagram_list.append(value)
        
        return anagram_list
            

                
                

        