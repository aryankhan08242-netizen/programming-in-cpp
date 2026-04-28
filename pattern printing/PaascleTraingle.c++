#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;

    }
return fact;
}
int main(){
    int n,a,b,c ,d;
    cout<<"Enter N: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
           a=factorial(i);
           b=factorial(j);
           c=factorial(i-j);
           d=a/(b*c);
           cout<<d<<"  ";

        }
        cout<<endl;
    }
}