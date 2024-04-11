//C++ program to create a user-interactive tic-tac-toe game

#include<iostream>
using namespace std;

char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, col, num;

char chance = 'X'; //because conventional start mostly begins with 'X'
string user1 = " ", user2 = " ";

bool draw = false; //initial draw condition is false
int p1 = 0, p2 = 0;

void body() {

    cout << "\n        |         |";
    cout << "\n    " << arr[0][0] << "   |    " << arr[0][1]  << "    |   " << arr[0][2];
    cout << "\n________|_________|_______";
    cout << "\n        |         |";
    cout << "\n    " << arr[1][0] << "   |    " <<arr[1][1]  << "    |   " << arr[1][2];
    cout << "\n________|_________|_______";
    cout << "\n        |         |";
    cout << "\n    " << arr[2][0] << "   |    " << arr[2][1]  << "    |   " << arr[2][2];
    cout << "\n        |         |";
}

void slotAlloc() {

    if(chance == 'X') {
        cout << "\n" << user1 << ", enter any digit (1-9) to select the slot: ";
        cin >> num;
    }
    if(chance == 'O') {
        cout << "\n" << user2 << ", enter any digit (1-9) to select the slot: ";
        cin >> num;
    }

    //slot assignments to corresponding user input
    if(num == 1) {
        row = 0;
        col = 0;
    }
    if(num == 2) {
        row = 0;
        col = 1;
    }
    if(num == 3) {
        row = 0;
        col = 2;
    }
    if(num == 4) {
        row = 1;
        col = 0;
    }
    if(num == 5) {
        row = 1;
        col = 1;
    }
    if(num == 6) {
        row = 1;
        col = 2;
    }
    if(num == 7) {
        row = 2;
        col = 0;
    }
    if(num == 8) {
        row = 2;
        col = 1;
    }
    if(num == 9) {
        row = 2;
        col = 2;
    }
    else if(num < 1 || num > 9) {
        cout << "\nInavlid entry, please check again..!";
    }

    if(chance == 'X' && arr[row][col] != 'X' && arr[row][col] != 'O') {
        arr[row][col] = 'X';
        chance = 'O';
    }
    else if(chance == 'O' && arr[row][col] != 'X' && arr[row][col] != 'O') {
        arr[row][col] = 'O';
        chance = 'X';
    }
    else {
        cout << "\nSorry, NO spaces left to be filled...";
        slotAlloc();
    }
}


bool combinations() {

    //side combinations check for a win
    for(int i=0; i<3; i++) {
        if(arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] || arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]) {
            return true;
        }
    }
    //diagonal combinations check for a win
    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] || arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
        return true;
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] != 'X' && arr[i][j] != 'O') {
                return false;
            }
        }
    }
    draw = true;
    return false;
}

void execution() {
    int gameCount;
    string reply;

    do {
        cout << "\n********** Welcome to TIC-TAC-TOE game **********" << endl;

        cout << "\nGame Count: " << gameCount++ << endl;
        cout << "\nEnter the name of 1st player: ";
        cin >> user1;
        cout << "\nEnter the name of 2nd user: ";
        cin >> user2; 

        while(!combinations()) {
            body();
            slotAlloc();
            combinations();
        }
        
        if(chance == 'X' && draw == false) {
            cout << "\n*********************************************************" << endl;
            cout << "\n       Congrats " << user2 << ", you've won the game..!" << endl;
            cout << "\nScore Card: ";
            cout << "\n" << user2 << "'s score: " << ++p2;
            cout << "\n" << user1 << "'s score: " << p1 << endl;
            cout << "\n*********************************************************";
        }
        else if(chance == 'O' && draw == false) {
            cout << "\n*********************************************************" << endl;
            cout << "\n       Congrats " << user1 << ", you've won the game..!" << endl;
            cout << "\nScore card: ";
            cout << "\n" << user1 << "'s score: " << ++p1;
            cout << "\n" << user2 << "'s score: " << p2 << endl;
            cout << "\n*********************************************************";
        }
        else {
            cout << "\nNeither " << user1 << " nor " << user2 << " won";
            cout << "\nIt's a draw..!";
        }

        cout << "\n\nWould you like to continue? (yes/no): ";
        cin >> reply;

    }while(reply == "yes" || reply == "YES" || reply == "y");

    body();
}

int main() {
    
    execution();

    return 0;
}
