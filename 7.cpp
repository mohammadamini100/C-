#include <iostream>
using namespace std;

int main() {
    float score;

    cout << "Enter the student's score (0 to 20): ";
    cin >> score;

    if (score >= 18 && score <= 20) {
        cout << "Grade: A" << endl;
    } else if (score >= 16 && score < 18) {
        cout << "Grade: B" << endl;
    } else if (score >= 14 && score < 16) {
        cout << "Grade: C" << endl;
    } else {
        cout << "No grade assigned." << endl;
    }

    return 0;
}