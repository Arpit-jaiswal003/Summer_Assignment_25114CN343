#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string= ";
    getline(cin, str);

    int freq[256] = {0};

  
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;

        if (freq[(int)str[i]] > 1) {
            cout << "First repeating character= " << str[i] << endl;
            return 0;
        }
    }

    cout << "No repeating character found." << endl;

    return 0;
}