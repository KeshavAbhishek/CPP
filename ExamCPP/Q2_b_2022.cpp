#include <iostream>
using namespace std;

void sumAvg(int (&marks)[5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    cout << "SUM = " << sum << "/500" << endl << "AVG = " << sum/5 << endl;
}

int main()
{
    int x[5] = {75,85,97,95,80}; // Marks out-of 100
    sumAvg(x);
    return 0;
}