#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;



int main() {

    int n;
    cin >> n;
    
    int h[n]={0};
    for(int i = 0;i<n;i++){
        cin>>h[i];
    }
    
    int memo[n]={0};
    memo[0] = 0;
    memo[1] = abs(h[1]-h[0]);
    
    for(int i=1;i<n-1;i++){
        memo[i+1] = min(memo[i]+abs(h[i]-h[i+1]), memo[i-1]+abs(h[i-1]-h[i+1]));
    }
    
    cout << memo[n-1];

}
