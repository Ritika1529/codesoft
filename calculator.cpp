#include<iostream>
using namespace std;

class Calculator
{
private:
    int a;
    int b;
    int num;

public:
    void calculate();
};

void Calculator::calculate()
{
    cout << "---------- Calculator --------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter the Number: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Enter the first Number: ";
        cin >> a;
        cout << "Enter the Second Number: ";
        cin >> b;
        cout << "Result = " << a + b << endl;
        break;

    case 2:
        cout << "Enter the first Number: ";
        cin >> a;
        cout << "Enter the Second Number: ";
        cin >> b;
        cout << "Result = " << a - b << endl;
        break;

    case 3:
        cout << "Enter the first Number: ";
        cin >> a;
        cout << "Enter the Second Number: ";
        cin >> b;
        cout << "Result = " << a * b << endl;
        break;

    case 4:
        cout << "Enter the first Number: ";
        cin >> a;
        cout << "Enter the Second Number: ";
        cin >> b;
        if (b == 0)
        {
            cout << "Division by zero is not allowed!" << endl;
        }
        else
        {
            cout << "Result = " << static_cast<double>(a) / b << endl;
        }
        break;

    default:
        cout << "Enter a valid choice. Please try again." << endl;
        break;
    }
}

int main()
{
    char ch;
    Calculator c1;
    do
    {
        c1.calculate();
        cout << "Enter 'y' to calculate again, or 'n' to exit: ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
      