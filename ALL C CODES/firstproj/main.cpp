#include<iostream>
using namespace std;
class Maths{
int x,y;
public:
    void input();
    int add();

    };
void Maths::input(){
cout<<"input two integers"<<"\n";
cin>>x>>y;
}
int Maths::add(){
return x+y;}
int main(){
Maths m1;
m1.input();
cout<<m1.add();
return 0;
}
