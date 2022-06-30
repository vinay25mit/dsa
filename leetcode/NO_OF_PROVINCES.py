def dfs(s,graph,vis,n):
    vis[s]=1
    q=[]
    q.append(s)
    while(len(q)>0):
        curr=q[0]
        q.pop(0)
        for u in range(n):
            if(vis[u]==0 and graph[curr][u]):
                vis[u]=1
                q.append(u)

class Solution:
    def findCircleNum(self, graph: List[List[int]]) -> int:
        n=len(graph)
        vis=[0]*n
        ans=0
        for i in range(n):
            if(vis[i]==0):
                ans+=1
                dfs(i,graph,vis,n)
        return ans
