#include <iostream>

using namespace std;

bool fibonacciTest(int number){
    int a = 0, b = 1;

    if (number == a || number == b){
        return true;
    }
    while (b <= number){
    int temp = b;
    b = a + b;
    a = temp;

    if (b == number){
        return true;
        }
    }   
    return false;
}

int main() {

    int number;

    cout << "Digite um numero inteiro: ";
    cin >> number;

    if(fibonacciTest(number)){
        cout << "O numero " << number << " pertence a sequencia Fibonacci." << endl;
    }else{
        cout << "O numero " << number << " nao pertence a sequencia Fibonacci" << endl;
    }

    return 0;
}