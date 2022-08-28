#include <iostream>
using namespace std;

int main() {
    int yourNumber;
    bool isCorrect = false;

    cout << "Please enter a number less than 10: " << endl;
    cin >> yourNumber;

    while( isCorrect == false )  {
        if(yourNumber < 10) {
            isCorrect = true;
            cout << "Thank you for following the directions!" << endl;
        }
        else {
            cout << "You did not follow the directions, try again :(" << endl;
            cin >> yourNumber;
        }
    }
}