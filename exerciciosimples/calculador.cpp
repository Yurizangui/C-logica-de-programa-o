#include <iostream>

using namespace std;

int soma(int x, int y){
    return x + y;
}

int sub(int x, int y){
    return x - y;
}

double dividir(double x, double y){
    if (y == 0){
        cout << "Não se faz divisao por zero!" << endl;
        return 0;
    }
    return x / y;
}

int mult(int x, int y){
    return x * y;
}

int main(){
    int num1, num2;
    int opcao;
    char continuar;
    double resp;

    do {
        cout << "\nDigite dois numeros: ";
        cin >> num1 >> num2;

        cout << "\nEscolha a operacao:\n";
        cout << "1 - Soma\n";
        cout << "2 - Subtracao\n";
        cout << "3 - Multiplicacao\n";
        cout << "4 - Divisao\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
                resp = soma(num1, num2);
                break;
            case 2:
                resp = sub(num1, num2);
                break;
            case 3:
                resp = mult(num1, num2);
                break;
            case 4:
                resp = dividir(num1, num2);
                break;
            default:
                cout << "Opcao invalida!" << endl;
                continue; // volta para o início do loop
        }

        cout << "Resultado: " << resp << endl;

        cout << "\nDeseja continuar? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa encerrado." << endl;

    return 0;
}