#include<iostream>
using namespace std;

class a
{
    public:

  a()
  {
    cout<<"class A";
  }

};
class b:public a{
public:
    b(){
        cout<<"class B";

    }
};

class c:public b
{
    public:
   c(){
    cout<<"class c";
}
 
};
class d:public c
{
    public:

   d(){

   }

};



int main(){
d ob;


}