#include <iostream>
#include <string>
#include <vector>
#include<limits>

using namespace std;

typedef struct {
    string nome;
    float codigo;
    int idade;
    float salario;
} Funcionario;

int main(){
    int i;
    int opcao;
    string nome;
    float codigo;
    int idade;
    float salario;
    vector<Funcionario> funcionarios;
    int contador = 0;

    do{
        cout << "\nMENU\n";
        cout << "1- Cadastrar funcionario\n";
        cout << "2- Contar e exibir quantos funcionarios tem + de 40 anos e recebem 5000 reais\n";
        cout << "3- Sair\n";
        cout << "opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
            cin.ignore();
            cout << "Digite o nome do funcionario: ";
            getline(cin,nome);
            cout << "Digite o codigo do vendedor: ";
            cin >> codigo;
            cout << "digite a idade do vendedor: ";
            cin >> idade;
            cout << "digite o salario do vendedor: ";
            cin >> salario;
            funcionarios.push_back({nome, codigo, idade, salario});
            break;

            case 2:
            for(i=0; i < funcionarios.size(); i++){
                if(funcionarios[i].salario > 5000 && funcionarios[i].idade > 40){
                    cout << funcionarios[i].nome << "\n";
                    cout << funcionarios[i].codigo << "\n";
                    cout << funcionarios[i].idade << "\n";
                    cout << funcionarios[i].salario << "\n";
                    contador++;
                }
            }
            
            cout << "Total de funcionarios encontrados: " << contador << endl;
            break;

            case 3:
            cout << "saindo do programa.";
            break;
        }
    }while(opcao != 3);
    return 0;
}
