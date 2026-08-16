#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> lista;
    string produto;

    do{
        cout << "digite o nome do produto ou digite fim para sair: ";
        getline(cin, produto);
        
        if(produto != "fim"){
            lista.push_back(produto);
        }

        else{
            cout << "voce saiu do programa, veja sua lista: \n";
        }

    }while(produto != "fim");

    for(int i = 0; i < lista.size(); i++){
        cout << lista[i] << endl;
    }
}
