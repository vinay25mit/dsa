class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        n=len(word)
        for i in range(n):
            if(word[i]==ch):
                p=word[:i+1][::-1]
                q=word[i+1:]
                return p+q
        return word
