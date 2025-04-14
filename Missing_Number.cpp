#include<iostream>
#define ll long long
using namespace std;
int main()  {
    int n;
    cin>>n;

    ll total = (ll) n* (n+1) / 2;
    ll sum = 0;

    for (int i = 0; i<n-1; i++) {
        int x;
        cin>>x;
        sum += x;
    }

    cout<<total - sum <<endl;
    return 0;
    
}