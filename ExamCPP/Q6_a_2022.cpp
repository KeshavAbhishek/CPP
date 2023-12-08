#include <iostream>
using namespace std;

int main()
{
    string data;
    cout << "Enter String : ";
    getline(cin, data);
    int i = 0;
    int cnt = 0;
    while (1)
    {
        if ((data[i] == '\\' && data[i + 1] == '0') || data[i] == '\0')
        {
            cnt = 1;
            break;
        }
        else
        {
            cout << data[i];
        }
        i++;
    }
    cout << endl
         << endl;
    if (cnt == 1 && data[i] != '\0')
    {
        throw runtime_error("Null Character Tackled.");
    }
    else
    {
        cout << "No null character found in between the string." << endl;
    }
    return 0;
}