#include <iostream>
using namespace std;

int main() {
    double mark;
    cout << "Enter your mark:";
    cin >> mark;

    if (!(cin))
        cout << "is not mark";

    else if (mark < 0 || mark>100)
        cout << "the mark not accept";

    else if (mark >= 90)
        cout << "excellent";
    else if (mark >= 80)
        cout << "very good";
    else if (mark >= 70)
        cout << "good";
    else if (mark >= 60)
        cout << "medium";
    else if (mark >= 50)
        cout << "pass";
    else
        cout << "fail";

    return 0;
}