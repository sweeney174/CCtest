#include <stdio.h>
int main(){
    printf("请输入身高（英寸）：\n");
    float inch;
    scanf("%f",&inch);
    float cm=2.54*inch;
    printf("身高为%f cm\n",cm);
}