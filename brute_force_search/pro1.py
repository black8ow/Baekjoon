def solution(answers):
    answer = []
    math = [[1,2,3,4,5], [2,1,2,3,2,4,2,5], [3,3,1,1,2,2,4,4,5,5]]

    val = []

    for ind in math:
        cnt = 0
        indexcnt = 0
        for i in range (0, len(answers)):
            if (indexcnt == len(ind)):
                indexcnt = 0
            if answers[i] == ind[indexcnt]:
                cnt += 1
            indexcnt += 1
        val.append(cnt)

    print(len(math[1]))

    if val[0] == max(val):
        answer.append(1)

    if val[1] == max(val):
        answer.append(2)

    if val[2] == max(val):
        answer.append(3)

    return answer