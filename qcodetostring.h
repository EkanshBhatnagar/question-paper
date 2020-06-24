#include <iostream>
#include <string>

using namespace std;

string codetostring(int num){
    string k =">";
    while(num !=0){
        int m = num%10;
        num /=10;
        if(m==0) k="0"+k;
        if(m==1){
            k= "1"+k;
        }
        if(m==2){
            k= "2"+k;
        }
        if(m==3){
            k= "3"+k;
        }
        if(m==4){
            k= "4"+k;
        }
        if(m==5){
            k= "5"+k;
        }
        if(m==6){
            k= "6"+k;
        }
        if(m==7){
            k= "7"+k;
        }
        if(m==8){
            k= "8"+k;
        }
        if(m==9){
            k= "9"+k;
        }
    }
    return k;
}