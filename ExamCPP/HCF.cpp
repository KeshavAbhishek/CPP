#include <iostream>
using namespace std;

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
    int array[] = {51,17,34};
    cout << hcf(array, 3);
    return 0;
}