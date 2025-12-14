#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main (){
    int rev=0;
    int a = 203;
    while (a>0){
        int lastdigit=a%10;
        rev=rev*10+lastdigit;
        
        a=a/10;

    }
    cout<<rev<<endl;
    cout<<"Hello, World!"<<endl;                      
}