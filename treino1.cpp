#include<iostream>
#include<string>

using namespace std;

int main(){
  
    string nome;
    int idade;
    string cidade;

    cout << "digite seu nome: ";
    getline(cin,nome);

    cout << "digite sua idade: ";
    cin >> idade;

    cin.ignore(); // Limpa o buffer de entrada antes de ler a próxima linha
    cout << "digite sua cidade: ";
    getline(cin, cidade);

    cout << "ola " << nome << ", voce tem " << idade << " anos e mora em " << cidade << endl;
}
