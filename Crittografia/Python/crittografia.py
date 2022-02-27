import os
import string

def dividi(parola):
    return [char for char in parola]


alfabeto = list(string.ascii_uppercase)
alfabeto.append(' ')
lunghezza_alfabeto: int = len(alfabeto)
parola_codificata_num = []
parola_decodificata = []

print(alfabeto)
print(lunghezza_alfabeto)


def codifica():
    chiave = int(input('Inserire la tua chiave: ')) # python returns str on input so int()
    parola_decodificata: str = input('Inserire la parola da codificare: ')
    parola_decodificata = parola_codificata.upper()
    string_lenght: int = len(parola_decodificata)
    parola_decodificata = list(dividi(parola_decodificata))
    parola_decodificata_num = []

    x: int = 0
    for x in range(string_lenght):
        i: int = 0
        for i in range(lunghezza_alfabeto):
            if parola_decodificata[x] == alfabeto[i]:
                if (i + 4) > 27:
                    parola_decodificata_num.append((i + chiave) - 27)
                else:
                    parola_decodificata_num.append(i + chiave)
            i+=1
        x+=1
    
    j: int = 0
    parola_codificata = []
    for j in range(string_lenght):
        if parola_decodificata_num == j:
            parola_codificata
        


    print(parola_decodificata_num)
    print(parola_codificata)