#include<iostream>
#include<cstdlib> //contains srand() & rand() functions
#include<ctime> //includes time() function

using namespace std;

class randomInt {

    protected:
    int unique, number;

    static int count;

    public:
    randomInt() {

        //seeds random number generator for every instanes of varying time
        srand((unsigned int) time(NULL)); 

        //help generate random numbers ranging between (1-30)
        unique = (rand() % 30) + 1; 
        cout << "\n********** Number Guessing Game **********";

        do {
            cout << "\n\nEnter any number within the range (1-30): ";
            cin >> number;
            count++;

            if(number > unique) {
                cout << "\nTry guessing lower..!";
            }
            else if(number < unique) {
                cout << "\nTry guessing higher..!";
            }
            else {
                cout << "\nCongrats..! you've finnaly guessed the number in " << count << " attempts";
            }
        } while(unique != number);
    }
};

int randomInt :: count;

int main() {
    randomInt r;

    return 0;
}
