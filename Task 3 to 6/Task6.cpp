#include <iostream>
#include <vector>
using namespace std;


int findMode( vector<int>& arr) {
    if (arr.empty()){return -1; } 

    int mode = arr[0];
    int maxFreq = 0;

    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main() {
    
    vector<int> a1 = {1, 2, 2, 3, 4};
    cout << "Mode of {1,2,2,3,4}: " << findMode(a1) << endl;

    
    vector<int> a2 = {1, 1, 2, 2, 3};
    cout << "Mode of {1,1,2,2,3}: " << findMode(a2) << endl; 

    
    vector<int> a3 = {};
    cout << "Mode of empty array: " << findMode(a3) << endl; 

    return 0;
}