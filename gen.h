#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

std::fstream& GotoLine(std::fstream& file, unsigned int num){
    file.seekg(std::ios::beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return file;
}

void copy(ifstream& infile,ofstream& outfile){
    string content = "";
    int i;

    for(i=0 ; infile.eof()!=true ; i++) // get content of infile
        content += infile.get();

    i--;
    content.erase(content.end()-1);     // erase last character

    cout << i << " characters read...\n";
    infile.close();

    outfile << content;                 // output
    outfile.close();
}

void generateHTML(){
  ifstream infile("format.html");
  ofstream outfile("output.html");
  copy(infile,outfile);
  outfile.close();
  infile.close();
}

void addQuestion(string question, int count){
  fstream outfile("output.html");
  GotoLine(outfile,13);
  //getline();
  outfile << count << ". " << question  << "</body></html>"<< endl;

}
