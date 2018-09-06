#include <stdio.h>

int main (void){
    int testes;
    scanf("%d", &testes);
    while(testes--){
        int enderecos, chaves, x, y;
        scanf("%d %d", &enderecos, &chaves);
        int listao[enderecos][chaves];
        for(x = 0; x < enderecos; x++){
            for(y = 0; y < chaves; y++){
                listao[x][y] = 0;
            }
        }
        
        for(x = 0; x < chaves; x++){
            int tmp, tmp2;
            scanf("%d", &tmp);
            tmp2 = tmp%enderecos;
            for(y = 0; y < chaves; y++){
                if(listao[tmp2][y]==0){
                    printf("entrei %d %d %d\n", tmp2, y, tmp);
                    listao[tmp2][y] = tmp;
                    break;
                }
            }
        }
        for(x = 0; x < enderecos; x++){
            printf("%d -> ", x);
            for(y = 0; y < chaves; y++){
                if(!listao[x][y]){
                    printf(" \\");
                    break;
                }
                else
                    printf("%d -> ", listao[x][y]);
            }
            printf("\n");
        }
    }
    return 0;
}
