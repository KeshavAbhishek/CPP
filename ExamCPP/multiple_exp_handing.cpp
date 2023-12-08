#include <iostream>
using namespace std;

void num(int k)
{
    try
    {
        if (k == 0)
            throw k;
        else if (k > 0)
            throw 'P';
        else if (k < 0)
            throw .0;
    }
    catch (char g)
    {
        cout << "Caught a positive value \n";
    }
    catch (int j)
    {
        cout << "caught an null value \n";
    }
    catch (double f)
    {
        cout << "Caught a Negative value \n";
    }
}

int main()
{
    cout << "Demo of Multiple catches\n\n";
    num(0);
    num(5);
    num(-1);
    return 0;
}
