def fun(p):
    q=len(set(p))
    d=dict()
    for i in range(len(p)):
        if(p[i] in d):
            d[p[i]].append(i)
        else:
            d[p[i]]=[i]
    return d
    
        
#I THOUGHT WHY NOT TO USE GENERAL CONCEPT OF HASHING , IT WAS GIVEN IF PATTERN IS SAME 
#THEN IT SHOULD BE ADDED IN THE ANS. AND I STORED THE INDEX WHERE ALL CHARECTER OF PATTERN WAS 
#DISTRIBUTED AND SIMPLY COMAPRED WITH ALL GIVEN WORDS ..
class Solution:
    def findAndReplacePattern(self, words: List[str], pattern: str) -> List[str]:
        l=fun(pattern)
        l=sorted(l.values())
        ans=[]
        for i in words:
            q=fun(i)
            if(sorted(q.values())==l):
                ans.append(i)
        return ans
