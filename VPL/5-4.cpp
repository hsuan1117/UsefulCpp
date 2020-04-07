#include <iostream>
using namespace std;

int main(){
    int n;cin >>n;
    for(int i=0;i<n;i++){
        cout << string(n-i-1,'.') << string(i+1,'*')<< endl;
    }
    for(int i=0;i<n-1;i++){
        cout << string(i+1,'.') << string(n-i-1,'*')<< endl;
    }
    return 0;
}
