casenum = input()
tupList = list()
rankList = list()

for i in range(int(casenum)):
    tupList.append(tuple(input().split(" ")))

for tup in tupList:
    rank = 0
    for r in range(int(casenum)):
        if tup[0] < tupList[r][0] and tup[1] < tupList[r][1]:
            rank += 1
    rankList.append(rank + 1)

for r in rankList:
    print(r)
