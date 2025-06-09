#include <iostream>
using namespace std;

int main() {
    int score;
    int counts[21] = {0}; // برای نمره‌های ۰ تا ۲۰

    cout << "Enter scores between 0 and 20 (enter -1 to stop):" << endl;

    while (true) {
        cin >> score;

        if (score == -1)
            break;

        if (score >= 0 && score <= 20) {
            counts[score]++;
        } else {
            cout << "Invalid score. Please enter a number between 0 and 20." << endl;
        }
    }

    cout << "\nScore frequencies:" << endl;
    for (int i = 0; i <= 20; i++) {
        if (counts[i] > 0) {
            cout << "Score " << i << ": " << counts[i] << " time(s)" << endl;
        }
    }

    return 0;
}