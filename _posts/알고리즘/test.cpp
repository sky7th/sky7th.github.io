#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    string S, A[N]; 
    cin >> S;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    int pos = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < A[i].size(); j++) {
            if(S[pos] != A[i][j]) {
                pos -= j;
                break;
            }
            else pos++;
        }
        if (pos == S.size()-1) cout << '1';
    cout << '1';
}