#include <iostream>
#include <cmath>

using namespace std;

//function declaration
int factorial(int number);

int main() {

    int number;

    cout << "Enter a number : ";
    cin >> number;
    number = static_cast<int>(number);

    cout << "Factorial is : " << factorial(number);

}

//function definition
int factorial(int number) {

    if(number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}



