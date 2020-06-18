#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
// #include "login.h"
using namespace std;

int main(){
  cout << "Welcome to the Question Paper Generator CLI" << endl;
  string s ="User_name";
  cout<<"Hello "<<s<<"!Enter The Standard For Which You Want To Create Paper For!"<<endl;
  int Standard;
  cin>>Standard;
  if(Standard>12){
    cout<<"Oops! Standard Can Only be in between 1 to 12"<<endl;
    cout<<"Enter Standard Again!"<<" Do It Carefully As It Is Your Last Attempt.We Will Log You Out!"<<endl;
    cin>>Standard;
     if(Standard>12){
    cout<<"Oops! Standard Can Only be in between 1 to 12"<<endl;
      cout<<"Logging You Out!"<<endl;
      cout<<"Try Again Later!"<<endl;
     }
  }
  else{
    int total_questions;
    int small_questions;
    int medium_questions;
    int large_questions;
    cout<<"Enter Total Number Of Questions That Have To Be In The Question Paper!"<<endl;
    cin>>total_questions;
    cout<<"Enter Number Of Small Question"<<endl;
    cin>>small_questions;

  }
  
  return 0;
}
