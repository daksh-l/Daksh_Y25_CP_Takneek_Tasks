#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;



int main() {

    int t;
    cin >> t;
    while(t--){
        int x,y,z,a,b,c;
        cin >>x>>y>>z>>a>>b>>c;
        
        int count = 0;
        if(z>c){
            y = y+z-c;
            count = count + c;
        } else {
            count = count + z;
        }
        
        if(y>b){
            x = x+y-b;
            count = count +b;
        } else {
            count = count +y;
        }
        
        if(x>a){
            count = count + a;
        } else {
            count = count +x;
        }
        cout << count << "\n";

    }

}
