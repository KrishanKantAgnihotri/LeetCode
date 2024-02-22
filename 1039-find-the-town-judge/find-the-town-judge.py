class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        ins = [0]*(n+1)
        out = [0] * (n+1)
        for a in trust:
            out[a[0]]+=1
            ins[a[1]]+=1
        for i in range(1,n+1):
            if ins[i] == n-1 and out[i] == 0:
                return i
        return -1