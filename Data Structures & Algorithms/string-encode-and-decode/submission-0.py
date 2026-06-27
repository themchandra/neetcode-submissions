class Solution:

    def encode(self, strs: List[str]) -> str:
        new_strs = []
        for s in strs:
            s = str(len(s)) + "#" + s
            new_strs.append(s)
        
        encode_str = "".join(new_strs)
        return encode_str
            
    def decode(self, s: str) -> List[str]:
        i = 0
        len_str = []
        return_list = []

        while i < len(s): 
            # gathering the length of the next string
            while s[i] != "#":
                len_str.append(s[i])
                i += 1
            length = int("".join(len_str)) 
            len_str.clear()

            # move pointer to start of data
            i += 1
            append_str = ""
            for j in range(i,i+length):
                append_str += s[j]
            return_list.append(append_str)
            
            # advance the pointer
            i = i+length
        
        return return_list

        
       


        

