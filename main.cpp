//
//  main.cpp
//  InformationClass
//
//  Created by student on 2020/3/17.
//  Copyright © 2020 hsuan. All rights reserved.
//

#include <iostream>
#define endl '\n'
using namespace std;

int main(int argc, const char * argv[]) {
    double d[3];
    for(int i=0;i<3;i++){
        cin >> d[i];
    }
    sort(d,d+3);
    
    return 0;
}
