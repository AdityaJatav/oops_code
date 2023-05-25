#include<iostream>
using namespace std;

class a
{
public:
int value1=5,value2=3;
int add(int v1,int v2){
int s;
s=v1+v2;
cout<<s<<"\n";
return s;


}
};
class b:public a
{
public:
int v=4;
int multi(int m1,int m2){
int s2;
s2=m1*m2;
return s2;

}

};

int main(){
a ob;
ob.add(2,4);
cout<<ob.add(4,6);
}