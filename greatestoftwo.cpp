#include<iostream>
using namespace std;

int main(void){
    int x,y;
    cin>>x>>y;
    if(x > y)
        cout<<"x is greater than y"<<endl;
    else if(x < y)
        cout<<"x is lesser than y"<<endl;
    else
    {
        cout<<"both are equal"<<endl;
    }
    return 0;
    
}