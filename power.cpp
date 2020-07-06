#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(void){
    int num,exp,res;
    cin>>num>>exp;
    res = pow(num,exp);
    cout<<"the power of "<<num<<" is "<<res<<endl;
    return 0;
}