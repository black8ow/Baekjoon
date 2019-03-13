import itertools

def solution(numbers):

    nums = []
    permus = []
    primeint = []

    numlist = []

    for i in numbers:
        nums.append(i)

    for i in range(1, len(nums) + 1):
        for perm in itertools.permutations(nums, i):
            pint = int("".join(list(perm)))
            permus.append(pint)

    maxpermu = max(permus)

    for k in range(0, maxpermu + 1):
        numlist.append(0)
    if numlist[0] == 0:
        numlist[0] = -1
    if numlist[1] == 0:
        numlist[1] = -1

    if maxpermu > 1:
        for i in range(2, maxpermu + 1):
            if numlist[i] == -1:
                continue
            for j in range(i + i, maxpermu + 1, i):
                numlist[j] = -1

    for num in permus:
        if numlist[num] != -1:
            primeint.append(num)

    return len(set(primeint))
