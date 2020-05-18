#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int n1;
    long n2;
    char word;
    float n3;
    double n4;
    cin >> n1;
    cin >> n2;
    cin >> word;
    cin >> n3;
    cin >> n4;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << word << endl;
    cout << setprecision(10) << n3 << endl;
    cout << setprecision(10) << n4 << endl;
    return 0;
}