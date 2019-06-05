#include<stdio.h>
struct point {
int x,y;
char color[10];
};
typedef struct point pnt;

pnt lecture_p1()
{
pnt p;
printf("l'abscisse du point svp");
scanf("%d",p.x);
printf("l'ordonnée du point svp");
scanf("%d",&p.y);
printf("la couleur du point svp");
scanf("%s",&p.color);

return p;

}
void lecture_p2(pnt *p)
{
printf("l'abscisse du point svp");
scanf("%d",p.x);
printf("l'ordonnée du point svp");
scanf("%d",&p.y);
printf("la couleur du point svp");
scanf("%s",&p.color);
}


void affiche_p(pnt p)
{

printf("la couleur est %S", p.color);
printf("labscisse du point  est %d", p.x);
printf("l ordonne du point est %S", p.y);
}

void remplir_tp(pnt *tab, int *n)

{

int i;

do {

printf("donnez la taille du tab");
scanf("%d",n);

}
while(*n>=10);


for(i=0;i<*n;i++)
tab[i]=lelcture_p1();
}

void affiche_tp(pnt *tab, int n)
{
int i;
for(i=0;i<n;i++)
affiche_p(tab[i]);
}

void tri_tp(pnt *tab,int n);
{
int i,j,min;
pnt aux;

for (i=0;i<n-1;i++)
{

min=i;
for(j=i+1;j<n;j++)
{


if(t[min].x>t[j].x)
   min=j;
}
if(i!=min)
{
    aux=t[min];
    t[min]=t[i];
    t[i]=aux;
}
}
}
int existe_p(pnt *tab,int n, int i,int a, int b)

{
if(tab[i].x==a && tab[i].y==b)
return i;
else if(i==n)
return -1;
else
return existe_p(tab,n,i+1,a,b);

}
void main()
{
pnt p, tab[10];
int n,a,b,verif;
p=lecture_p1();
affiche_p(p);
remplir_tp(tab,n);
affiche_tp(tab,n);
tri_tp(tab,n);
affiche_tp(tab,n);
printf("les coordonnées des points chercher svp!!");
scanf("%d %d", &a,&b);
verif=existe_p(tab,n,0,a,b);

}
}
