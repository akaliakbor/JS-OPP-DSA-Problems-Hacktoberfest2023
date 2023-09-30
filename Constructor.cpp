#include<iostream>
using namespace std;
class myclass{
int id;
int age;
public:
myclass( int a,int b){
    id= a;
    age=b;
cout<<"Parameterize Constructor "<<endl;
}
myclass(){
cout<<"Defalt constructor"<<endl;
}
void show(){
cout<<"ID : "<<id<<endl;
cout<<"Age : "<<age<<endl;
}
};
int main()
{
myclass ob(10,20),ob2;
ob.show();
return 0;
}
