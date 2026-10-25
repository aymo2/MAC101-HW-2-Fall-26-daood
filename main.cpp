#include <iostream>
using namespace std;

int main () {
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    if (number == 0){
        cout << number << endl;
    }
    else if (number % 3 == 0 && number % 5 == 0){
        cout << "Fizzbuzz" << endl;
    }
    else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    }
    else {
        cout << number << endl;
    }
    return 0;
}
