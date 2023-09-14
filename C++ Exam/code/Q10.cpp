// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;
class recursive_factorial
{
	int n, result;
	public:
		void input();
		int factorial(int);
		void output();
};

void recursive_factorial::input()
{
	cout << "Enter a non-negative number: ";
    cin >> n;	
    result=factorial(n);
    
}

int recursive_factorial::factorial(int n)
 {
    if (n > 1)
	{
        return n * factorial(n - 1);
    }
	else 
	{
        return 1;
    }
}
void recursive_factorial::output()
{
	cout << "Factorial of " << n << " = " << result;
}
int main()
{
    
	recursive_factorial r;
    r.input();
    r.output();
    return 0;
}