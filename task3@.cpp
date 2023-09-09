//Task 3
//WORD COUNT
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream fin;
    string fname;
    string w;
    int c=0;
    cout<<"Enter the file name";
    getline(cin,fname);
    fin.open(fname.c_str());
    while(!fin.eof())
    {
        fin>>w;
        c++;
    }
    cout<<"Number of words currently present in the file="<<c;
    fin.close();
    cin.get();
    return 0;
}