#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int input;
    int divisor=0;
    int dividend;
    vector<int> v;
    v.clear();

    cin >> input;
    dividend=input;
        while(dividend/2!=0){
        divisor++;
        dividend/=2;
    }//end while
    while(divisor>=0){
        if(input>=pow(2,divisor)){
            input-=pow(2,divisor);
            divisor--;
            v.push_back(1);
            //cout << "1" ;
        }else{
            divisor--;
            v.push_back(0);
           //cout << "0" ;
         }
    }
    while(v.size()<8){
        v.insert(v.begin(),0);
    }
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it ;
    }
}