#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array= ";
    cin >> n;
    vector<int> arr1(n);

    cout << "Enter elements of first sorted array= ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array= ";
    cin >> m;
    vector<int> arr2(m);

    cout << "Enter elements of second sorted array= ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> merged;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        merged.push_back(arr2[j]);
        j++;
    }

    cout << "Merged Sorted Array= ";
    for (int num : merged) {
        cout << num << " ";
    }

    return 0;
}