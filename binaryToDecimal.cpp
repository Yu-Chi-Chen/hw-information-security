#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main(){
    int input;
    int num=0;
    vector<int> v;
    do{
        v.push_back(cin.get()-48);
    }while(cin.peek()!='\n');
    
    for(int i=0;i<=v.size();i++){
        if(v[i]==1){
            num+=pow(2,v.size()-i-1);
        }
    }
    cout << num;
}