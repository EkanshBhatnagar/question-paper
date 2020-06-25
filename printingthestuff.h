#include<iostream>
#include<stdlib.h>
#include<fstream>
#include <cmath>
#include "qcodetostring.h"

using namespace std;


    void methodPrint(int y , string b, int arr2[]){
    int max =3;
    int min =1;
    int o=0;
    while(o<y){
    string line;
    ifstream in(b);
    start1:
        int randNum = rand()%(max-min + 1) + min; 
    int k;
    if(arr2[randNum] !=INT8_MIN){
        k = arr2[randNum];
        arr2[randNum]=INT8_MIN;
    }
    else{
        goto start1;
    }
    string x = codetostring(k);
    while (getline(in,line))
    {

        std::string tmp; 

        
        int startpos=0;
        int endpos=0;
        string v = "<q"+x;
        string h = "</"+x;
         startpos = line.find(v);
         endpos=line.find(h);
        
       for(int i=startpos+7;i<endpos;i++){
          tmp +=line[i];
       }
    cout <<tmp<<endl;
    }
    o++;
    }
    }