#include<iostream>
using namespace std;
class student
{
private:
    int a,b;
public:
    pointerClass(int n,int m)
    {
        a=n;
        b=m;
    }
    int get()
    {
        return (a+b);
    }
};
int main()
{
    pointerClass object[3]=
    {
        pointerClass(2,3);
        pointerClass(6,7);
        pointerClass(8,9);
    };
    pointerClass * pointer;
    pointer=object;
    int i=0;
    for(i=0; i<3; i++)
    {
        cout<<pointer->get()<<endl;
        pointer++;
    }
    return 0;
}
