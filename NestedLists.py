if __name__ == '__main__':

    grades = [];
    for _ in range(int(input())):
        name = input()
        score = float(input())
        grades.append([score, name])

    grades.sort()
    secondLowest = 0
    for u in grades:
        if(grades[0][0] < u[0]):
            secondLowest = u[0]
            break
    for u in grades:
        if (u[0] == secondLowest): print(u[1]);
