#include<iostream>
using namespace std;

int bintodec(int num){
    int rem,base = 1,res = 0;
    while(num!=0){
        rem = num%10;
        res += rem*base;
        num = num/10;
        base = base*2;
    }
    return res;
}

void dectooct(int num){
    int rem, base = 8,i=0;
    int arr[100];
    while(num != 0){
        arr[i] = num%8;
        num = num/8;
        i++;
    }
    cout<<"in octal: ";
    for(int j= i-1; j>=0;j--){
        
        cout<<arr[j];

}
}

int main(void){
    int num,res;
    cin>>num;
    res = bintodec(num);
    cout<<"in decimal: "<<res<<endl;
    dectooct(res);
    
}