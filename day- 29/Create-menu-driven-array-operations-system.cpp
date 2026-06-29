#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i, pos, value;

    cout << "Enter the number of elements= ";
    cin >> n;

    cout << "Enter array elements= ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Insert Element" << endl;
        cout << "3. Delete Element" << endl;
        cout << "4. Search Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice= ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements= ";
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                cout << "Enter position (1 to " << n + 1 << ")= ";
                cin >> pos;
                cout << "Enter value= ";
                cin >> value;

                if (pos >= 1 && pos <= n + 1) {
                    for (i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];
                    arr[pos - 1] = value;
                    n++;
                    cout << "Element inserted successfully." << endl;
                } else {
                    cout << "Invalid position!" << endl;
                }
                break;

            case 3:
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;

                if (pos >= 1 && pos <= n) {
                    for (i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];
                    n--;
                    cout << "Element deleted successfully." << endl;
                } else {
                    cout << "Invalid position!" << endl;
                }
                break;

            case 4:
                cout << "Enter element to search= ";
                cin >> value;

                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at position " << i + 1 << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Element not found." << endl;
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}