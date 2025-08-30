#include <iostream>
using namespace std;

int main(){
    cout << "You find yourself standing in front of the enterance to the ever looming forest, you need to go through it in order to get back home"<< endl;
    int choice;
    cout << "Choices:" << endl;
    cout << "1. Enter the forest" << endl;
    cout << "2. Turn around." << endl;
    cin >> choice;
    switch(choice){
        case 1:
            cout << "You enter the forest" << endl;
        break;
        case 2:
            cout << "You do not enter the forest, and instead walk away from it. Perhaps one day you will be able to enter, but today is not that day." << endl;
        break;
    }
}