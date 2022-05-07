#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
fstream myFile_Handler;
string myLine;
// File Open
myFile_Handler.open("File_1.txt", ios::in | ios::out);
// Check if the file has opened
if(!myFile_Handler)
{
cout << "File did not open!";
exit(1);
}
// Write to the file
myFile_Handler << "1. This is another sample test File. " << endl;
myFile_Handler << "2. This is the second line of the file. " << endl;
myFile_Handler.seekg(ios::beg);
// Read the File
if(myFile_Handler.is_open())
{
// Keep reading the file
while( getline(myFile_Handler, myLine))
{
// print the line on the standard output
cout << myLine << endl;
}
//Append
ofstream fout; // Create Object of Ofstream
ifstream fin;
fin.open("File_1.txt");
fout.open ("File_1.txt",ios::app); // Append mode
if(fin.is_open())
fout<< "\n Writing to a file opened from program.\n"; // Writing data 
to file
cout<<"\n Data has been appended to file";
// File Close
myFile_Handler.close();
}
else
{
cout << "Unable to open the file!";
}
myFile_Handler.close();
return 0;
}
