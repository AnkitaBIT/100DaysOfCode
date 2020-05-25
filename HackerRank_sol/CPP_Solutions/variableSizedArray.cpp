#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, m, i, j, x, y;
    cin >> n >> q;
    int* a[n];
    for(int i = 0; i < n; i++){
        cin >> m;
        a[i] = new int[m];
        for(j = 0;j < m;j++){
            cin >> a[i][j]; 
        }
    }
    for(i = 0;i < q;i++){
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
}