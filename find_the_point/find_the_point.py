import os
import sys


def findPoint(px, py, qx, qy):
    rx = 2 * qx - px
    ry = 2 * qy - py
    return rx, ry


if __name__ == '__main__':
    n = int(input())

    for n_itr in range(n):
        pxPyQxQy = input().split()
        px = int(pxPyQxQy[0])
        py = int(pxPyQxQy[1])
        qx = int(pxPyQxQy[2])
        qy = int(pxPyQxQy[3])
        result = findPoint(px, py, qx, qy)