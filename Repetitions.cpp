#include<iostream>
#include<string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin>>str;

    int maxi = 1;
    int curr = 1;

    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == str[i+1]) {
            curr++;
        }
        else curr = 1;

        maxi = max(maxi, curr);
    }
    cout<<maxi<<endl;
    return 0;
}