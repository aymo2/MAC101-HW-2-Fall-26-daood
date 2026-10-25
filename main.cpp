#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter a Number Please" << endl;
    cin >> num;
    if (num == 0){
        cout << num << endl;
    }
    else if (num % 3 == 0 && num % 5 == 0){
        cout << "Fizzbuzz" << endl;
    }
    else if (num % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if (num % 5 == 0) {
        cout << "Buzz" << endl;
    }
    else {
        cout << num << endl;
    }
    return 0;
}
