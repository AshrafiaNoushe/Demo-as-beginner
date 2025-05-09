#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int temp;
    if(a<b){
        while(a!=0){
            temp = a;
            a = b%a;
            b = temp;
        }
        return b;
    }else{
        if(a>b){
            while(b!=0){
                temp = b;
                b = a%b;
                a = temp;
            }
        }
        return b;       
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    gcd(a,b);
    int gcd_num = gcd(a,b);
    cout<<"GCD: "<<gcd_num<<endl;
    return 0;
}