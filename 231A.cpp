#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int aux = 0;    
    cin >> n;
    int s[n][3];
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
            if (s[i][j] == 1) {
                count++;
            }
        }
        if (count >= 2) {
            aux++;
        }
    }
    cout << aux << endl;
    return 0;
}
