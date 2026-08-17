#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<float> notas;
    float nota;
    int i;
    float media = 0;
    float soma = 0;
    int opcao;

    do{
        cout << "\nMENU\n";
        cout << "1- Digitar nota do aluno\n";
        cout << "2- Listar as notas\n";
        cout << "3- Media das notas\n";
        cout << "4- Sair\n";
        cout << "opcao: \n";
        cin >> opcao;

        switch(opcao){
            case 1:
            cout << "digite a nota que deseja cadastrar: \n";
            cin >> nota;
            notas.push_back(nota);
            cout << "Nota cadastrada com sucesso\n";
            break;
            
            case 2:
            for(i = 0; i < notas.size(); i++){
                cout << "\nnotas digitadas: " << notas[i];
            }
            break;

            case 3:
            soma = 0; // para nao somar com as anteriores caso queira fazer denovo
            for(i=0; i < notas.size(); i ++){
                soma = soma + notas[i];
            }
            media = soma / notas.size();
            cout << "a media das notas e: " << media;
            break;
        }
    }while(opcao != 4);
    
    return 0;
}
