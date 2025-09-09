#include <iostream>
#include <vector>
using namespace std;

bool multiple_occ(int array1[], int length, int key) {
    vector<int> v;

    for (int j = 0; j < length; ++j) {
        if (array1[j] == key) {
            v.push_back(j);
        }
    }

    if (v.size() > 1) {
        cout << "Multiple Occurrences at indices: ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
        return true;

    } else if (v.size() == 1) {
        cout << "Single Occurrence at index: ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
        return true;

    } else {
        cout << "Failed (Key not found)" << endl;
        return false;
    }
}

bool key_absent(int array[], int length, int key) {
    for (int i = 0; i < length; ++i) {
        if (array[i] == key) {
            return false; 
        }
    }
    return true; 
}

int empty_array(int array[], int length) {
    if (length == 0) {
        cout << "Empty array" << endl;
        return 0;
    }
    return 1; 
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]); 
    int key = 3;

    empty_array(array, length);
    multiple_occ(array, length, key);

    if (key_absent(array, length, key)) {
        cout << "Key is absent" << endl;
    } else {
        cout << "Key is present" << endl;
    }

    return 0;
}
