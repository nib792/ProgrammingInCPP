// file handling in c++ from code beauty
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
   /* fstream myfile;
     myfile.open("rabin.txt", ios::out);//write mode
     if (myfile.is_open()){
         myfile<<"Hello\n";
         myfile<<"Whatever the program i will write I must write it with great compassion\n";
         myfile.close();
     }
     myfile.open("rabin.txt",ios::app);//append mode
     if (myfile.is_open()){
         myfile<<"This is me writing after using append mode so that my datas wont be overwritten\n";
         myfile.close();
     }
     */
    myfile.open("rabin.txt", ios::in); // read mode
    if (myfile.is_open())
    {
        string line;
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
    }
    
    //  system("cls");
    system("pause>0");
    return 0;
}
