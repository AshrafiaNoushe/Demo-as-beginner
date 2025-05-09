#include<bits/stdc++.h>
using namespace std;
int gcd_3(int a,int b){
    int temp;
    if(a<b){
        swap(a,b);
    }
    while(b!=0){
        temp = b;
        b = a%b ;
        a = temp;
    }
    return a;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = gcd_3(gcd_3(a,b),c);
    cout<<"GCD: "<<ans<<endl;
    return 0;
}