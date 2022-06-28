//
//  main.c
//  Nguyen manh hieu
//
//  Created by Hiếu Hee on 28/06/2022.
//

#include <stdio.h>
//khai bao ham

int kiemtra(int nhapso);

// ham main
int main(){
    int nhapso;
    printf(" nhap 1 so \n");
    scanf("%d",&nhapso);
    if(kiemtra(nhapso)==1)
        printf(" so nay la so chan \n");
    else
        printf(" so nay la so le \n");
    return 0;
}

// goi ham

int kiemtra(int nhapso){
    if(nhapso%2==0)
        return 1;
    else return 0;
}
