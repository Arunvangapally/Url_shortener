#include<bits/stdc++.h>
using namespace std;
class solution  
{
    private :
    int a,b;
    public: 
    void fun();
    void setdata(int x,int y){
a=x;
b=y;
    }
    void showdata(){
        cout<<a<<" "<<b;
    }
};
int main()
{
solution sol;
sol.setdata(3,4);
sol.showdata();
}