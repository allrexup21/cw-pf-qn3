#include <iostream>
using namespace std;

int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int first, last;
    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the last number: ";
    cin >> last;

    int result = sum_from_to(first, last);
    cout << "The sum of the integers from " << first << " to " << last << " is " << result << endl;

    return 0;
}