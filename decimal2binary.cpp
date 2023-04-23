#include<iostream>
#include<limits.h>
using namespace std;

main(){
    int num = 01;
    int bits = 0;
    int temp = num;

    string binary = "";

    while(temp > 0){
        binary = to_string(temp % 2) + binary;
        temp /= 2;
    }

    bits = binary.length();

    cout << "The binary representation of " << num << " is " << binary << endl;
    cout << "The number of bits required to represent " << num << " is " << bits << endl;
    cout << CHAR_MIN << endl;
    cout << CHAR_MAX << endl;
}