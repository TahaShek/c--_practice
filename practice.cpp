// #include <iostream>
// #include<string.h>

// using namespace std;

// class Result{
// private:
// int rollNo;
// string Sname;
// int marks[3];

// public:
// void input(){
//     cout<<"enter roll no:";
//     cin>>rollNo;
//     cout<<"enter name:";  
//     cin>>Sname;

//     for(int i=0;i<3;i++){
//         cout<<"enter marks ["<<i<<"]   ";
//         cin>>marks[i];
//     }
// }
// void show(){
//     cout<<"roll no is :"<<rollNo<<endl;
//     cout<<"name is :"<<Sname<<endl;
//     for(int i=0;i<3;i++){
//         cout<<"enter marks ["<<i<<"] :"<<marks[i]<<endl;
//     }
// }

// float total(){
//     int t=0;
//     for(int i=0;i<3;i++){
//         t=t+marks[i];
//     }
//     return t;

// }

// float avg(){
//     int a =0;
//     for(int i=0;i<3;i++){
//         a=a+marks[i];
//     }
//     return a/3.0;

// }
// };

// int main(){
//     Result r1;
//     r1.input();
//     r1.show();
//     r1.total();
//     r1.avg();

//     cout<<"total is "<<r1.total()<<endl;
//     cout<<"avg is "<<r1.avg()<<endl;


//     return 0;

// }
// #include <iostream>
// using namespace std;

// class Array {
// private:
//     int arr[5];

// public:
//     void fill();
//     void display();
//     int min();
//     int max();
// };

// void Array::fill()
// {
//  for(int i=0; i<5; i++){
//     cout<<"enter numbers  ["<<i<<"]";
//     cin>>arr[i];
//  }   
// }
// void Array::display(){
//     for(int i=0; i<5; i++){
//         cout<<"number are "<<arr[i]<<endl;
//     }
// }
// int Array::max(){
//     int m=arr[0];
//     for(int i=0; i<5; i++){
//         if(m<arr[i]){
//             m=arr[i];
//         }
//     }
//             return m;

// }

// int Array::min(){
//     int m=arr[0];
//     for(int i=0; i<5; i++)
//         if(m>arr[i])
//             m=arr[i];
//             return m;
        
    
// }

// int main() {
//     Array a1;
//     a1.fill();
//     a1.display();
//     cout <<"max is " << a1.max() << endl;
//     cout<<"min is " <<a1.min() << endl;

//     return 0;
// }
