#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;



int main() {

    int t;
    cin >> t;
    while(t--){
        int n,c;
        string s;
        cin >> n >> c >> s;
        
        int arr[5] = {0};
        for(int i = 0; i<n; i++){
            arr[s[i]-'A']++;
        }
        
        sort(arr, arr+5, greater<int>());
        int temp1 = 0;
        int temp2 = 0;
        int final = n*(n+1)/2;
        int cnt=0;
        for(int i=0; i<5; i++){
            if(arr[i]>0){
                cnt = cnt + arr[i];
                temp1 = temp1 +c;
                temp2 = (n-cnt)*(n-cnt+1)/2;
                final = min(temp1+temp2, final);
            }
        }
        cout << final << "\n";
    }

}
