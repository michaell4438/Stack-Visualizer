#include "main.h"

int main() {
    while (input != "exit") {
        cout << "data or 'pop' or 'exit'>> ";
        cin >> input;
        if (input != "pop") {
            addData(input);
        }

        if (input == "pop") {
             backData = stackData.back();
             stackData.pop_back();
        }

        clearScreen();
        for (int i=0; i<stackData.size(); i++) {
            cout << endl;
            cout << setw(15) << stackData[i];
        }

        if (input == "pop") {
             cout << setw(20) << backData;
        }

        cout << endl << endl;
    }

    clearScreen();
}