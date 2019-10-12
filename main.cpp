#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>

using namespace std;


bool ChecString(char* filename, char* search)
{
    int offset; 
    string line;
    ifstream Myfile;
    Myfile.open (filename);

    if(Myfile.is_open())
    {
        while(!Myfile.eof())
        {
            getline(Myfile,line);
            if ((offset = line.find(search, 0)) != string::npos) 
            {
             //cout << "found '" << search << " \n\n"<< line  <<endl;
             return true;
            }
            else
            {

                cout << line;

            }
        }
        Myfile.close();
    }
    return false;
}
int main() {
	bool contains = CheckString("PE-1.txt","I want to learn PE file format!");
	FILE * oFile;
	oFile = fopen("PE-1.txt","a");
	if(!contains){
		fputs("I want to learn PE file format!",oFile);
	}
	fclose(oFile);
	return 0;
}
