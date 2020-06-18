#include <iostream>
#include <fstream>

#include <string>
using namespace std;

void login () {
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
        }
      }
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  if(!isuser){
    cout << "This user doesn't exists" << endl;
  }
  myfile.close();
  return;
}
