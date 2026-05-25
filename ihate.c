#include <stdio.h>

int main(){
    char palavra[11];
    int v_f = 0;

    scanf("%s",palavra);

    for(int i = 0; i < 5; i++){
        if(i % 2 == 0){
            if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
                v_f = 1;
            }else{
                v_f = 0;
                printf("%d",v_f);
                return 1;
            }
        }else{
            if(palavra[i] != 'a' || palavra[i] != 'e' || palavra[i] != 'i' || palavra[i] != 'o' || palavra[i] != 'u'){
                v_f = 1;
            }else{
                v_f = 0;
                printf("%d",v_f);
                return 1;
            }
        }
    }

    for(int i = 5; i < 11; i++){
        if(i % 2 == 0){
            if(palavra[i] != 'a' || palavra[i] != 'e' || palavra[i] != 'i' || palavra[i] != 'o' || palavra[i] != 'u'){
                v_f = 1;
            }else{
                v_f = 0;
                printf("%d",v_f);
                return 1;
            }
        }else{
            if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
                v_f = 1;
            }else{
                v_f = 0;
                printf("%d",v_f);
                return 1;
            }
        }
    }

    printf("%d", v_f);

    return 0;
}