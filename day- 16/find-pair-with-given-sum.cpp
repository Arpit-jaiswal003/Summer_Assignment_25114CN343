#include <iostream>
#include <unordered_set>
using namespace std;

void findPair(int arr[], int n, int target) {
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (s.find(complement) != s.end()) {
            cout << "Pair found: " << complement << " and " << arr[i] << endl;
            return;
        }

        s.insert(arr[i]);
    }

    cout << "No pair found." << endl;
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    findPair(arr, n, target);

    return 0;
}