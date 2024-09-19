class Solution:
    def mergeAlternately(self, s1: str, s2: str) -> str:
        res = ""
        i = 0
        while i<len(s1) or i<len(s2):
            if(i<len(s1)):
                res = res+s1[i]
            if(i<len(s2)):
                res = res+s2[i]
            i+=1
        return res
