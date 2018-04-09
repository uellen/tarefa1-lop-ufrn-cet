#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout<<"O consumo de agua em m³: "<<endl;
    cin>> a ;

    if (a<20){
        b=8.50;
        cout<<"sua conta e: R$ "<<a*b<<endl;
    }
    else{
         b=11.0;
        cout<<"sua conta e: R$ "<<a*b<<endl;
    }
    return 0;
}
