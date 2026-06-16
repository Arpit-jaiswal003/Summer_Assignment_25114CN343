#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

  
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElement = arr[0];

    
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}