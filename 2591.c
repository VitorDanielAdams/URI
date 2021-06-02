#include <stdio.h>
#include <string.h>

int main() {

    int c,i,tam,qnt = 0,qnt2 = 0,pos = 0,a = 0;
    char atak[200];

    scanf("%d",&c);
    while(c--){
    scanf("%s",&atak);
    tam = strlen(atak);

        for(i=0;i<tam;i++){
            if(atak[i] == 'k'){
                pos = i;
            }
        }
        for(i=0;i<pos;i++){
            if(atak[i] == 'a'){
                qnt += 1;
            }
        }
        for(i=pos;i<tam;i++){
            if(atak[i] == 'a'){
                qnt2 += 1;
            }
        }
        a = qnt*qnt2;
        printf("k");
        for(i=0;i<a;i++){
            printf("a");
        }
        printf("\n");
        a = 0;
        qnt = 0;
        qnt2 = 0;
        }
    return 0;
}
