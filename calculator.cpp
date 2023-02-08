#include<iostream>
using namespace std;
int main(){
    double n1,n2;
    cout<<"input 2 no.s-  ";
    cin>>n1>>n2;
    char op;
    cout<<"input an  operator: ";
    cin>>op;
    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case'*':
        cout<<n1*n2<<endl;
        break;
        case '%':
        cout<<n1/n2<<endl;
        break;
        default:
        cout<<"none of my business"<<endl;
    }
    return 0;
   }
       