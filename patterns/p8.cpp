#include <iostream>
using namespace std;

int main()
{
    int n=6;
    for (int i = 5; i > 0; i--)
    {
        for (int j = i; j < n-1; j++)
        {   
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {   
            cout << "*";
        }
        cout << endl;
    }
}