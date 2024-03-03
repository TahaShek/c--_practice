// // Question 1
// #include <iostream>
// using namespace std;

// class MyClass {
// private:
//     int data;
// public:
//     void inputData() {
//         cout << "Enter data: ";
//         cin >> data;
//     }
//     void outputData() {
//         cout << "Data: " << data << endl;
//     }
// };

// int main() {
//     MyClass obj;
//     obj.inputData();
//     obj.outputData();
//     return 0;
// }

// // Question 2
// #include <iostream>
// using namespace std;

// class Distance {
// private:
//     int feet;
//     float inches;
// public:
//     void getdist() {
//         cout << "Enter feet: ";
//         cin >> feet;
//         cout << "Enter inches: ";
//         cin >> inches;
//     }
//     void setdist(int ft, float in) {
//         feet = ft;
//         inches = in;
//     }
//     void showdist() {
//         cout << feet << "' " << inches << "\"" << endl;
//     }
// };

// int main() {
//     Distance dist1, dist2;
//     dist1.getdist();
//     dist2.getdist();
//     dist1.showdist();
//     dist2.showdist();
//     return 0;
// }

// // Question 3
// #include <iostream>
// using namespace std;

// class TIME {
// private:
//     int hours, minutes, seconds;
// public:
//     void settime(int h, int m, int s) {
//         hours = h;
//         minutes = m;
//         seconds = s;
//     }
//     void showtime() {
//         cout << hours << ":" << minutes << ":" << seconds << endl;
//     }
// };

// int main() {
//     TIME time1, time2;
//     time1.settime(10, 30, 45);
//     time2.settime(12, 15, 20);
//     time1.showtime();
//     time2.showtime();
//     return 0;
// }

// // Question 4
// #include <iostream>
// using namespace std;

// class Person {
// private:
//     int Pid;
//     string Pname;
//     double PSalary;
// public:
//     void getdata() {
//         cout << "Enter Person ID: ";
//         cin >> Pid;
//         cout << "Enter Person Name: ";
//         cin >> Pname;
//         cout << "Enter Person Salary: ";
//         cin >> PSalary;
//     }
//     void showdata() {
//         cout << "Person ID: " << Pid << endl;
//         cout << "Person Name: " << Pname << endl;
//         cout << "Person Salary: " << PSalary << endl;
//     }
//     void setdata(int id, string name, double salary) {
//         Pid = id;
//         Pname = name;
//         PSalary = salary;
//     }
//     double getSalary() {
//         return PSalary;
//     }
// };

// int main() {
//     Person p1, p2, p3;
//     p1.getdata();
//     p2.getdata();
//     p3.getdata();

//     if (p1.getSalary() > p2.getSalary() && p1.getSalary() > p3.getSalary()) {
//         p1.showdata();
//     } else if (p2.getSalary() > p3.getSalary()) {
//         p2.showdata();
//     } else {
//         p3.showdata();
//     }

//     return 0;
// }



// 5
#include <iostream>
#include <string.h>
using namespace std;

class Person{
 private:
 string Pname;
 int Pid,Psalary;

public :
    void setData(string name,int id, int salary){
            Pname=name;
            Pid=id;
            Psalary=salary;
    }

    string getName(){
        return Pname;
    }

    int getSalary(){
        return Psalary;
    }
    int getId(){
         return Pid;
    }

    void showData(){
        cout<< getName()  <<endl <<getId()<<endl<<getSalary()<<endl;
    }
};

int main(){
 Person p1,p2,p3;

int salary;

cin>>salary;
 p1.setData("asdas",1,salary);
 p2.setData("check",145,121);
 p3.setData("asdsada",134,1221);
p1.showData();
p2.showData();
p3.showData();

int a ,b,c;
a=p1.getSalary();
b=p2.getSalary();
c=p3.getSalary();

if(a>b && a>c){
cout<<a;

}
else if(b>a&& b>c){
cout<<b;
}
else{
    cout<<c;
}
}

// 6 
// #include <iostream>

// using namespace std;

// class Student {
// private:
//     int oop, pf, discrete, eng, urdu;

// public:

//     void input_marks() {
//         cout << "Enter marks for Object-Oriented Programming (out of 100): ";
//         cin >> oop;
//         cout << "Enter marks for Programming Fundamentals (out of 100): ";
//         cin >> pf;
//         cout << "Enter marks for Discrete Mathematics (out of 100): ";
//         cin >> discrete;
//         cout << "Enter marks for English (out of 100): ";
//         cin >> eng;
//         cout << "Enter marks for Urdu (out of 100): ";
//         cin >> urdu;
//     }

//     int Sum() {
//         return oop + pf + discrete + eng + urdu;
//     }

//     float Avg() {
//         return Sum() / 5.0;
//     }
// };

// int main() {
//     Student student1;
//     student1.input_marks();

//     int total_marks = student1.Sum();
//     float average_marks = student1.Avg();

//     cout << "Total marks obtained: " << total_marks << endl;
//     cout << "Average marks obtained: " << average_marks << endl;

//     return 0;
// }

// // 7
// #include <iostream>
// #include <string.h>
// using namespace std;

// class Student{
//     private:
// int    admeno;
// string sname;
// float eng,maths,science;
// float total;

// float cTotal(){
//      total=eng+maths+science;
//     return total;
// }
// public:
//     void TakeData(int admin,string Sname,float english,float math,float scienc){

//         admeno=admin;
//         sname=Sname;
//         eng=english;
//         maths=math;
//         science=scienc;
//         cTotal();

//     }

// void showData(){
//     cout<<admeno<<" "<<sname<<" "<<eng<<" "<<maths<<" "<<science<<" "<<total<<endl;

// }

// };

// int main(){

// Student s1;
// s1.TakeData(1,"check",12,13,14);
// s1.showData();
// }

// // 8
// #include<iostream>
// #include<string.h>
// using namespace std;
// class batsman{
// private:
// int bcode;
// string bname;
// int innings,notout,runs;
//  float batavg;
//  float calavg(){
//      return batavg=runs/(innings-notout);
//  }
//  public:
//   void readdata(int batsmancode,string batsmanName,int bruns,int binnings,int bnotout){
//         bcode=batsmancode;
//         bname=batsmanName;
//         innings=binnings;
//         notout=bnotout;
//         runs=bruns;
//         calavg();
//   }

//   void displayData(){
// cout << bname << " " << bcode << " " << innings << " " << notout << " " << runs << " " << endl << calavg() << endl;
//   }

// };
// int main(){
// batsman b1;
// b1.readdata(1233,"check",2000,20,23);
// b1.displayData();
// }

// #include <iostream>
// using namespace std;
//  int main(){
// int a=0;
// cin>>a;
// if(a<9999){
//     cout<<a;
// }
// else{
//     cout<<"chlae ae"<<a<<endl;
// }

//  }

// 9

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Test
// {

// private:
//     int testCode;
//     string description;
//     int NoCandidate;
//     int CenteReq;

//     float calCenter()
//     {

//         return CenteReq = NoCandidate / 100 + 1;
//     }

// public:
//     void schedule(int code, string desp, int noCandidate)
//     {
//         testCode = code;
//         description = desp;
//         NoCandidate = noCandidate;
//         calCenter();
//     }

//     void DispTest()
//     {
//         cout << "test Code is " << testCode << endl;
//         cout << "Description is " << description << endl;
//         cout << "NoCandidate is " << NoCandidate << endl;
//         cout << "Center Required is " << CenteReq << endl;
//     }
// };

// int main()
// {
//     int code, noCandidate;
//     string description;

//     cout << "Enter Test Code:";
//     cin >> code;
//     cout << "No candidate:";
//     cin >> noCandidate;
//     cout << "Enter Test Description:";
//     cin >> description;

//     Test t1;
//     t1.schedule(code, description, noCandidate);
//     t1.DispTest();
// }
// #include<iostream>
// #include<string.h>
// using namespace std;

// class Flight{
//     private:
//     int flightNumber;
//     string destination;
//     float distance,fuel;
//     float CalFuel(){
//         if(distance<=1000){
//             return fuel=500;
//         }
//         if(distance>1000 &&distance<=2000){
//             return fuel=1100;
//         }
//         if(distance>2000){
//             return fuel =2200;
//         }

// return fuel;
//     }

//     public:
//     void feedInfo(int fNumber,string dest,float dis){
//             flightNumber = fNumber;
//             destination = dest;
//             distance = dis;
//             CalFuel();
//     }
//     void ShowInfo(){
//         cout<<"Flight Number:"<<flightNumber<<endl;
//         cout<<"Destination:"<<destination<<endl;
//         cout<<"Distance:"<<distance<<endl;
//         cout<<"Fuel:"<<fuel<<endl;
//     }

// };

// int main(){
//     int flightNumber;
//     string destination;
//     float distance;
//     cout<<"Enter flight number:";
//     cin >> flightNumber;
//     cout<<"Enter Destination:";
//     cin >> destination;
//     cout<<"Enter Distance:";
//     cin>> distance;

//     Flight f1;
//     f1.feedInfo(flightNumber,destination,distance);
//     f1.ShowInfo();

// }

// #include <iostream>
// using namespace std;
 
// class Book{
//     private:
//     int bookNo;
//     char BookTitle[20];
//     float price;
//        float total_cost(int x)
//             {
//                     float total;
//                     total=price*x;
//                     return total;
//              }

// public:
//     void input(){
//         cout<<"Enter BookName:";
//         cin.getline(BookTitle,20);
//         cout<<"enter Book No:";
//         cin>>bookNo;
//         cout<<"Enter Price:";
//         cin>>price;
//     ;
      

//     }
//     void purchase(){
//         int NumberOfCopies;
//         cout<<"Enter Number of copies:";
//         cin >> NumberOfCopies;
//         float total=total_cost(NumberOfCopies);
//         cout<<"Total Cost is "<<total<<endl;
//     }

// };

//  int main(){
//     Book b1;
//     b1.input();
//     b1.purchase();

//  }


// #include <iostream>
// #include <cstring>

// using namespace std;

// class REPORT {
// private:
//     int adno;
//     char name[20];
//     float marks[5];
//     float average;

//     void GETAVG() {
//         float total = 0;
//         for (int i = 0; i < 5; i++) {
//             total += marks[i];
//         }
//         average = total / 5;
//     }

// public:
//     void READINFO() {
//         cout << "Enter admission number: ";
//         cin >> adno;[]
//         cout << "Enter name: ";
//         cin.getline(name, 20);
//         cout << "Enter marks for 5 subjects: ";
//         for (int i = 0; i < 5; i++) {
//             cin >> marks[i];
//         }
//         GETAVG(); 
//     }

//     void DISPLAYINFO() {
//         cout << "Admission Number: " << adno << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: ";
//         for (int i = 0; i < 5; i++) {
//             cout << marks[i] << " ";
//         }
//         cout << endl;
//         cout << "Average Marks: " << average << endl;
//     }
// };

// int main() {
//     REPORT student;
//     student.READINFO();
//     cout << "Student Information:" << endl;
//     student.DISPLAYINFO();
//     return 0;
// }
















