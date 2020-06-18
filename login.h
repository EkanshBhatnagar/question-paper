#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string login () {
  string username, password;
  cout << "Login:" << endl;
  cout << "Enter your Login ID:";
  cin >> username;
  cout << "Enter your Password:";
  cin >> password;

  //file stuff
  /*ofstream myfile;
  myfile.open ("login_pass.txt");*/
  string line;
  int isuser = 0;
  ifstream myfile ("login_pass.txt");
  if(username == "admin"){
    if(password == "adminpass"){
      return "admin";
    } else {
      cout << "Invalid username or password." << endl;
      cout << "Closing Program" << endl;
      return "-1";
    }
  }

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      int pos = line.find(":");
      if(username == line.substr(0,pos)){
        isuser = 1;
        if(password == line.substr(pos+1)){
          cout << "Successful" << endl;
        }
        else {
          cout << "Wrong password or username" << endl;
          return "-1";
        }
      }
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  if(!isuser){
    cout << "This user doesn't exists" << endl;
    return "-1";
  }
  return username;
}
