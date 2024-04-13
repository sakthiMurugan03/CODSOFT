//Program to create a simple calculator using classes & objects

#include<iostream>
using namespace std;

class calculator {
    protected:
    float num1, num2;

    public:
    void setData() { 
        cout << "\nEnter 1st number: ";
        cin >> num1;
        cout << "\nEnter 2nd number: ";
        cin >> num2;
    }
    float product();
    float difference();
    float sum();
    float division();
};

float calculator :: product() {
    float prodRes;
    prodRes = num1 * num2;
    cout << "\nThe product is: " << prodRes;

    return prodRes;
}

float calculator :: difference() {
    float diffRes;
    diffRes = num1 - num2;
    cout << "\nThe difference is: " << diffRes;

    return diffRes;
}

float calculator :: sum() {
    float sumRes;
    sumRes = num1 + num2;
    cout << "\nThe sum is: " << sumRes;

    return sumRes;
}

float calculator :: division() {
    float divRes;
    divRes = num1 / num2;
    cout << "\nThe quotient is: " << divRes;

    return divRes;
}

int main() {
    int ch;
    string choice;
    calculator c; //initialization of class's object

    do {
        cout << "\nEnter 1 to ADD, 2 to MULTIPLY, 3 to SUBTRACT, or 4 to DIVIDE: ";
        cin >> ch;

        switch(ch) {
            case 1:
                c.setData();
                c.sum();
                break;

            case 2:
                c.setData();
                c.product();
                break;

            case 3:
                c.setData();
                c.difference();
                break;

            case 4:
                c.setData();
                c.division();
                break;

            default:
                cout << "\nSorry, invalid input..try again";
                break;
        }
        cout << "\n\nPress 'y' to continue or 'n' to end: ";
        cin >> choice;

    } while(choice == "y");

    return 0;
}
