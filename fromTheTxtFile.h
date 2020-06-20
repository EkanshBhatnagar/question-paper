#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <fstream>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "toStringFromNum.h"
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
void fromTheTxtFile(int Standard ,int x , int y=0 , int z=0){
    string s;
    start:
    string k = toNumb(Standard);
        int n = k.length(); 
  
    char char_array[n + 1]; 
  
   
    strcpy(char_array, k.c_str()); 
  
    for (int i = 0; i < n; i++) 
        cout << char_array[i]; 
  
    list_dir(char_array);
     cout<<"ABH AAGEY YHA ME FILE SE DATA READ KRKE COPY KA CENE CHALU KRNA HAI"<<endl;

}
