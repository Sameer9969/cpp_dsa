#include <iostream>
using namespace std;
int countPaths(int i,int j,int m,int n){
    if (i == m - 1 && j == n - 1)
        return 1;

    
    if (i >= m || j >= n)
        return 0;

    return countPaths(i + 1, j, m, n) + countPaths(i, j + 1, m, n);
}

void printPaths(int i, int j, int rows, int cols, string path) {

    // Reached destination
    if (i == rows - 1 && j == cols - 1) {
        cout << path << endl;
        return;
    }

    // Move Down
    if (i < rows - 1)
        printPaths(i + 1, j, rows, cols, path + "D");

    // Move Right
    if (j < cols - 1)
        printPaths(i, j + 1, rows, cols, path + "R");
}

int main() {

    int rows = 3, cols = 3;

    printPaths(0, 0, rows, cols, "");
    cout<<"Total paths:"<<countPaths(0, 0, rows, cols);

    return 0;
}