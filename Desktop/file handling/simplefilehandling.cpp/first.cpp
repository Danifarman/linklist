#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outfile;
    outfile.open("first.txt",ios::trunc);
    if(!outfile.is_open()){
        cout<<"Eroor in opening file "<<endl;
        exit(-1);
    }
    outfile<<"This is our first | file handling program in on pc"<<endl;
    cout<<outfile.tellp()<<endl;
    outfile.seekp(12,ios::beg);
    outfile<<"second";
    outfile.close();

    
    ifstream infile;
    infile.open("first.txt",ios::in);
    if(infile.good()==0){
        cout<<"Error in opening file";
                 exit(-1);
    }
    string st;
    cout<<infile.tellg();
    infile.seekg(8,ios::beg);
    getline(infile,st,'|');
    cout<<st;
    infile.close();
}
