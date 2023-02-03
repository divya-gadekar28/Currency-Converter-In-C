#include<stdio.h>
#include<math.h>
int main(){
    
    int choice;
    float amt,dollar,inr,euro,dirham,yen,ruble,rupee;

    printf("\n*******<< Welcome To Currency Converter >>*******");
    printf("\n\nPress 1:To see US Dollar conversion");
    printf("\n\nPress 2:To see Indian Rupee conversion");
    printf("\n\nPress 3:To see European Euro conversion");
    printf("\n\nPress 4:To see UAE Dirham conversion");
    printf("\n\nPress 5:To see Japanese Yen conversion");
    printf("\n\nPress 6:To see Russian Ruble conversion");

    printf("\n\n\nEnter Your Choice:");
    scanf("%d",&choice);
    if(choice<7){
        printf("\n\nEnter a amount:");
        scanf("%f",&amt);
    }
    else{
        printf("\ninvalid choice");
    }
    switch(choice){
        case 1:rupee=amt*82.14;
        printf("%.2f dollar = %.3f Rupee",amt,rupee); 
        euro=amt*0.92;
        printf("\n%.2f dollar = %.3f Euro",amt,euro);
        dirham=amt*3.67;
        printf("\n%.2f dollar = %.3f Dirham",amt,dirham);
        yen=amt*128.57;
        printf("\n%.2f dollar = %.3f Yen",amt,yen);
        ruble=amt*70.32;
        printf("\n%.2f dollar = %.3f Ruble",amt,ruble);
        break;
        
        case 2:dollar=amt/82.14;
        printf("\n%.2f Rupee = %.3f Dollar",amt,dollar);
        euro=amt*0.011;
        printf("\n%.2f Rupee = %.3f Euro",amt,euro);
        dirham=amt*0.045;
        printf("\n%.2f Rupee = %.3f Dirham",amt,dirham);
        ruble=amt*0.86;
        printf("\n%.2f Rupee = %.3f Ruble",amt,ruble);
        yen=amt*1.57;
        printf("\n%.2f Rupee = %.3f Yen",amt,yen);
        break;
        
        case 3:dollar=amt*1.09;
        printf("\n%.2f Euro = %.3f Dollar",amt,dollar);
        rupee=amt*89.47;
        printf("\n%.2f Euro = %.3f Rupee",amt,rupee);
        dirham=amt*4.01;
        printf("\n%.2f Euro = %.3f Driham",amt,dirham);
        ruble=amt*76.88;
        printf("\n%.2f Euro = %.3f Ruble",amt,ruble);
        yen=amt*140.44;
        printf("\n%.2f Euro = %.3f Yen",amt,yen);
        break;
        
        case 4:dollar=amt*0.27;
        printf("\n%.2f Dirham = %.3f Dollar",amt,dollar);
        rupee=amt*22.30;
        printf("\n%.2f Dirham = %.3f Rupee",amt,rupee);
        ruble=amt*19.16;
        printf("\n%.2f Dirham = %.3f Ruble",amt,ruble);
        yen=amt*35.02;
        printf("\n%.2f Dirham = %.3f Yen",amt,yen);
        euro=amt*0.25;
        printf("\n%.2f Dirham = %.3f Euro",amt,euro);
        break;
        
        case 5:dollar=amt*0.0078;
        printf("\n%.2f Yen = %.3f Dollar",amt,dollar);
        ruble=amt*0.55;
        printf("\n%.2f Yen = %.3f Ruble",amt,ruble);
        rupee=amt*0.64;
        printf("\n%.2f Yen = %.3f Rupee",amt,rupee);
        euro=amt*0.0071;
        printf("\n%.2f Yen = %.3f Dollar",amt,euro);
        dirham=amt*0.029;
        printf("\n%.2f Yen = %.3f Dollar",amt,dirham);
        break;
        
        case 6:dollar=amt*0.014;
        printf("\n%.2f Ruble = %.3f Dollar",amt,dollar);
        rupee=amt*1.16;
        printf("\n%.2f Ruble = %.3f Rupee",amt,rupee);
        yen=amt*1.83;
        printf("\n%.2f Ruble = %.3f Yen",amt,yen);
        dirham=amt*0.052;
        printf("\n%.2f Ruble = %.3f Dirham",amt,dirham);
        euro=amt*0.013;
        printf("\n%.2f Ruble = %.3f Euro",amt,euro);
        break;
        
        default:printf("invalid choice");
        break;
    }
    return 0;
}