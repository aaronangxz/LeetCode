class Solution:
    def reverseString(self, s: List[str]) -> None:
        i = 0;
        
        while(i < len(s) / 2):
            tmp = s[i]
            s[i] = s[len(s) - (1 + i)]
            s[len(s) - (1 + i)] = tmp
            i = i + 1

        """
        Do not return anything, modify s in-place instead.
        """
        