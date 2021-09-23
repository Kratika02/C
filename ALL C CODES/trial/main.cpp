#include<iostream>
using namespace std;
class Maths{
    int x,y;
public:
    void input();
    void add();

};
void Maths::input(){
cin>>x>>y;
}
void Maths::add(){
    cout<<x+y;
}
int main(){
Maths m1;
m1.input();
m1.add();
}
