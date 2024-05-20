#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
 
void razbij(int* stevila, int n, int razdeli, bool* dodano,int ix){
 
    if(razdeli < 0 || ix > n){
        return;
    }
 
    if(razdeli == 0){
        //pravi rezultat in ga izpisemo
        printf("{");
        bool prvo = true;
        for(int i = 0; i < n; i++){
            if(dodano[i]){
                if(!prvo){
                    printf(", ");
                }
                printf("%d", stevila[i]);
                prvo = false;
            }
 
        }
        printf("}\n");
        return;
    }
 
 
    dodano[ix] = true;
    razbij(stevila, n, razdeli - stevila[ix],dodano, ix + 1);
    dodano[ix] = false;
    razbij(stevila, n, razdeli, dodano, ix + 1);
 
 
}
 
int main(){
    int n=0;
    scanf("%d", &n);
    int* stevila = malloc(n * sizeof(int));
    int vsota = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &stevila[i]);
        vsota += stevila[i];
    }
 
 
    bool* dodano = calloc(n, sizeof(bool));
    dodano[0] = true;
 
    int razdeli = vsota/2 - stevila[0];
 
    razbij(stevila, n, razdeli, dodano, 1);
 
    free(stevila);
    free(dodano);
 
    return 0;
}
