if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    arr.reverse()
    largest = arr[0]
    secondLargest = largest
    for u in arr:
        if (u < largest): secondLargest = u; break;
    print(secondLargest)
