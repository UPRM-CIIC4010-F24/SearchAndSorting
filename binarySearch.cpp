#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    int count = 0;
    while (left <= right) {
        int mid = (left + right) / 2; // Prevents potential overflow
        cout << "Step " << count++ << endl;
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1; // Move to the right half
        } else {
            right = mid - 1; // Move to the left half
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 120, 140, 160, 180, 200};
    int target = 300;

    // Ensure the array is sorted for binary search
    sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element found at index " << result << "\n";
    } else {
        cout << "Element not found\n";
    }
    return 0;
}
