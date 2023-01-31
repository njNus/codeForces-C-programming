#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if((str[0]+str[1]+str[2])==(str[3]+str[4]+str[5])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
