    //cpf: 280.012.389
    //primeiro digito: 10x2 + 9x8 + 0 + 0 6x1 + 5x2 + 4x3 + 3x8 + 2x9
    //soma: 162/11 = 14,7 -> resto 8
    //1 digito: 11 - 8 = 3
    //cpf: 280.012.389-3*

    //seg numero
    //cpf: 280.012.389-3* -> com primeiro numero
    //cpf do seg numer: 80.012.389-3 = 8x10 + 0 + 0 + 7x1 + 6x2 + 5x3 + 4x8 + 3x9 + 2x3
    // 179/11 = 16,27 -> resto 3; 11-3 = 8

    #include <stdio.h>
    int main(){
        int d1,d2,d3,d4,d5,d6,d7,d8,d9;
        int soma1;
        int soma2;
        int resto;
        int resto2;
        int dv1;
        int dv2;
        printf("Digite o primeiro numero do cpf: ");
        scanf("%d", &d1);
        printf("Digite o seg numero do cpf: ");
        scanf("%d", &d2);
        printf("Digite o terc numero do cpf: ");
        scanf("%d", &d3);
        printf("Digite o quart numero do cpf: ");
        scanf("%d", &d4);
        printf("Digite o quint numero do cpf: ");
        scanf("%d", &d5);
        printf("Digite o sex numero do cpf: ");
        scanf("%d", &d6);
        printf("Digite o sept numero do cpf: ");
        scanf("%d", &d7);
        printf("Digite o oit numero do cpf: ");
        scanf("%d", &d8);
        printf("Digite o nov numero do cpf: ");
        scanf("%d", &d9);
        soma1 = (10 * d1) + (9 * d2) + (8 * d3) + (7 * d4) + (6 * d5) + (5 * d6) + (4 * d7) + (3 * d8) + (2 * d9);
        resto = soma1 % 11;

        if (resto < 2){
            dv1 = 0;
        }
        else{
            dv1 = 11 - resto;
        }

        printf("seu numero e %d\n", dv1);

        soma2 = (10 * d2) + (9 * d3) + (8 * d4) + (7 * d5) + (6 * d6) + (5 * d7) + (4 * d8) + (3 * d9) + (2 * dv1);
        resto2 = soma2 % 11;

        if (resto2 < 2){
            dv2 = 0;
        }else {
             dv2 = 11 - resto2;
        }
        
        printf("seu seg numero e: %d\n", dv2);
        printf("e seu cpf e:%d%d%d.%d%d%d.%d%d%d-%d%d", d1,d2,d3,d4,d5,d6,d7,d8,d9,dv1,dv2);
        return 0;
    }