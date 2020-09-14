#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

typedef struct
{
	char nom[100];
	char prenom[100];
	char adresse[100];
	char classe[100];
} student;

int menu()
{
	int choixMenu;
	printf("1.Ajouter un eleve\n");
	printf("2.Afficher les infos de tous les eleves\n");
	printf("3.Savegarder les infos d'un eleve\n");
	printf("4.Charger les infos d'un eleve\n");
	scanf("%d", &choixMenu);
	return choixMenu;
}

int addStudent(student *S)
{
	scanf("%s", S->nom);
	scanf("%s", S->prenom);
	scanf("%s", S->adresse);
	scanf("%s", S->classe);
}
void displayStudent(student *S)
{
	printf("Nom\n", S->nom);
	printf("Prenom\n", S->prenom);
	printf("Adresse\n", S->adresse);
	printf("Classe\n", S->classe);
}
void saveStudent()
{
	FILE *fopen(const char *nomDuFichier, const char *modeOuverture);
	FILE *fichier = NULL;

	if (fichier != NULL)
	{
		fichier = fopen("info.txt", "r+");
	}
	else
	{
		printf("Impossible d'ouvrir le fichier");
	}
}
void loadStudent()
{
	//charger les fichiers
}

int main(void)
{
	int choixMenu = 0;
	while (choixMenu >= 1 && choixMenu <= 4)
		;
	{
		student S;
		switch (menu())
		{
		case 1:
			printf("Ajouter un eleve\n");
			addStudent(&S);
			choixMenu = menu();
			break;

		case 2:
			printf("Afficher les infos de tous les eleves\n\n");
			displayStudent(&S);
			choixMenu = menu();
			break;

		case 3:
			printf("Savegarder les infos d'un eleve\n");
			saveStudent();

			break;

		case 4:
			printf("Charger les infos d'un eleve\n");
			//loadStudent
			break;

		default:
			menu();
		}
	}
	system("PAUSE");
	return 0;
}
