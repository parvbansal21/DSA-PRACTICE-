#include<iostream>
using namespace std;
int main(){
    int n=1331;
    int revnum=0;
    int dup=n;
    while(n>0){
        int lastdigit=n%10;
         revnum=revnum*10+lastdigit;
         n =n/10;
    }
    if(revnum==dup){
        cout<<"true";
    }else{
        cout<<"false";
    }
}