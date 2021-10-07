#include "hextodec.h"
#define hexPow4 65536
#define hexPow3 4096
#define hexPow2 256
#define hexPow1 16
#define TAM 17

int tamanhoHex(int dec){
    int tamanho;

    if (dec / hexPow4 > 15){
        tamanho = 3;
    }else if (dec % hexPow3 > 15){
        tamanho = 2;
    }else if (dec / hexPow2 > 15){
        tamanho = 1;
    }else if (dec / hexPow1 > 15){
        tamanho = 0;
    }
}

int potenciaHex(int tamanho){
    int potencia;
    switch(tamanho){
        case 1: potencia = hexPow1;
        break;
                case 2: potencia = hexPow2;
        break;
                case 3: potencia = hexPow3;
        break;
                case 4: potencia = hexPow4;
        break;

    }
    return potencia;
}

unsigned char dec_to_hex(int dec){
    int i, b, tamanho, quociente, potencia;
    char resto[TAM] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}, resultado[255];
    i = 0;
    int resultado[255];
    tamanho = tamanhoHex(dec);
    potencia = potenciaHex(tamanho);

    for(i=0; i <= tamanho; i++){
        if(dec == 0){
            resultado[i] = resto[0];
        }else{
            resultado[i] = resto[dec/potencia];
            dec %= potencia;
            potencia = potenciaHex(tamanho);
        }
    }
    return resultado;

}

