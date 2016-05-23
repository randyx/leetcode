class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        nums = 0
        k = 0
        list1 = [[0 for col in range(9)] for row in range(9)]
        list2 = [[0 for col in range(9)] for row in range(9)]
        list3 = [[0 for col in range(9)] for row in range(9)]
        for i in range(9):
            for j in range(9):
                if not board[i][j] == '.':
                    nums = int(board[i][j])-1
                    k = i / 3 * 3 + j / 3   
                    if list1[i][nums] == 1 or list2[j][nums] == 1 or list3[k][nums] == 1:
                        return False
                    list1[i][nums] = 1
                    list2[j][nums] = 1
                    list3[k][nums] = 1
        return True