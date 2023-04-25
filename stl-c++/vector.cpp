#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }

    cout << "The Elements are in the vector : " << "\n";

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    cout << "front element : " << v.front() << "\n";
    cout << "last element : " << v.back() << "\n";
    cout << "size : " << v.size() << "\n";
    cout << "last element : " << v[v.size() - 1] << "\n";

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "Inserting at first : " << "\n";
    v.insert(v.begin(),5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";
    cout << "Deletion at first : " << "\n";
    v.erase(v.begin());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";

    if(v.empty()){
        cout << "vector is empty" << "\n";
    }else{
        cout << "Size of the vector after clearing the vector: " << v.size();
    }
}