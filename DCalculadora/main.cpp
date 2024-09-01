#include <iostream>
#include <cmath>

using namespace std;

double lerNum() {
    double m;
    int e;
    cout << "Digite a mantissa: ";
    cin >> m;
    cout << "Digite o expoente: ";
    cin >> e;
    return m * pow(10, e);
}

void exibirNum(double n) {
    cout << "Resultado: " << n << " (";
    cout << n / pow(10, floor(log10(fabs(n)))) << " x 10^";
    cout << floor(log10(fabs(n))) << ")" << endl;
}

int main() {
    double n1, n2;
    int op;

    cout << "Insira o primeiro numero em notacao cientifica:" << endl;
    n1 = lerNum();
    cout << "Insira o segundo numero em notacao cientifica:" << endl;
    n2 = lerNum();

    cout << "Escolha a operação:" << endl;
    cout << "1. Adicao" << endl;
    cout << "2. Subtracao" << endl;
    cout << "3. Multiplicacao" << endl;
    cout << "4. Divisao" << endl;
    cin >> op;

    double res;

    switch (op) {
        case 1:
            res = n1 + n2;
            break;
        case 2:
            res = n1 - n2;
            break;
        case 3:
            res = n1 * n2;
            break;
        case 4:
            if (n2 != 0) {
                res = n1 / n2;
            } else {
                cout << "Erro: divisao por zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Opcao invalida!" << endl;
            return 1;
    }

    exibirNum(res);
    return 0;
}
