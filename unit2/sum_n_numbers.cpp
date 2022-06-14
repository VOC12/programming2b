/*
Realize a program that returns a sum from a sequence of integers
using the Gauss formula to sum n numbers

Ask the user enter the value of n
1+2+3+4+5+6+7-...+n =(n+1)/2
*/

#include <iostream>
using namespace std;

int main(){
    string number = "";
    int result = 0, numero = 0;
    while (true) {
        cout << "Put the numbers and press = to see the sum of your numbers:\n";
        cin >> number;
        if (number == "=") break;
        result += stoi(number);
  }
    cout << "The result is" << result;
}