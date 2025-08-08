#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;



int main() {

    int n;
    cin >> n;
    
    int a[n]={0};
    int b[n]={0};
    int c[n]={0};
    
    for(int i = 0;i<n;i++){
        cin >> a[i]>>b[i]>>c[i];
    }
    
    int memo[n][3] = {0};

    memo[0][0] = a[0];
    memo[0][1] = b[0];
    memo[0][2] = c[0];

    for(int i = 1; i<n; i++){
        memo[i][0] = max(memo[i-1][1], memo[i-1][2]) + a[i];
        memo[i][1] = max(memo[i-1][2], memo[i-1][0]) + b[i];
        memo[i][2] = max(memo[i-1][0], memo[i-1][1]) + c[i];
    }

    cout << max(memo[n-1][0], max(memo[n-1][1], memo[n-1][2]));

}
