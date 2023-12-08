#include <iostream>
using namespace std;

int lcm(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int LCM = max;
    int count = 0;
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (LCM % a[i] == 0)
            {
                count += 1;
                if (count == n)
                {
                    return LCM;
                }
            }
            else
            {
                count = 0;
                LCM++;
            }
        }
    }
}

int hcf(int array[], int n)
{
    int min = array[0];
    for (int x = 1; x < n; x++)
    {
        if(array[x]<min){
            min = array[x];
        }
    }
    
    int HCF = 2;
    int count = 0;
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] % HCF == 0)
            {
                count++;
            }
            else
            {
                count = 0;
                HCF = HCF + 1;
            }
        }
        if (count == n)
        {
            return HCF;
        }
        else if (HCF > min)
        {
            HCF = 1;
            return HCF;
        }
    }
}

int main()
{
    int num;
    cout << "Number of Elements : ";
    cin >> num;

    int array[num];

    for (int x = 0; x < num; x++)
    {
        cout << "Enter Number : ";
        cin >> array[x];
    }

    int LCM = lcm(array, num);
    cout << "LCM = " << LCM;
    cout << endl;
    int HCF = hcf(array, num);
    cout << "HCF = " << HCF << endl;
    return 0;
}