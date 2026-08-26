#include <stdio.h>

int calcula_pa(int p, int r,int n){
    int termo_atual = p;
    

    for(int i = 1; i <= n; i++) {
        printf("%d\n", p);
        p = p + r;
    }
}
int calcula_pg(int p, int r,int n){
    int termo_atual = p;

    for(int i = 1; i <= n; i++) {
            printf("%d\n", p);
            p = p * r;
        }
    
    return 0;
}
int main(){
    int p,r,n;
    printf("entre com o primeiro termo sa pa: ");
    scanf("%d",&p);

    printf("entre com a razao da pa: ");
    scanf("%d",&r);

    printf("entre com a quantidade de termos a serem cauculados: ");
    scanf("%d",&n);

    if (n <= 0){
        printf("nao e aceito valor negativo\n");
        return -1;
    }
    else {
        calcula_pa(p,r,n);
        printf("---------------\n");
        calcula_pg(p,r,n);
    }
    return 0;
}