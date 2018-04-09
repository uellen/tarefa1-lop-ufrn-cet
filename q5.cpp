#include <iostream>
using namespace std;

int main(){

   int t , dias , horas ,  minutos;

   cout << "intervalo de tempo em minutos: ";
   cin >> t;

   dias = t / 1440;
   horas = (t % 1440) / 60;
   minutos = (t % 60);

   cout << "intervalo de tempo: " <<dias <<" dias " <<horas <<" horas " << minutos <<" minutos" <<endl;

}
