#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int addition() {
    printf("Vous avez choisissez l'addition :\n");
    float a = 0,b = 0,c = 0,d = 0,e = 0;
    scanf("%f+%f+%f+%f+%f", &a,&b,&c,&d,&e);
    float solution = a + b + c + d + e;
    printf(" = %.2f\n",solution);
    main();
}
int soustraction() {
    printf("Vous avez choisissez la soustraction :\n");
    float a = 0,b = 0,c = 0,d = 0,e = 0;
    scanf("%f-%f-%f-%f-%f", &a,&b,&c,&d,&e);
    float solution = a - b - c - d - e;
    printf(" = %.2f\n",solution);
    main();
}
int multiplication() {
    printf("Vous avez choisissez la multiplication :\n");
    float a = 1,b = 1,c = 1,d = 1,e = 1;
    scanf("%f*%f*%f*%f*%f", &a,&b,&c,&d,&e);
    float solution = a * b * c * d * e;
    printf(" = %.2f\n",solution);
    main();
}
int division() {
    printf("Vous avez choisissez la division :\n");
    float a = 1,b = 1,c = 1,d = 1,e = 1;
    scanf("%f/%f/%f/%f/%f", &a,&b,&c,&d,&e);
    if(b == 0 || c == 0 || d == 0 || e == 0) {
        printf("Math Erreur.\n");
        main();
    }
    float solution = a / b / c / d / e;
    printf(" = %.2f\n",solution);
    main();
}
int carre() {
    printf("Vous avez choisissez le carre :\n");
    float a = 1,b = 1;
    scanf("%f^{%f}", &a,&b);
    float solution = pow(a,b);
    printf(" = %.2f\n",solution);
    main();
}
int racine() {
    printf("Vous avez choisissez le racine carree :\nEntrer les valeurs selon la format 'x^{y}'");
    float a;
    scanf("%f", &a);
    float solution = sqrtf(a);
    printf(" = %.2f \n",solution);
    main();
}
int main() {
    menu();
}
int menu() {
        int a;
    printf("Choisissez une operation :\n1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Carre\n6. Racine carree\n7. Quitter\n");
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
        printf("Le Program a quitter");
        break;
    default:
        main();
        break;
    }
}