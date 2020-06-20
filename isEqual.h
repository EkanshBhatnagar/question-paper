#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
bool isEqual(int a , int b, int c=0, int d =0){
  if(a == b + c+ d){
    return true;
  } else{
    cout<<"Total Questions Are Not Matching With The Input Provided"<<endl;
    return false;
  }
} 
