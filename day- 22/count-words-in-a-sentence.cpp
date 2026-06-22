#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int count = 0;

    cout << "Enter a sentence= ";
    getline(cin, sentence);

    
    for (int i = 0; i < sentence.length(); i++) {
        if ((i == 0 && sentence[i] != ' ') ||
            (sentence[i] != ' ' && sentence[i - 1] == ' ')) {
            count++;
        }
    }

    cout << "Number of words: " << count << endl;

    return 0;
}