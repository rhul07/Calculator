#include<iostream>
using namespace std;
int main(){
int a,b,c;
char o;
cout<<"Please Select The Operation:""\n";
cout<<"ADDITION: + ""\n";
cout<<"SUBSTRACTION: -""\n";
cout<<"MULTIPLICATION: *""\n";
cout<<"DIVISION: / " "\n";
cin>>o;
cout<<"Enter first Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
if (o=='+'){
c=a+b;
cout<<"The Sum is;"<<c;

}

else if (o =='-'){
    c=a-b;
    cout<<"The Substraction is:"<<c;
    
}
else if (o =='*'){
    c=a*b;
cout<<"The Multiplication is:"<<c;

}

else if(o =='/')
 {
    c=a/b;
    cout<<"The Division is:"<<c;
   
}
else {
    cout<<"\n""Wrong Input";
}
    return 0;

}

