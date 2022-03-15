#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

string alfabeto[] {"a", "b", "c", "d", "e", "f", "g", "h", "i", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "z", " "};
int chiave;
string parola;
int sizealfabeto;
int stringlenght;

int get_sizes()
{
    //size of alfabeto array
    sizealfabeto = (sizeof(alfabeto)/sizeof(*alfabeto));
    //size of parola_arr array
    const int stringlenght = (sizeof(parola_arr)/sizeof(*parola_arr));

    return sizealfabeto, stringlenght;
}

void decodifica()
{
    string parola_arr[stringlenght];
    cout << "Inserire la chiave";
    cin >> chiave;
    //size of string
    cout << "Inserire la parola codificata";
    cin >> parola;
    int stringlenght = parola.length();

    int parola_codificata_num[stringlenght];

    for (int i = 0; i < stringlenght; i++)
    {
        for (int j = 0; i < sizealfabeto; j++)
        {
            if (parola_arr[i] == alfabeto[i])
            {
                if ((i + chiave) >= sizealfabeto)
                {
                    parola_codificata_num[i] = (i + chiave) - 22;
                }
                else
                {
                    parola_codificata_num[i] = (i + chiave);
                }
            }
        }
    }
}

int main()
{





}
