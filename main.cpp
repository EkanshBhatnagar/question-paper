#include <iostream>
#include "login.h"
#include "admin.h"
#include "isEqual.h"
#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){

  cout << "Welcome to the Question Paper Generator CLI" << endl;
  start:
  string s = login();
  if(s == "-1"){
    return 0;
  }
  if(s == "admin"){
    admin();
    cout << "Do you want to continue?(Yes(y)/No(n)):";
    char choice;
    cin >> choice;
    if(choice == 'y'){
      goto start;
    } else if(choice == 'n'){
      cout << "Exiting" << endl;
      return 0;
    } else {
      cout << "Invalid Choice" << endl;
      cout << "Exiting anyway" << endl;
      return 0;
    }
  }
  cout<<"Hello "<<s<<"! Enter The Standard For Which You Want To Create Paper For! :"<<endl;
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
    cout<<"Enter Number Of Medium Questions!"<<endl;
    cin>>medium_questions;
    cout<<"Enter Number Of Large Questions!"<<endl;
    cin>>large_questions;
    if(isEqual(total_questions,small_questions,medium_questions,large_questions)){
      cout << "if works";
    }


  }
  return 0;
}
