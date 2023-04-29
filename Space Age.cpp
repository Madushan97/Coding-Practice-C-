#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    double Mercury = 0.2408467;
    double Venus =  0.61519726;
    double Earth = 1;
    double Mars =  1.8808158;
    double Jupiter =  11.862615;
    double Saturn = 29.447498;
    double Uranus =  84.016846;
    double Neptune =  164.79132;

    long earthSecond = 31557600;
    long enteredSecond;

    cout<< "Enter age is second : ";
    cin >> enteredSecond;

    cout << "you're " << round((enteredSecond / earthSecond)*100)/100 <<" Earth-years old."<<endl;
    cout << "you're " << round((enteredSecond / (Mercury * earthSecond)) * 100) / 100 <<" Mercury-years old."<<endl;
    cout << "you're " << round((enteredSecond / (Venus * earthSecond)) * 100) / 100 <<" Venus-years old."<<endl;
    cout << "you're " << round((enteredSecond / (Mars * earthSecond)) * 100) / 100 <<" Mars-years old."<<endl;
    cout << "you're " << round((enteredSecond / (Jupiter * earthSecond)) * 100) / 100 <<" Jupiter-years old."<<endl;
    cout << "you're " << round((enteredSecond / (Saturn * earthSecond)) * 100) / 100 <<" Saturn-years old."<<endl;
    cout << "you're " << round((enteredSecond / (Uranus * earthSecond)) * 100) / 100 <<" Uranus-years old."<<endl;
    cout << "you're " << round((enteredSecond / (Neptune * earthSecond)) * 100) / 100 <<" Neptune-years old."<<endl;

}

