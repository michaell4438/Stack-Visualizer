#include <iostream>
#include "clearScreen.h"
#include <iomanip>
#include <vector>
#define STACKLIMIT 50

using namespace std;

vector<string> stackData;
string input;
string backData = "";

void addData(string data) {
    stackData.push_back(data);
}