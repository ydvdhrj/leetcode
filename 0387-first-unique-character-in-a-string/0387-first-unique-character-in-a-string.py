class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        d = defaultdict(int)
        for char in s:
            d[char]+=1
        for i in range(len(s)):
            if(d[s[i]]==1):
                return i
        return -1

