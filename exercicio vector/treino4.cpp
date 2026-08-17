#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<string> produtos;
    int i;
    string produto;
    int opcao;
    bool pesquisa;

    do{
        cout << "\nMENU\n";
        cout << "1- Cadastrar produto\n";
        cout << "2- Listar produtos digitados\n";
        cout << "3- Pesquisar produto\n";
        cout << "4- Sair do programa\n";
        cout << "5- opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
            cin.ignore();
            cout << "\ndigite o produto que quer cadastrar: ";
            getline(cin,produto);
            produtos.push_back(produto);
            cout << "produto cadastrado com sucesso!\n";
            break;

            case 2:
            for(i = 1; i < produtos.size(); i ++){
                cout << "\nproduto listado: " << produtos[i];
            }
            break;

            case 3:
            cin.ignore();
            bool pesquisa = false;
            cout << "digite o nome do produto para encontra-lo: ";
            getline(cin,produto);
            for(i=1; i<produtos.size(); i++){
                if(produto == produtos[i]){
                    cout << "produto encontrado: " << produtos[i] << " na posicao " << i << "\n";
                    bool pesquisa = true;
                    break;
                }
            }
        }
    }while(opcao != 5);
}
