/*
 * Définition de la structure date
 */
typedef struct {
    int jour;
    int mois;
    int annee;
} date;

int main() {

    /*
     * Variables pour l'entrée de la date
     */
    int jour, mois, annee;

    /*
     * Initialisation de la variable de type date
     */
    printf("Entrez le jour, le mois et l'année : ");
    scanf("%d%d%d", &jour, &mois, &annee);

    date maDate = {jour, mois, annee};

    /*
     * Affichage de la variable maDate
     */
    printf("Date : %02d/%02d/%04d\n", maDate.jour, maDate.mois, maDate.annee);

    /*
     * Définition d'un pointeur de type date
     */
    date* ptr_maDate = &maDate;

    /*
     * Affichage de la structure pointée par ptr_maDate
     */
    printf("Date (avec pointeur) : %02d/%02d/%04d\n", ptr_maDate->jour, ptr_maDate->mois, ptr_maDate->annee);

    return 0;
}
*exercice 3
/*
 * Définition de la structure date
 */
typedef struct {
    int jour;
    int mois;
    int annee;
} date;

int main() {

    /*
     * Définition d'un tableau de 3 structures date
     */
    date tab_date[3];

    /*
     * Initialisation du tableau
     */
    printf("Entrez 3 dates sous forme de jour, mois, année : \n");
    for (int i = 0; i < 3; i++) {
        printf("Date %d : ", i + 1);
        scanf("%d%d%d", &tab_date[i].jour, &tab_date[i].mois, &tab_date[i].annee);
    }

    /*
     * Définition d'un pointeur sur le tableau
     */
    date *ptr_tab_date = tab_date;

    /*
     * Affichage du contenu du tableau
     */
    printf("\nDates entrées : \n");
    for (int i = 0; i < 3; i++) {
        printf("Date %d : %02d/%02d/%04d\n", i + 1, ptr_tab_date[i].jour, ptr_tab_date[i].mois, ptr_tab_date[i].annee);
    }

    return 0;
}
