#include <bits/stdc++.h>
using namespace std;
#define n 4

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