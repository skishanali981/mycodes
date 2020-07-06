#include<iostream>
using namespace std;

int isbigger(int a,int b,int c){
    return (a > b ? a : b) > c ? (a > b ? a : b) : c;
}

int main(){
    int a,b,c,ans;
    cin>>a>>b>>c;
    ans = isbigger(a,b,c);
    cout<<"Greatest of three is: "<<ans<<endl;
    return 0;
}