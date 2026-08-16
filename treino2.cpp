#include<iostream>
#include<string>

using namespace std;

int main(){
   int opcao;
   int quantidade;
   float total = 0;
    do{
        cout << "Menu de opcoes:\n";
        cout << "1- hamburguer 15$\n";
        cout << "2- batata frita 10$\n";
        cout << "3- refrigerante 5$\n"; 
        cout << "4- Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if(opcao == 1 || opcao == 2 || opcao == 3){
            cout << "Digite a quantidade: ";
            cin >> quantidade;
        }

        switch(opcao){
            case 1:
                total = total + quantidade * 15;
                break;
            case 2:
                total = total + quantidade * 10;
                break;
            case 3:
                total = total + quantidade * 5;
                break;
        }
        
    } while(opcao != 4);

    cout << "Total a pagar: $" << total << endl;
}
