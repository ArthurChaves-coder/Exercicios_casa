#include<iostream>
#include<string>

using namespace std;

int main(){
   
    float valor;
    float conversao;
    int opcao;

    do{
        cout << "digite o valor em reais: \n";
        cin >> valor;


        cout << "digite uma opcao para conversao: \n";
        cout << "1 - Dolar\n";
        cout << "2 - Euro\n";
        cout << "3-  Peso Argentino\n";
        cout << "4 - Sair\n";
        cin >> opcao;

        switch(opcao){

            case 1:
                conversao = valor * 0.20;
                cout << "o valor em dolar e: " << conversao << endl;
                break;

            case 2:
                conversao = valor * 0.18;
                cout << "o valor em euro e: " << conversao << endl;
                break;

            case 3:
                conversao = valor * 20.00;
                cout << "o valor em peso argentino e: " << conversao << endl;
                break;

            case 4:
                cout << "saindo..." << endl;
                break;

            default:
                cout << "opcao invalida" << endl;
        }
    }while( opcao != 4);
}
