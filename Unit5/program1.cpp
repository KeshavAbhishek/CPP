#include <iostream>
using namespace std;

void check(int k) throw(int, double)
{
    if (k == 1){
        throw 'k';}
    else if (k == 2){
        throw k;}
    else if (k == -2){
        throw 1.0;}
    cout << "\n End of function check()";
}
int main()
{
    try
    {
        cout << "k==1\n";
        check(1);
        cout << "k==2\n";
        check(2);
        cout << "k==-2\n";
        check(-2);
        cout << "k==3\n";
        check(3);
    }
    catch (char g)
    {
        cout << "Caught a character exception \n";
    }
    catch (int j)
    {
        cout << "Caught a character exception \n";
    }
    catch (double s)
    {
        cout << "Caught a double exception \n";
    }
    cout << "\n End of main()";
    return 0;
}
