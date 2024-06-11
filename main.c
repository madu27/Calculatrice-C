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
	return (float)a / b;
}

void menu()
{
	int a;
	int b;
	int choix;

    printf("Bienvenue sur ma calculatrice; Veuillez choisir une opération à effectuer :\n");
    printf(" 1 : addition\n");
    printf(" 2 : soustraction\n");
    printf(" 3 : multiplication\n");
    printf(" 4 : division\n");
    do{
		scanf("%d",&choix);
		if (choix < 0 || choix > 4)
		{
			printf("veuillez entrer un nombre entre 1 et 4\n");
		}
    } while (choix < 0 || choix > 4);
    switch (choix)
    {
		case 1:
		    printf("Entrez la valeur de A : ");
		    scanf("%d",&a);
		    printf("Entrez la valeur de B : ");
		    scanf("%d",&b);
		    printf("L'addition de %d + %d = %d\n",a,b,addition(a,b));
		    break;

		case 2:
		    printf("Entrez la valeur de A : ");
		    scanf("%d",&a);
		    printf("Entrez la valeur de B : ");
		    scanf("%d",&b);
		    printf("La soustraction de %d - %d = %d\n",a,b,soustraction(a,b));
		    break;

		case 3:
		    printf("Entrez la valeur de A : ");
		    scanf("%d",&a);
		    printf("Entrez la valeur de B : ");
		    scanf("%d",&b);
		    printf("La multiplication de %d x %d = %d\n",a,b,multiplication(a,b));
		    break;

		case 4:
		    printf("Entrez la valeur de A : ");
		    scanf("%d",&a);
		    printf("Entrez la valeur de B : ");
		    scanf("%d",&b);
		    if (b==0)
		    {
		        printf("B doit etre différent de 0");
		        break;
		    }
		    printf("La division de %d / %d = %f\n",a,b,division(a,b));
		    break;
		
		default:
		    break;
    }
}

int main(){
	int calcul;
    do {
    	calcul = 0;
		menu();
		printf("Voulez vous faire un autre calcul ?\n0 pour non 1 pour oui\n");
		scanf("%d", &calcul);
	} while (calcul == 1);
    return 0;
}
