#include <bits/stdc++.h>

using namespace std;

int main()
{

    char quest;
    int hora, minuto, dia, mes, ano, N, i;

    cout << "Digite uma Data: \n";
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
    cout << endl;
    cout << "Hoje e: " << dia << "/" << mes << "/" << ano << endl;
    cout << endl;

    cout << "Digite uma hora do dia e os minutos: \n";
    cout << "Hora: ";
    cin >> hora;
    cout << "Minutos: ";
    cin >> minuto;
    cout << endl;
    cout << "Agora sao " << hora << " horas e " << minuto << " minutos." << endl;
    cout << endl;

    if (hora >= 5 && hora <= 12)
    {
        cout << "Bom Dia!\n";
        cout << "Bem Vindo!\n";
    }
    else if (hora >= 12 && hora <= 17)
    {
        cout << "Boa Tarde!\n";
        cout << "Bem Vindo!\n";
    }
    else
    {
        cout << "Boa Noite!\n";
        cout << "Bem Vindo!\n";
    }

    cout << endl;

    do
    {
        cout << "Quantos Funcionarios serao informados? ";
        cin >> N;

        char nome1[N][50];
        char sexo1[N];
        double salario1[N];
        double altura1[N];
        int idade1[N];


        for(i = 0; i < N; i++)
        {
            fseek(stdin, 0, SEEK_END);
            cout << "Digite o Nome do Funcionario: ";
            gets(nome1[i]);
            cout << "Digite o Sexo do funcionario M ou F: ";
            cin >> sexo1[i];
            cin.ignore(INT_MAX, '\n');
            cout << "Digite o Salario: ";
            cin >> salario1[i];
            cout << "Digite a Idade: ";
            cin >> idade1[i];
            cout << "Digite a Altura: ";
            cin >> altura1[i];
        }

        for(i = 0; i < N; i++)
        {
            cout << fixed << setprecision(2);

            if(sexo1[i] == 'M' || sexo1[i] == 'm')
            {

                cout << "O Funcionario digitado de nome " << nome1[i] << ", sexo " << sexo1[i] << ", ganha R$ " << salario1 [i] << ", tem " << idade1[i] << " anos de idade e " << altura1 [i] << "mts de altura \n";
            }

            else
            {
                cout << "A Funcionaria digitada de nome " << nome1[i] << ", sexo " << sexo1[i] << ", ganha R$ " << salario1 [i] << ", tem " << idade1[i] << " anos de idade e " << altura1 [i] << "mts de altura \n";
            }
        }

        cin.ignore(INT_MAX, '\n');
        cout << "Deseja repetir? ";
        cin >> quest;
        cin.ignore(INT_MAX, '\n');
        cout << endl;
    }
    while (quest == 'S' || quest == 's');

    return 0;
}
