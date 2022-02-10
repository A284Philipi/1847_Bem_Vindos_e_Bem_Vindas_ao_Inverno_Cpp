#include <iostream>

using namespace std;

int main()
{
    int temp_1, temp_2, temp_3; //Temperatura dos 3 dias
    cin >> temp_1;
    cin >> temp_2;
    cin >> temp_3;

    if (temp_1 > temp_2){ //Casos em que a temperatura desceu do 1º para o 2º dia
        if (temp_3 >= temp_2){ //Primeiro caso
            cout << ":)" <<endl;
        }else{
            if (temp_2 - temp_3 < temp_1 - temp_2){ //Quinto caso
                cout << ":)" <<endl;
            }else{ //Sexto caso
                cout << ":(" <<endl;
            }
        }
    }else{
        if (temp_1 < temp_2){ //Casos em que a temperatura subiu do 1º para o 2º dia
            if (temp_3 <= temp_2){ //Segundo caso
                cout << ":(" <<endl;
            }else{
                if (temp_3 - temp_2 < temp_2 - temp_1){ //Terceiro caso
                    cout << ":(" <<endl;
                }else{ //Quarto caso
                    cout << ":)" <<endl;
                }
            }
        }else{ //Casos em que a temperatura permaneceu constante do 1º para o 2º dia
            if (temp_3 > temp_2){ //Sétimo caso
                cout << ":)" <<endl;
            }else{ //Oitavo caso
                 cout << ":(" <<endl;
            }
        }
    }
    return 0;
}
