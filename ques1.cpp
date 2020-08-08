#include<iostream>
using namespace std;
int main()
{
int a,b,c,temp,n=3;
temp=n;
for(a=1;a<=3;a++)
{
for(b=1;b<temp;b++)
{
cout<<" ";
}
temp--;
for(c=1;c<=a*2-1;c++)
{
cout<<"*";
}
cout<<endl;
}
for(a=1;a<=6;a++)
{
for(b=1;b<=2;b++)
{
cout<<" ";
}
cout<<"*"<<endl;
}


}
