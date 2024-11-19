#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    int count = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "Step " << count++ << endl;
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 120, 140, 160, 180, 200};
    int target = 300;

    int result = linearSearch(arr, target);
    if (result != -1) {
        cout << "Element found at index " << result << "\n";
    } else {
        cout << "Element not found\n";
    }
    return 0;
}
