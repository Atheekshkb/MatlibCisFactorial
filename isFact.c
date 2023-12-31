#include <stdio.h>
#include <stdbool.h>

bool isFact(unsigned long long int num){
    unsigned int i =0;
    unsigned long long int temp =1;
    bool isfact = true;
    while (isfact){
        if(temp != num){
            if(temp < num){
                i++;
                temp = temp * i;
            } else {
                isfact = false;
                break;
            }
        } else {
            isfact = true;
            break;
        }
    }
    return isfact;
}

int main(void){
    int num =0, i=0;
    printf("Please enter the number you would check if factorial: \n");
    scanf("%d", &num);
    if(isFact(num)){
        printf("%d is factorial !\n", num);
    } else {
        printf("%d is not a factorial!\n", num);
    }
    return 0;
}