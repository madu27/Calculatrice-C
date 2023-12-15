// Mini-Projet : Calculatrice

// Description :
// Développez une calculatrice en langage C capable d'effectuer des opérations arithmétiques de base. L'utilisateur devrait être en mesure d'entrer une expression mathématique simple, et le programme doit évaluer et afficher le résultat.

// Fonctionnalités suggérées :

//     Addition, soustraction, multiplication et division.
//     Gestion des parenthèses pour les priorités.
//     Possibilité d'ajouter des fonctionnalités avancées comme les opérations trigonométriques, logarithmiques, etc.
//     Traitement des erreurs d'entrée (par exemple, division par zéro).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int addition(int a, int b){
    return a+b;
}

int soustraction(int a, int b){
    return a-b;
}

int multiplication(int a, int b){
    return a*b;
}

float  division(int a, int b){
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Erreur : Division par zero\n");
        return 0.0;
    }
}

int main(){
    int a;
    int b;
    int choix;

    printf("Bienvenue sur ma calculatrice; Veuillez choisir une opération à effectuer :\n");
    printf(" 1 : addition\n");
    printf(" 2 : soustraction\n");
    printf(" 3 : multiplication\n");
    printf(" 4 : division\n");

    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        printf("Entrez la valeur de A : ");
        scanf("%d",&a);
        printf("Entrez la valeur de B : ");
        scanf("%d",&b);
        printf("L'addition de %d + %d = %d",a,b,addition(a,b));
        break;

    case 2:
        printf("Entrez la valeur de A : ");
        scanf("%d",&a);
        printf("Entrez la valeur de B : ");
        scanf("%d",&b);
        printf("La soustraction de %d - %d = %d",a,b,soustraction(a,b));
        break;

    case 3:
        printf("Entrez la valeur de A : ");
        scanf("%d",&a);
        printf("Entrez la valeur de B : ");
        scanf("%d",&b);
        printf("La multiplication de %d x %d = %d",a,b,multiplication(a,b));
        break;

    case 4:
        printf("Entrez la valeur de A : ");
        scanf("%d",&a);
        printf("Entrez la valeur de B : ");
        scanf("%d",&b);
        if (b==0)
        {
            printf("B doit etre supérieur à 0");
            break;
        }
        printf("La division de %d / %d = %f",a,b,division(a,b));
        break;
    
    default:
        break;
    }

}