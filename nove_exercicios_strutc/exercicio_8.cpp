#include <iostream>
#include <string>
#include <vector>
#include<limits>

using namespace std;

typedef struct{
        float ID;
        float pontos;
    }Jogador;

int main(){
    int i;
    int opcao;
    float ID;
    float pontos;
    vector<Jogador> jogadores;
    float buscaID;
    bool encontrado = false;

    do{
        cout << "\nMENU\n";
        cout << "1- Cadastrar jogador\n";
        cout << "2- Buscar jogador por ID\n";
        cout << "3- Sair";
        cout << "opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
            cout << "digite o ID do jogador: ";
            cin >> ID;
            cout << "digite quantos pontos ele fez no campeonato: ";
            cin >> pontos;
            jogadores.push_back({ID, pontos});
            break;

            case 2:
            encontrado = false;
            cout << "digite o ID do jogador que deseja buscar: ";
            cin >> buscaID;
            for(i=0; i < jogadores.size(); i++){
                if(jogadores[i].ID == buscaID){
                    cout << "ID: " << jogadores[i].ID << endl;
                    cout << "Pontos: " << jogadores[i].pontos << endl;
                    encontrado = true;
                }
            }
            if(!encontrado){
                cout << "Jogador nao encontrado!" << endl;
            }
            break;

            case 3:
            cout << "Saindo do programa..." << endl;
            break;
        }
    }while(opcao != 3);
    return 0;
}
