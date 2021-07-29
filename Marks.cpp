#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    float h,g;
    cout<<"\n""\t""INPUT MARKS""\n""\n";
    cout<<"\n""Please Enter Marks out of 100";
    cout<<"\n""Enter Marks Obtained in Maths:";
    cin>>a;
    cout<<"Enter Marks Obtained in English:";
    cin>>b;
    cout<<"Enter Marks Obtained in Science:";
    cin>>c;
    cout<<"Enter marks Obtained in Social Science:";
    cin>>d;
    cout<<"Enter Marks Obtained in Computer:";
    cin>>e;
    cout<<"\n""\t""RESULT""\n";
    f= a+b+c+d+e;
    cout<<"\n""\t""Total Marks:"<<f;
    g=f*100/500;
    cout<<"\n""\t""Percentage:"<<fixed<<setprecision(1)<<float(g);
    cout<<"\n""\t""Grade:";
    if (g>80){
    cout<<"A";
    }
    else if (g>60&&g<=80){
    cout<<"B";
    }

else if (g>40&&g<=60)
{
    cout<<"C";
}
    else {
        cout<<"D";
    }
cout<<"\n""\t""CGPA:";
h=g*9.5/100;
cout<<fixed<<setprecision(1)<<h;
return 0;

}