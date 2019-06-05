#include<stdio.h>
#include<string.h>
struct equipe
{
char resp[30],titre[30];
int tp,td,cours;

};
typedef struct equipe equip;

equip lecture_eqp()
{
equip eqp;


printf("le resp equip svp");
scanf("%s",eqp.resp);
printf("le titre equip svp");
scanf("%s",eqp.titre);
printf("le nbr dheures du cours  svp");
scanf("%d",eqp.cours);
printf("le nbr dheures du tp  svp");
scanf("%d",eqp.tp);
printf("le nbr dheures du td  svp");
scanf("%d",eqp.td);
return eqp;

}
void affiche_eqp(equip eqp)
{

printf("le resp est %S", eqp.resp);
printf("le nbr d heures cours est %d", eqp.cours);
printf("l e nbr dheures td est %d", eqp.td);
printf("le nbr d heures tp est %d", eqp.tp);

}
void remplir_eqp(equip *tab,int *n)
{

int i;

do {

printf("donnez la taille du tab");
scanf("%d",n);

}
while(*n>5);


for(i=0;i<*n;i++)
tab[i]=lecture_eqp();
}


void affiche_eqp1(equip *tab, int n)
{
int i;
for(i=0;i<n;i++)
affiche_eqp(tab[i]);

}
void rech_mod(equip *tab, int n)
{
int i;
printf("les modules a rechercher sont: ");
for(i=0;i<n;i++)
if(tab[i].cours+tab[i].td+tab[i].tp>=10)
printf("%s",tab[i].titre);

}

int total_heure(equip *tab ,int n)
{
int i,s;
s=0;
for(i=0;i<n;i++)
s=s+tab[i].cours+tab[i].td+tab[i].tp;
return s;
}


void rech_enseignant(equip *tab,int n)
{


char nom[30];
int i;
printf("le nom a rechercher svp");
scanf("%s", nom);
for(i=0;i<n;i++)
if(tab[i].resp==nom)
printf("%s",tab[i].titre);
}
void main()
{
equip tab[5];
int n,hr;

remplir_eqp(tab,&n);
affiche_eqp1(tab,n);
hr=total_heure(tab,n);
printf("%d",hr);
rech_enseignant(tab,n);

}

