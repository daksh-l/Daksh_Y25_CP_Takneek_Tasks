#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;



int main() {
    int a,b;
    cin >> a >> b;
    if(b%a==0){
        cout << b/a-1;
    } else {
        cout << b/a;
    }

}