
import sys
import time
import timeit
import datetime
#==============================================================================
# 
# grid = [[3, 0, 6, 5, 0, 8, 4, 0, 0],
#         [5, 2, 0, 0, 0, 0, 0, 0, 0],
#         [0, 8, 7, 0, 0, 0, 0, 3, 1],
#         [0, 0, 3, 0, 1, 0, 0, 8, 0],
#         [9, 0, 0, 8, 6, 3, 0, 0, 5],
#         [0, 5, 0, 0, 9, 0, 6, 0, 0],
#         [1, 3, 0, 0, 0, 0, 2, 5, 0],
#         [0, 0, 0, 0, 0, 0, 0, 7, 4],
#         [0, 0, 5, 2, 0, 6, 3, 0, 0]]
# 
#==============================================================================

grid = [
[0, 0, 0, 0, 8, 0, 9, 0, 0],
[0, 0, 0, 7, 0, 3, 0, 6, 0],
[7, 2, 8, 9, 0, 0, 0, 5, 0],
[0, 0, 1, 0, 0, 0, 0, 0, 4],
[8, 0, 5, 3, 0, 4, 6, 0, 1],
[4, 0, 0, 0, 0, 0, 7, 0, 0],
[0, 4, 0, 0, 0, 2, 1, 7, 8],
[0, 5, 0, 6, 0, 8, 0, 0, 0],
[0, 0, 7, 0, 9, 0, 0, 0, 0]]

def findEmptyLocation(grid):
    for i in range(len(grid[0])):
        if 0 in grid[i]:
            return [i,grid[i].index(0)]
    return False
        
def issafe(grid,row,col,num):
        #print "row : {0}, col {1}, number: {2}".format(row,col,num)
        for i in range(9):
            if (grid[i][col]==num):
                return False
        
        for i in range(9):
            if (grid[row][i]==num):
                return False
        
        for i in range(3):
           for j in range(3):
                if (grid[i+(row-row%3)][j+(col-col%3)]==num):
                    return False
        
        return True
    
def issolved():
    global grid
    if (findEmptyLocation(grid)):
         empty_location = findEmptyLocation(grid)
         #print "empty location : {0}".format(empty_location)
    else:
         return True
    for i in range(1,10):
        if (issafe(grid,empty_location[0],empty_location[1],i)):
            grid[empty_location[0]][empty_location[1]] = i
          #  print "inside assignment"
            if issolved():
                return True
            else:
           #     print "inside back track"
                grid[empty_location[0]][empty_location[1]] = 0
    #printGrid(grid)
    return False

                
                    
     

def printGrid(grid):
    for row in grid:
        print row
# main code starts here 


printGrid(grid) 
start = time.time()
print "manish " 
if issolved():
    printGrid(grid)
else:
    print "No sulution exists "
end = time.time()