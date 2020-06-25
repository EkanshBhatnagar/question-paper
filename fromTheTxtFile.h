#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <fstream>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "toStringFromNum.h"
#include "getThatLine.h"
using namespace std;


void list_dir( char *path) {
   struct dirent *entry;
   DIR *dir = opendir(path);
   
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) {
   cout << entry->d_name << endl;
   }
   closedir(dir);
}
void fromTheTxtFile(int Standard ,int x=0 , int y=0 , int z=0){
    string s;
    start:
    string k = toNumb(Standard);
        int n = k.length(); 
  
    char char_array[n + 1]; 
  
   
    strcpy(char_array, k.c_str()); 
  
   /* for (int i = 0; i < n; i++) 
        cout << char_array[i]; */
  
  //  list_dir(char_array);
  /*  bool b;
    cout<<"Do You Want To Pick Questions From the Default Question Set or You Want to choose any other file from the folder?"<<endl;
    again:
    cout<<"Enter 1 for default Question and 0 for any question paper of your choice"<<endl;
    int w;
    cin>>w;*/
            readAndCreation(x,y,z,k + "/short.txt",k + "/medium.txt",k + "/large.txt");
    
    /*else if(w==0){
        string a;
        string b;
        string c;
        cout << "Enter ShortQuestion File Name With Extension"<<endl;
        cin >> a;
        cout << "Enter MediumQuestion File Name With Extension"<<endl;
        cin >> b;
        cout << "Enter LargeQuestion File Name With Extension"<<endl;
        cin >> c;
        a = k+"/"+a;
        b=k+"/"+b;
        c=k+"/"+c;
        cout<<c<<endl;
        readAndCreation(x,y,z,a,b,c);
    }
    else{
        goto again;
    }*/
}
