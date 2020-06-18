#include <iostream>
#include <fstream>

#include <string>
using namespace std;

bool isUniqueUser(string str){
  string line;
  ifstream myfile ("login_pass.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      int pos = line.find(":");
      if(str == line.substr(0,pos)){
        return false;
      }
    }
    myfile.close();
  }
  return true;
}

void admin(){


  cout << "Welcome to the Admin Dialog!" << endl;
  cout << "This is used only for adding or deleting existing users!" << endl;
  cout << "Enter your choice, D(deleting a user) or A(adding a user) or L(listing current users):";
  char choice;
  cin >> choice;
  string newUser;
  string newPass;
  if(choice == 'L'){
    int count = 1;
    string line;
    ifstream myfile ("login_pass.txt");
    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
      {
        int pos = line.find(":");
        cout << count << ". " << line.substr(0,pos) << endl;
        count++;
      }
      myfile.close();
    }
    else cout << "Unable to open file";
  } else if(choice == 'A'){
    cout << "You are adding a user!" << endl;
    again:
    cout << "Enter new Username:" << endl;
    cin >> newUser;
    if(!isUniqueUser(newUser)){
      cout << "Not a Unique Username." << endl;
      goto again;
    }
    cout << "Enter a new Password:";
    cin >> newPass;
    ofstream myfile;
    myfile.open ("login_pass.txt",ios::app);
    myfile << newUser<< ":" << newPass<<"\n";
    myfile.close();

  }
}
