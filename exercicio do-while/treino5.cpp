#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> nomes;
    string nome;
    string temp;
    bool houvetroca;
    int i, j;
    int opcao;

    do {
        cout << "\nMENU\n";
        cout << "1- Cadastrar um nome\n";
        cout << "2- Listar nomes\n";
        cout << "3- Colocar nomes em ordem alfabetica\n";
        cout << "4- Sair do programa\n";
        cout << "opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cin.ignore(); // Limpa o \n do buffer antes de usar o getline
                cout << "digite o nome que vai ser cadastrado: ";
                getline(cin, nome);
                nomes.push_back(nome);
                cout << "nome cadastrado com sucesso!\n";
                break;

            case 2:
                for (i = 0; i < nomes.size(); i++) {
                    cout << "Posicao " << i << ": " << nomes[i] << "\n";
                }
                break;

            case 3:
                for (i = 0; i < nomes.size(); i++) {
                    houvetroca = false; 

                    for (j = 0; j < nomes.size() - 1; j++) {
                        if (nomes[j] > nomes[j + 1]) {
                            temp = nomes[j];
                            nomes[j] = nomes[j + 1];
                            nomes[j + 1] = temp;
                            houvetroca = true;
                        }
                    }
                }
                cout << "nomes ordenados com sucesso!\n";
                break;
        }
    } while (opcao != 4);

    return 0;
}
