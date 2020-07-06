#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
bool f(int x,int y){
    return x>y;
}
void vectordemo(){
    vector<int> v = {14,5,11,21,12};

    cout<< v[2]<<endl;
    sort(v.begin(),v.end()); //O(NlogN) time complexity
    bool present = binary_search(v.begin(),v.end(),10);
    cout<<present<<endl;
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(123);
    present = binary_search(v.begin(),v.end(),100);
    cout<<present<<endl;

    vector<int>::iterator it = lower_bound(v.begin(),v.end(),100);
    vector<int>::iterator it2 = upper_bound(v.begin(),v.end(),100);
    cout<<*it<<" "<<*it2<<" "<<endl;
    cout<<it2 - it<<endl;

    sort(v.begin(),v.end(), f);
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int &x : v){
        x++;
        cout<<x<<" ";
    }
}

void setdemo(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(-1);
    for(int x:s)
        cout<<x<<" ";
    cout<<endl;
    auto it = s.find(-1);
    if(it == s.end()){
        cout<<"element not present"<<endl;
    }
    else {
        cout<<*it<<" is present"<<endl;
    }
    auto it2 = s.lower_bound(2);
    auto it3 = s.upper_bound(2);
    cout<<*it2<<endl;
    cout<<*it3<<endl;
    
}

void mapdemo(){
    map<int , int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[3008013] = 1000;
    
    map<char , int> cnt;
    string s = "rachit jain";

    for(int x:s){
        cnt[x]++;
    } 
    cout<<cnt['a']<<" "<<cnt['i']<<" "<<endl;

}

int main(void){
    setdemo();
}
