def compare_triplets(a, b):
    c = 0
    d = 0
    for i in range(3):
        if a[i] > b[i]:
            c = c + 1
        elif a[i] < b[i]:
            d = d + 1
    return c, d


if __name__ == '__main__':
    a = list(map(int, input().rstrip().split()))
    b = list(map(int, input().rstrip().split()))
    result = compare_triplets(a, b)
    print(' '.join(map(str, result)))
