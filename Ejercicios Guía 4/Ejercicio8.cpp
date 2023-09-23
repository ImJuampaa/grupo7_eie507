#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena = "7EB3A50110140F3955025607EB7A50110140F3957 7301887EB3A50110140F3955025607EB7A5011 0140F39577301887EB3A50110140F3955025607E B7A50110140F39577301887EB3A50110140F39550 25607B7A50110140F39577301887EB3A50 110140F3955025607EB7A50110140F3957730188";

    string subcadena = "7E";
    string subcadena_tipo1 = "B7 - A5";
    string subcadena_tipo2 = "B3 - A5";
    int pos = 0;

    while ((pos = cadena.find(subcadena)) != string::npos)
    {
        string subcadena_cortada = cadena.substr(0, pos);
        string subcadena_tipo = subcadena_cortada.substr(0, 4);

        if (subcadena_tipo == "B7A5")
        {
            cout << "MSB y LSB: " << subcadena_tipo1 << endl;
            cout << "Sendor de humedad - Data 25" << endl;
        }
        else if (subcadena_tipo == "B3A5")
        {
            cout << "MSB y LSB: " << subcadena_tipo2 << endl;
            cout << "Sensor de temperatura ambiente - Data 301" << endl;
        }

        cout << "\n"
             << endl;
        cadena.erase(0, pos + subcadena.length());
    }
    cout << cadena << endl;
    return 0;
}