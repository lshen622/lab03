//countDucks.cpp 
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
  string line;
  while (1) {
    getline(ifs, line);
    if (!ifs){ 
      break;
    }  
    int pos = line.find("duck");
    if (pos >=0){
      numduck++;
    }
  }
  ifs.close();

  if (numduck <=1){
    cout << "There was " << numduck << " duck in " << argv[1] << endl;
  } else{
    cout << "There were " << numduck << " ducks in " << argv[1] << endl;
  }
  

  return 0;
}