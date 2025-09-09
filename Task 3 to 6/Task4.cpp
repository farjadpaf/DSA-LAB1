#include <iostream>
#include <string>
using namespace std;

string matchPattern(const string &text, const string &pattern) {
    int n = text.size();
    int m = pattern.size();

    if (m == 0) {
        return "EMPTY PATTERN";
    }

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) { 
            if (i == 0) return "START";
            else if (i == n - m) return "END";
            else return "MIDDLE";
        }
    }

    return "NOT FOUND";
}

int main() {
    
    cout << "Case 1: " << matchPattern("hello world", "hello") << endl; 
    cout << "Case 2: " << matchPattern("hello world", "world") << endl; 
    cout << "Case 3: " << matchPattern("hello world", "lo wo") << endl; 
    cout << "Case 4: " << matchPattern("hello world", "xyz") << endl;   
    cout << "Case 5: " << matchPattern("hello world", "") << endl;      
    return 0;
}