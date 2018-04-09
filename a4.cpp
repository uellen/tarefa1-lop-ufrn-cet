#include <iostream>
using namespace std;

int main(){
    int x, y, s;

    cout<<"Digite o valor do saque(a parte em cedulas): "<<endl;
    cin>>x;
    cout<<"Digite o valor do saque(a parte em centavos): "<<endl;
    cin>>y;

    cout<<"Seu saque: "<<endl;

    s=x/100;
    cout<<"cedulas de R$100: " << s<<endl;

    s=x-(s*100);
    cout<<"Cedulas de R$50: " <<s/50<<endl;
    s=s%50;
    cout<<"Cedulas de R$20: " <<s/20<<endl;
    s=s%20;
    cout<<"Cedulas de R$10: "<<s/10<<endl;
    s=s%10;
    cout<<"Cedulas de R$5: "<<s/5<<endl;
    s=s%5;
    cout<<"Cedulas de R$2: "<<s/2<<endl;
    s=s%2;
    cout<<"Moedas de R$1: "<<s/1<<endl;


    s=y/50;
    cout<<"Moedas de R$0,50: "<<s/50<<endl;
    s=y%50;
    cout<<"Moedas de R$0,25: "<<s/25<<endl;
    s=s%25;
    cout<<"Moedas de R$0,10: "<<s/10<<endl;
    s=s%10;
    cout<<"Moedas de R$0,5: "<<s/5<<endl;
    s=s%5;
    cout<<"Moedas de R$0,01: "<<s/1<<endl;
}
