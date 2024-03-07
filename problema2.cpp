#include <iostream>

using namespace std;

//função para ver se o número pertence a sequência de fibonacci
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

//Pede ao usuario digitar um nummero
    cout << "Digite um numero inteiro: ";
    cin >> number;

//Aplica a função e retorna se o numero pertence ou não a sequencia fibonacci
    if(fibonacciTest(number)){
        cout << "O numero " << number << " pertence a sequencia Fibonacci." << endl;
    }else{
        cout << "O numero " << number << " nao pertence a sequencia Fibonacci" << endl;
    }

    return 0;
}