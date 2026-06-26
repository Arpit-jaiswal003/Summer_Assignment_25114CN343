#include <iostream>
using namespace std;

int main() {
    char answer;
    int score = 0;

    cout << "===== Quiz Application =====" << endl;

    cout << "\n1. What is the capital of India?" << endl;
    cout << "A. Mumbai\nB. New Delhi\nC. Kolkata\nD. Chennai\n";
    cout << "Enter your answer (A/B/C/D)= ";
    cin >> answer;
    if (answer == 'B' || answer == 'b')
        score++;

   
    cout << "\n2. Which language is used for C++ programming?" << endl;
    cout << "A. HTML\nB. Python\nC. C++\nD. JavaScript\n";
    cout << "Enter your answer (A/B/C/D)= ";
    cin >> answer;
    if (answer == 'C' || answer == 'c')
        score++;

   
    cout << "\n3. How many days are there in a week?" << endl;
    cout << "A. 5\nB. 6\nC. 7\nD. 8\n";
    cout << "Enter your answer (A/B/C/D)= ";
    cin >> answer;
    if (answer == 'C' || answer == 'c')
        score++;

   
    cout << "\n===== Quiz Result =====" << endl;
    cout << "Your Score: " << score << " out of 3" << endl;

    if (score == 3)
        cout << "Excellent! You got all answers correct." << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}