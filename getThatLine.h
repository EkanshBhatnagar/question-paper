#include<iostream>
#include<stdlib.h>
#include<fstream>
#include "printingthestuff.h"

using namespace std;

void readAndCreation(int x=0,int y=0,int z=0,string a=NULL,string b=NULL , string c=NULL){

     int arr[4]={0};
     int arr2[4]={0};
     int arr3[4]={0};
     int k= 1101;
     for(int i=0;i<4;i++){
         arr[i]=k;
         arr2[i]=k;
         arr3[i]=k;
         k++;
     }

    methodPrint(x,a,arr);
    methodPrint(y,b,arr2);
    methodPrint(z,c,arr3);
    /*
    int o=0;
    while(o<y){
    string line;
    ifstream in(b);
    start1:
        int randNum = rand()%(max-min + 1) + min; 
    int k;
    if(arr2[randNum] !=INT_MIN){
        k = arr2[randNum];
        arr2[randNum]=INT_MIN;
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
    
    int i=0;
    while(i<z){
    string line;
    ifstream in(c);
    start2:
        int randNum = rand()%(max-min + 1) + min; 
    int k;
    if(arr3[randNum] !=INT_MIN){
        k = arr3[randNum];
        arr3[randNum]=INT_MIN;
    }
    else{
        goto start2;
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
        int p=startpos+7;
        while(line[p] != '<'){
            if(line[p] == '\n'){
                p=startpos+7;
                continue;
            }
            else {
                 tmp += line[p];
            }
            
        }
       
    cout <<tmp<<endl;
    }
    i++;
    }
    */
   
}
