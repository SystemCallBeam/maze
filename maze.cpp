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
