#include<iostream>
#include<string>

using namespace std;

int main(){
   
    int idade;

    do{
        cout << "digite a idade do jogador: ";
        cin >> idade;

        switch(idade){

            case 7: // case 7 e 8 juntos
            case 8:
                cout << "categoria sub-9 \n";
                break;

            case 9:
            case 10:
                cout << "categoria sub-11 \n";
                break;

            case 11:
            case 12:
                cout << "categoria sub-13 \n";
                break;
            
            default:
                cout << "idade nao permitida \n";
                break;
        }
    }while(idade != 0 && idade < 13);
}
