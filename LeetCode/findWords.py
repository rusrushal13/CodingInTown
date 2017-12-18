class Solution:
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        row1 = 'qwertyuiop'
        row2 = 'asdfghjkl'
        row3 = 'zxcvbnm'
        def func(s, row):
            count = 0
            for c in s:
                for w in row:
                    if(c == w):
                        count+=1
            if(count == len(s)):
                return True
            return False
        
        found = []
        for word in words:
            w = word
            word = word.lower()
            if(func(word, row1) or func(word, row2) or func(word, row3)):
                found.append(w)
        return found