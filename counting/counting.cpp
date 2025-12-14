#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main (){
    int count=0;
    int a = 203;
    while (a>0){
        int lastdigit=a%10;
        count++;
        
        a=a/10;

    }
    cout<<count<<endl;
    cout<<"Hello, World!"<<endl;                      
}