#include <iostream>
#include <sstream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    ifstream inFS;
    ofstream outFS;
    int num;
    string numberName;

    cout << "Opening input File" << endl;
    inFS.open("inputfile.txt");
    if(!inFS.is_open()) {
        cout << "File does not exist" << endl;
        return 1;
    }

    cout << "Opening output File" << endl;
    outFS.open("outputfile.txt");
    if(!outFS.is_open()) {
        cout << "Output file does not exist" << endl;
        return 1;
    }

    cout << "Reading file..." << endl;
    inFS >> num;

    while(!inFS.fail()) {
        inFS >> numberName;
        // << numberName << " " << num << endl;
        outFS << numberName << "-"<< num << endl;
        inFS >> num;
    }

    cout << "Closing file." << endl;
    inFS.close();
    outFS.close();


    return 0;
}
