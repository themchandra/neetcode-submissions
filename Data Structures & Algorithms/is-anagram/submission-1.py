class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        count_dict_s = {}
        count_dict_t = {}

        for i in range(len(s)):
            if s[i] in count_dict_s:
                count_dict_s[s[i]] += 1
            else:
                count_dict_s[s[i]] = 1

        for i in range(len(t)):
            if t[i] in count_dict_t:
                count_dict_t[t[i]] += 1
            else:
                count_dict_t[t[i]] = 1
        
        return count_dict_s == count_dict_t