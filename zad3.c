#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sortowanie_babelkowe_rosnace(int);
void sortowanie_babelkowe_malejace(int);
int main()
{
    int choice=0;
    int rand_var;
    int tab[10];
    srand(time(0));
    for(int i=0; i<=10;i++){
        rand_var = rand()%100;
        tab[i]= rand_var;
        for(int j =0;j<=10;j++){
            if(tab[j]==tab[i]){
                tab[i]=rand_var = rand()%100;
            }
        }
        rand_var=0;
    }
    for(int i = 0; i<-10;i++){
        printf("%d",tab[i]);
    }
    printf("Wybierz metode sortowania (1 = rosnaco, 2 = malejaco): ");
    scanf("%d", &choice);
    while(choice != 1 && choice != 2)
    {
        printf("Nieprawidlowy wybor!\n");
        printf("Wybierz metode sortowania (1 = rosnaco, 2 = malejaco): ");
        scanf("%d", &choice);
    }
    if(choice == 1)
    {
        sortowanie_babelkowe_rosnace(i);
    }
    if(choice == 2)
    {
        sortowanie_babelkowe_malejace(i);
    }


}
    return 0;
}

void sortowanie_babelkowe_rosnace(int N)
{
    int i, j, m;
    int temp;
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(tablica[i] > tablica[j])
            {
                temp = tablica[i];
                tablica[i] = tablica[j];
                tablica[j] = temp;

            }

            for(m = 0; m < N; m++)
            {
                printf("%d ", tablica[m]);
            }

            printf("\n");
        }
    }

    printf("\n\nFinalnie: ");
    for(i = 0; i < N; i++)
    {
        printf("%d ", tablica[i]);
    }
}

void sortowanie_babelkowe_malejace(int N)
{
    int i, j, m;
    int temp;
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(tablica[i] < tablica[j])
            {
                temp = tablica[i];
                tablica[i] = tablica[j];
                tablica[j] = temp;

            }

            for(m = 0; m < N; m++)
            {
                printf("%d ", tablica[m]);
            }

            printf("\n");
        }
    }

    printf("\n\nFinalnie: ");
    for(i = 0; i < N; i++)
    {
        printf("%d ", tablica[i]);
    }

