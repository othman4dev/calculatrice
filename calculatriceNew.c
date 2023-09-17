#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int select(int info) {
    printf("\n");
    int a;
    printf("Entrer la longueur de tableau : ");
    scanf("%d",&a);
    int h = a - 1;
    float list[h];
    if (a <= 0 && a > 11 ) {
        printf("\n");
        printf("Le maximum possible pour longueur d'un tableaux est 10.\n");
        printf("\n");
        select(info);
    }
    for (int i = 0; i < a; i++)
    {
        int x = i + 1;
        printf("%d. ",x);
        scanf("%f", &list[i]);
        printf("\n");
    }
    if(info == 7) {
        maximum(a,list);
    } else if(info == 8) {
        minimum(a,list);
    } else if(info == 9) {
        moyenne(a,list);
    }
}
int maximum(int a,float list[a]) {
    printf("\n");
    float max = 0;
    for (int i = 0; i < a; i++)
    {
        if ( list[i] >= max )
        {
            max = list[i];
        } 
        else 
        {
            max = max;   
        } 
    }
    printf("\n Le max de cette list est : %.2f\n", max);
    printf("\n");
    main();
}
int minimum(int a,float list[a]) {
    printf("\n");
    float min = 199999999;
    for (int i = 0; i < a; i++)
    {
        if ( list[i] <= min )
        {
            min = list[i];
        } 
        else 
        {
            min = min;   
        } 
    }
    printf("\n Le min de cette list est : %.2f\n", min);
    printf("\n");
    main();
}
int moyenne(int a,float list[a]) {
    float moyenne = 0;
    for(int i = 0; i < a ; i++) {
        moyenne = moyenne + list[i];
    }
    moyenne = moyenne/a;
    printf("La moyenne de cette list est : %.2f", moyenne);
    main();
}
int addition() {
    printf("\n");
    printf("Vous avez choisissez l'addition :\n formule : a+b+c...\n");
    printf("\n");
    float a = 0,b = 0,c = 0,d = 0,e = 0;
    scanf("%f+%f+%f+%f+%f", &a,&b,&c,&d,&e);
    float solution = a + b + c + d + e;
    printf("\n");
    printf(" = %.2f\n",solution);
    printf("\n");
    main();
}
int soustraction() {
    printf("Vous avez choisissez la soustraction :\n formule : a-b-c...\n");
    float a = 0,b = 0,c = 0,d = 0,e = 0;
    scanf("%f-%f-%f-%f-%f", &a,&b,&c,&d,&e);
    float solution = a - b - c - d - e;
    printf("\n");
    printf(" = %.2f\n",solution);
    printf("\n");
    main();
}
int multiplication() {
    printf("Vous avez choisissez la multiplication :\n formule : a*b*c...\n");
    float a = 1,b = 1,c = 1,d = 1,e = 1;
    scanf("%f*%f*%f*%f*%f", &a,&b,&c,&d,&e);
    float solution = a * b * c * d * e;
    printf("\n");
    printf(" = %.2f\n",solution);
    printf("\n");
    main();
}
int division() {
    printf("Vous avez choisissez la division :\n formule : a/b/c...\n");
    float a = 1,b = 1,c = 1,d = 1,e = 1;
    scanf("%f/%f/%f/%f/%f", &a,&b,&c,&d,&e);
    if(b == 0 || c == 0 || d == 0 || e == 0) {
        printf("\n");
        printf("Math Erreur.\n");
        printf("\n");
        main();
    }
    float solution = a / b / c / d / e;
    printf(" = %.2f\n",solution);
    main();
}
int carre() {
    printf("Vous avez choisissez la puissance:\nEntrer les valeurs selon la format 'x^{y}'\n");
    float a = 1,b = 1;
    scanf("%f^{%f}", &a,&b);
    float solution = pow(a,b);
    printf("\n");
    printf(" = %.2f\n",solution);
    printf("\n");
    main();
}
int racine() {
    printf("Vous avez choisissez le racine :\n formule est : a ");
    float a;
    scanf("%f", &a);
    float solution = sqrtf(a);
    printf("\n");
    printf(" = %.2f \n",solution);
    printf("\n");
    main();
}
int main() {
    menu();
}
int menu() {
        int a;
    printf("\n__________________________\n\nChoisissez une operation :\n__________________________\n\n1. Addition\n\n2. Soustraction\n\n3. Multiplication\n\n4. Division\n\n5. Carre\n\n6. Racine carree\n\n7. Le max\n\n8. Le min\n\n9. La moyenne\n\n10. Quitter\n\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        addition();
        break;
    case 2:
        soustraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        carre();
        break;
    case 6:
        racine();
        break;
    case 7:
        select(7);
        break;
    case 8:
        select(8);
    case 9:
        select(9);
        break;
    case 10:
        printf("Le Program a quitter");
        break;
    default:
        main();
        break;
    }
}
