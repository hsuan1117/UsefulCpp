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
    double a,b,c;
    cin >> a >> b >> c;
    if(a<60)a*=1.25;
    if(b<60)b*=1.25;
    if(c<60)c*=1.25;

    if(((a+b+c)/3<0)) || ((a+b+c)/3 > 100)){
	cout<< "ReCheckScores" << endl;
    }else if((a+b+c)/3 < 60){
        cout << "PleaseGoToDieOneDie" << endl;
    }else{
        cout << "Hmm" << endl;
    }
    return 0;
}
