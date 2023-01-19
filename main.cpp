// C++ Calculator
#include <iostream>
using namespace std;

void displayScreen()
{
    cout << "\nSelecione uma operacao : \n";
    cout << "1.Adicao\n";
    cout << "2.Subtracao\n";
    cout << "3.Multiplicacao\n";
    cout << "4.Divisao\n";
}

int main()
{
    double a, b, result;
    int op;

    displayScreen();
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Insira o 1 numero : ";
        cin >> a;
        cout << "Insira o 2 numero : ";
        cin >> b;
        result = a + b;
        cout << "Resultado : " << result;
        break;
    case 2:
        cout << "Insira o 1 numero : ";
        cin >> a;
        cout << "Insira o 2 numero : ";
        cin >> b;
        result = a - b;
        cout << "Resultado : " << result;
        break;
    case 3:
        cout << "Insira o 1 numero : ";
        cin >> a;
        cout << "Insira o 2 numero : ";
        cin >> b;
        result = a * b;
        cout << "Resultado : " << result;
        break;
    case 4:
        cout << "Insira o 1 numero : ";
        cin >> a;
        cout << "Insira o 2 numero : ";
        cin >> b;
        result = a / b;
        cout << "Resultado : " << result;
        break;
    default:
        cout << "Selecione uma opcao valida\n";
        displayScreen();
    }

    return 0;
}