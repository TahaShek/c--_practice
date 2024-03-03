#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
ofstream outfile("check.txt");

try{
    if(!outfile.is_open()){
        throw"exception";
    }
    else{
        outfile<<"learning lad rocks"<<endl;
        outfile<<"pst ni yaad ho rhi ";
        outfile.close();
        cout<<"ok ho gaya ha "<<endl;
    }
}catch(const char* e){
    cout << e << endl;
}

ifstream file;
file.open("check.txt");

try{
    if(!file.is_open()){
        throw"exception file if stream";
    }
    else{
        cout<<"reading from the file "<<endl;
        string line ;
        while(file.good()){
        getline(file,line);
        cout<<line<<endl;
        }

    }
}catch(const char* e){
    cout << e << endl;
}


// fstream file;
// file.open("taha.txt");

// try{
// if(!file.is_open()){
// throw"error opening";
// }
// else{
//     // read or write }
//     cout<<"file opened"<<endl;
// file.close();
// }
// }
// catch( const char* e){
//     cout<<"exception:"<<e<<endl;
// }
//   Create and open a text file
//   ofstream MyFile("filename.txt");

//   // Write to the file
//   MyFile << "Files can be tricky, but it is fun enough!"<<endl;
//   MyFile << "Files ";

//   MyFile.close();
// string myText;

// ifstream MyReadFile("filename.txt");

// while (getline (MyReadFile, myText)) {
//   cout << myText;
// }

// MyReadFile.close();

// int a ,b;
// int sum=a/b;
// cin >> a;
// cin >> b;
// if(b!=0) {
// cout<<sum<<endl;

// }
// else{
//     throw "exception";
// }

// try{
// int a ,b;
// int sum=a/b;
// cin >> a;
// cin >> b;
// if(b!=0) {
// cout<<sum<<endl;

// }
// else{
//     throw "exception";
// }



// }
// catch(const char*  e){
//     cout<<"xero:"<<e;
// }


}