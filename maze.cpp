#include <bits/stdc++.h>
using namespace std;
#define n 4

bool solve(int maze[n][n])
{
    int result[n][n] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    //Not found case
    if (isFound(maze, 0, 0, result) == false)
    {
        cout << "Not found" << endl;
        return false;
    }

    printMaze(result);
    return true;
}

bool isFound(int maze[n][n], int x, int y, int result[n][n])
{
    //Goal Case
    if (x == n - 1 && y == n - 1 && maze[x][y] == 1)
    {
        result[x][y] = 1;
        return true;
    }

    //Moving case
    if (isOnMaze(maze, x, y) == true)
    {
        if (result[x][y] == 1)
        {
            return false;
        }

        result[x][y] = 1;

        //Move to +x
        if (isFound(maze, x + 1, y, result) == true)
        {
            return true;
        }
        //Move to -x
        if (isFound(maze, x - 1, y, result) == true)
        {
            return true;
        }
        //Move to +y
        if (isFound(maze, x, y + 1, result) == true)
        {
            return true;
        }
        //Move to -y
        if (isFound(maze, x, y - 1, result) == true)
        {
            return true;
        }

        result[x][y] = 0;
        return false;
    }

    return false;
}

int main()
{
    int maze[n][n] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1},
    };

    if (solve(maze))
    {
        cout << "Found the Solutions" << endl;
    }

    return 0;
}
