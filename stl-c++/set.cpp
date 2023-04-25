#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    cout << "The Elements are in the set : " << "\n";

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    int n = 2;
    if(s.find(2) != s.end()){
        cout << n << " is present in unordered set" << endl;
    }

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;  

    cout << "\n";

    if(s.empty()){
        cout << "set is empty" << "\n";
    }else{
        cout << "Size of the set after clearing the set: " << s.size();
    }
}


