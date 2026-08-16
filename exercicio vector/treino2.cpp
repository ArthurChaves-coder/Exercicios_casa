#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> notas; 
    float notaDigitada;  
    float soma = 0;
    float media = 0;

    
    for (int i = 0; i < 4; i++) {
        cout << "Digite a nota do aluno: ";
        cin >> notaDigitada;
       notas.push_back(notaDigitada);  
    }

    
    for (int i = 0; i < notas.size(); i++) {
        soma = soma + notas[i];
    }

    media = soma / notas.size();

    cout << "A soma das notas e: " << soma << endl;
    cout << "A media das notas e: " << media << endl;

    return 0;
}
