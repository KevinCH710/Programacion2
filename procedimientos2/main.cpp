#include <iostream>

using namespace std;
/*
Ingresar 3 numeros usando un procedimiento, luego
determinar el numero mayor usando otro procedimiento
presentar el mayor en el main.
*/

void ingresar(int &num1, int &num2, int &num3)
{
    cout<<"Ingresar numero #1: ";
    cin>>num1;
    cout<<"Ingresar numero #2: ";
    cin>>num2;
    cout<<"Ingresar numero #3: ";
    cin>>num3;
}

void mayor(int num1, int num2, int num3, int &Mayor)
{
    if ((num1 > num2)and(num1>num3))

        Mayor = num1;

    else if (num2 > num3)

        Mayor = num2;

    else

        Mayor = num3;

}

int main()
{
    int num1, num2, num3, Mayor;
    ingresar(num1, num2, num3);
    mayor (num1, num2, num3, Mayor);

    cout<<"Numero mayor es: "<<M
    ayor<<"\n";

    return 0;
}
