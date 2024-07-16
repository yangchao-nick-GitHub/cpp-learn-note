#include <iostream>
#include <exception>

#include "main.hpp"
using namespace std;

void prompt()
{
    cout << "------------------" << endl;
    cout << "(h) help" << endl;
    cout << "(q) quit" << endl;
}

void usage()
{
    cout << "Tiny Calculator -------------------- " << endl;
    cout << "+                  Add two numbers." << endl;
    cout << "-                  Sub two numbers." << endl;
    cout << "*                  Mul two numbers." << endl;
    cout << "/                  Div two numbers." << endl;
}

void addfunc()
{
    float num1, num2;
    cout << "Enter first num : ";
    cin >> num1;
    cout << "Enter second num : ";
    cin >> num2;
    cout << "Result : " << num1 + num2 << endl;
}

void subfunc()
{
    float num1, num2;
    cout << "Enter first num : ";
    cin >> num1;
    cout << "Enter second num : ";
    cin >> num2;
    cout << "Result : " << num1 - num2 << endl;
}

void mulfunc()
{
    float num1, num2;
    cout << "Enter first num : ";
    cin >> num1;
    cout << "Enter second num : ";
    cin >> num2;
    cout << "Result : " << num1 * num2 << endl;
}

void divfunc()
{
    try {
        float num1, num2;
        cout << "Enter first num : ";
        cin >> num1;
        cout << "Enter second num : ";
        cin >> num2;
        if (num2 == 0) {
            throw invalid_argument("Divisor cannot be zero.");
        }
        cout << "Result : " << num1 / num2 << endl;
    } catch (const exception &e) {
        cerr << "Error" << e.what() << endl;
    }
    
}

void main_loop()
{
    prompt();
    while (true) {
        char opt = ' ';
        cout << "Enter your type : ";
        cin >> opt;
        switch(opt) {
            case 'h':
                usage();
                break;
            case 'q':
                cout << "Bye!" << endl;
                return ;
            case '+':
                addfunc();
                break;
            case '-':
                subfunc();
                break;
            case '*':
                mulfunc();
                break;
            case '/':
                divfunc();
                break;
            default:
                cout << "Error : Input is anonymous!\n";
                break ;
        }

    }
}

int main()
{
    main_loop();
    return 0;
}