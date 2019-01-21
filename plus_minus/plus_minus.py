import math
import os
import random
import re
import sys


def plusMinus(arr):
    pos = 0
    neg = 0
    zero = 0
    n = len(arr)
    for i in range(n):
        if arr[i] > 0:
            pos += 1
        elif arr[i] < 0:
            neg += 1
        else:
            zero += 1
    print(str(round(pos/n, n)))
    print(str(round(neg/n, n)))
    print(str(round(zero/n, n)))



if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)