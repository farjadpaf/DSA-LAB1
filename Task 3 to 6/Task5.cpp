#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> generatePascal(int n) {
    vector<vector<int>> triangle;

    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    return triangle;
}


void printPascal(const vector<vector<int>>& triangle) {
    for (auto row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Test case n = 0 (should be empty):" << endl;
    auto t0 = generatePascal(0);
    printPascal(t0);
    cout << endl;

    
    cout << "Test case n = 1:" << endl;
    auto t1 = generatePascal(1);
    printPascal(t1);
    cout << endl;

   
    cout << "Test case n = 5:" << endl;
    auto t5 = generatePascal(5);
    printPascal(t5);
    cout << endl;

    
    cout << "Row 5 (expected 1 4 6 4 1):" << endl;
    for (int num : t5[4]) { 
        cout << num << " ";
    }
    cout << endl;

    return 0;
}