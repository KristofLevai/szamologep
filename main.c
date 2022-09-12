#include <stdio.h>

//kell code runner is telepítésnél
// a main azért int, mert itt a sikeres lefutás a return 0 
//code-runner.run első engedelyez

int main(){
    //el tudja végezni az alapműveleteket

    int a, b;
    char op; //char a character típus

    printf("\nAdj meg egy szamot!");
    scanf("%d", &a); //ha jobb érték (az a) = aktuális érték, ha a bal oldalon, akkor a memória címre hivatkozik | &a = címkézpő operátor a & | %d=int típusú adat
    printf("a = %d",a);

    printf("\nAdj meg egy masik szamot");
    scanf("%d", &b);
    printf("b = %d",b);

    printf("\nMilyen muveletet szeretnel? (+ | - | * | / )");
    scanf(" %c ", &op);
    printf("c = %c", op);
   
   // printf();

    if(op == '+'){
       printf("Eredmeny: %d", a+b);

    }
  
    else if(op == '-'){

        printf("Eredmeny: %d", a-b);

    }

    else if(op == '/'){
        if(b !=0){
            printf("Eredmeny: %d", (double)(a/b));
        }
        else{printf("Nullával nem lehet osztani");}
    }

    else if(op == '*'){

         printf("Eredmeny: %d", a*b);
    }
    else{
        printf("\n","nem jó logikai műveletet vagy számokat adott meg!");
    }

}
