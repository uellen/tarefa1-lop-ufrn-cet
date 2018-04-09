#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float altura , peso, imc;
    cout<<"Digite sua altura e em seguida o peso"<<endl;
    cin>> altura >> peso;
    imc = pow(altura, 2)*peso;

    if (imc<18.5){
     cout<<"abaixo do peso"<<endl;
     }
    else if (imc>=18.5 && imc<=24.9){
     cout<<"peso normal"<<endl;
    }
    else if (imc>=25.0 && imc<=29.9){
     cout<<"sobre peso"<<endl;
    }
    else {
     cout<<"obesidade"<<endl;
    }

    return 0;
}
