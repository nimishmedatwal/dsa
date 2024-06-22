import copy
a=[]
visited=[]

def heuristic(s,g):
    dist=0
    for i in range(len(s)):
        for j in range(len(s[i])):
            if s[i][j]!=g[i][j]:
                dist+=1
    return dist

def find_pos(s):
    for i in range(len(s)):
        for j in range(len(s[0])):
            if s[i][j]==0:
                return [i,j]
    return ([-1,-1])

def compare():
    global a,visited
    for i in range(len(a)):
        if a[i][0]==visited:
            return True
    return False

def generate_children(s):
    