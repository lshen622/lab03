//myProg02.cpp 
//Author: Liyuan Shen

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  ifstream ifs;
  ifs.open(argv[1]);
  int numduck = 0;
  int numnonduck = 0;
  string line;
  while (1) {
    getline(ifs, line);
    if (!ifs){ 
      break;
    }  
    int pos = line.find("duck");
    if (pos >=0){
      numduck++;
    } else{
      numnonduck++;
    }
  }
  ifs.close();

  cout << "Report for "<< argv[1] << ":\n";
  cout << "   Animal count:    "<< numduck+numnonduck << endl;
  cout << "   Duck count:      "<< numduck << endl;
  cout << "   Non duck count:  "<< numnonduck << endl;
  

  return 0;
}