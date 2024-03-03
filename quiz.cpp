#include <iostream>
#include<string.h>
using namespace std;



int main(){
// //   sort the array of size 10 in asending order
// int a[10]={2,6,4,1,12,13,14,15,19,10};
// int c;
// for(int i=0; i<10; i++){
//     for(int j=i+1; j<10; j++){
//         if(a[i]>a[j]){
//             c=a[i];
//             a[i]=a[j];
//             a[j]=c;
//         }       
//     }
//     cout<<a[i]<<endl;
// }


// }

// array is a data structure 
int a[4]={12,23,123,5};
     int c;
     for(int i=0; i<4; i++){
        // cout<<a[i]<<endl;
        for(int j=i+1 ; j<4; j++){

            // 12      23
            // 23     123
            // 123   5
            if(a[i]<a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
                
            }
        }
        cout<<a[i]<<endl;
     }
}






// #include <iostream>
// #include <string>
// using namespace std;

// class student {
// protected:
//     int admissionNo, age;
//     string name, address;

// public:
//     void setStudentData(int addNo, int sAge, string Sname, string Saddress) {
//         admissionNo = addNo;
//         age = sAge;
//         name = Sname;
//         address = Saddress;
//     }

//     void getStudent() {
//         cout << "Admission No: " << admissionNo << endl;
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Address: " << address << endl;
//     }
// };

// class underGrade : public student {
// private:
//     string degreeProgram;

// public:
//     void setDegreeProgram(string degree) {
//         degreeProgram = degree;
//     }

//     string getDegreeProgram() {
//         return degreeProgram;
//     }
// };

// class postGrade : public student {
// private:
//     string degreeProgram;

// public:
//     void setDegreeProgram(string degree) {
//         degreeProgram = degree;
//     }

//     string getDegreeProgram() {
//         return degreeProgram;
//     }
// };

// int main() {
//     underGrade u1;
//     u1.setStudentData(12345, 20, "taha", "123 iqbal town");
//     u1.setDegreeProgram("Bachelor of Science");

//     postGrade p1;
//     p1.setStudentData(54321, 25, "sohail", "123 township");
//     p1.setDegreeProgram("Master of Arts");

//     cout << "Undergraduate Student Information:" << endl;
//     u1.getStudent(); 
//     cout << "Degree Program: " << u1.getDegreeProgram() << endl;

//     cout <<endl <<"Postgraduate Student Information:" << endl;
//     p1.getStudent(); 
//     cout << "Degree Program: " << p1.getDegreeProgram() << endl;

//     return 0;
// }
