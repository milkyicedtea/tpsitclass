import os

def dividi(parola):
    return [char for char in parola]

alfabeto: str = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'Z']
alfabeto.append(' ')

def decodifica():
    chiave = int(input('Inserire la tua chiave: ')) # python returns str on input() so int(input())
    parola_codificata: str = input('Inserire la parola da decodificare: ')
    parola_codificata = parola_codificata.upper()
    string_lenght: int = len(parola_codificata)
    parola_codificata = list(dividi(parola_codificata))
    parola_codificata_num = []

    # trova le posizioni reali della parola nell'alfabeto
    x: int = 0
    for x in range(string_lenght):
        i: int = 0
        for i in range(len(alfabeto)):
            if parola_codificata[x] == alfabeto[i]:
                if (i + chiave) >= len(alfabeto):
                    parola_codificata_num.append((i + chiave) - 22)
                else:
                    parola_codificata_num.append(i + chiave)
            i+=1
        x+=1
    
    # assegna le lettere ad ogni numero la lettera corrispondente
    j: int = 0
    parola_decodificata: str = []
    for j in range(string_lenght):
        i: int = 0
        for i in range(len(alfabeto)):
            if parola_codificata_num[j] == i:     
                parola_decodificata.append(alfabeto[i])
                i+=1
        j+=1

    print(f"i numeri decodificati sono: {parola_codificata_num}")
    print(f"La parola decodificata e': {parola_decodificata}")

decodifica()