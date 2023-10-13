#include <iostream>
using namespace std;
 
 class A{
     int a;
     public:
       void set()
       {
        cin>> "a =";

       }
       void display()
       {
        cout<<"a= "<<a;

       }
    

 };
 int main()
 {
    A a;
    a.set();
    a.display();
    
    return 0;

 }
