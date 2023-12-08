#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string filename="openfile.txt";

    ifstream file(filename);

    string line;
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;

    while (getline(file, line)) {
        charCount += line.length();

        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordCount++;
        }

        lineCount++;
    }

    cout << "Number of characters: " << charCount << endl;
    cout << "Number of words: " << wordCount << endl;
    cout << "Number of lines: " << lineCount << endl;

    file.close();

    return 0;
}