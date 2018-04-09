#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Digite uma data: "<<endl;
    cin>> a >> b >> c;

    switch (b){
        case 1:
            cout<< a<<" de janeiro de "<<c<< endl;
            break;
        case 2:
            cout<< a<<" de fevereiro de "<<c<< endl;
            break;
        case 3:
            cout<< a<<" de marco de "<<c<< endl;
            break;
        case 4:
            cout<< a<<" de abril de "<<c<< endl;
            break;
        case 5:
            cout<< a<<" de maio de "<<c<< endl;
            break;
        case 6:
            cout<< a<<" de junho de "<<c<< endl;
            break;
        case 7:
            cout<< a<<" de julho de "<<c<< endl;
            break;
        case 8:
            cout<< a<<" de agosto de "<<c<< endl;
            break;
        case 9:
            cout<< a<<" de setembro de "<<c<< endl;
            break;
        case 10:
            cout<< a<<" de outubro de "<<c<< endl;
            break;
        case 11:
            cout<< a<<" de novembro de "<<c<< endl;
            break;
        case 12:
            cout<< a<<" de dezembro de "<<c<< endl;
            break;
        default:
            cout<<"identificador invalido"<< endl;
    }
    return 0;
}

