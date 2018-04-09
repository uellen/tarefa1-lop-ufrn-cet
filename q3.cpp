#include <iostream>
using namespace std;

int main(){
    int a ,b ,c;
    cin>> a >> b >> c ;
        if (a>b && c>b ){
        cout<<b<<" e o menor"<<endl;
    }
        else if (b>a && c>a){
        cout<<a<<" e o menor"<<endl;
    }
        else if (b>c && a>c){
        cout<<c<<" e o menor"<<endl;
    }
        else{
            cout<<"nao ha menor"<<endl;
    }
    return 0;
}
