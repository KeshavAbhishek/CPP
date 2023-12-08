#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ifstream in("openfile.txt");
    int nWord = 0, nLine = 0, nChar = 0, temp = 0;
    while (in)
    {
        getline(in, line);
        cout << line << endl;
        nLine++;
        for (int x = 0; x < line.length(); x++)
        {
            nChar++;
            if(line[x]==' '){
                temp++;
            }
        }
        nWord+=temp;
        temp = 0;
    }
    in.close();
    cout << "Word: " << nWord << endl;
    cout << "Line: " << nLine << endl;
    cout << "Char: " << nChar << endl;

    return 0;
}