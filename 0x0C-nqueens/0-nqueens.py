#!/usr/bin/python3
"""[N NKK]
"""
import sys


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print('Usage: nqueens N')
        exit(1)
    try:
        N = int(sys.argv[1])

    except ValueError:
        print("N must be a number")
        exit(1)

    if N < 4:
        print("N must be at least 4")
        exit(1)

    k = 1

    def saved(board, row, col):
        """[saved]
        """
        for i in range(col):
            if board[row][i] == 1:
                return False
        for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
            if board[i][j] == 1:
                return False
        for i, j in zip(range(row, N, 1), range(col, -1, -1)):
            if board[i][j] == 1:
                return False
        return True

    def printSS(board):
        """[printSS]
        """
        queens = []
        global k
        k = k + 1
        for i in range(N):
            for j in range(N):
                if board[i][j] == 1:
                    queens.append([i, j])
        print(queens)

    def Nqutil(board, col):
        """[Nqutil]
        """
        if col == N:
            printSS(board)
            return True
        res = False
        for i in range(N):
            if saved(board, i, col):
                board[i][col] = 1
                res = Nqutil(board, col + 1) or res
                board[i][col] = 0
        return res

    def solveN():
        """[solveN]
        """
        board = [[0 for j in range(N)] for i in range(N)]

        if Nqutil(board, 0) is False:
            pass
            return False
        return True

solveN()
