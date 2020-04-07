// VPL
#include <iostream>
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int found = 0;
    ull z =0;
    ull n;cin >> n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){found=1;z+=i;}
    }
    if(!found)cout << "XD" << endl;
    else cout << z << endl;
    return 0;
}
