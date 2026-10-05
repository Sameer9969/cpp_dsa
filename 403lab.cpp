#include <iostream>
using namespace std;

void printPaths(int i, int j, int rows, int cols, string path, bool visited[10][10]) {

    if (i < 0 || j < 0 || i >= rows || j >= cols)
        return;

    if (visited[i][j])
        return;


    if (i == rows - 1 && j == cols - 1) {
        cout << path << endl;
        return;
    }

   
    visited[i][j] = true;

    printPaths(i + 1, j, rows, cols, path + "D", visited);

    
    printPaths(i, j + 1, rows, cols, path + "R", visited);

    
    printPaths(i, j - 1, rows, cols, path + "L", visited);

    printPaths(i - 1, j, rows, cols, path + "U", visited);

    visited[i][j] = false;
}

int main() {

    int rows = 3, cols = 3;

    bool visited[10][10] = {};

    printPaths(0, 0, rows, cols, "", visited);

    return 0;
}