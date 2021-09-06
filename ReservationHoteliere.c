#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <conio.h>

void menu2();
void menu1();
void g_d_r();
void g_d_c();
void g_d_ch();
int facture();
int date_de_reservation();
int debut_de_sejour();
int fin_de_sejour();
int nombre_de_nuits();
int date_de_reservationm();
int debut_de_sejourm();
int fin_de_sejourm();
int nombre_de_nuitsm();
void generation_detats();



typedef struct{
int jour,mois,annee;
}date;
typedef struct{
int ndeclient;
char nom[20],prenom[20],cin[20];
float tel;
}sgdc;
typedef struct {
int ndenuits,ndereservation;
date datedereservation,debutdesejour,findesejour;
float montantavance;
}sgdr;
typedef struct{
int ndechambre;
int typedechambre;
float prix;
}sgdch;
typedef struct{
sgdc vc[20];
sgdc tc[20];
sgdch vch[20],tch[20];
sgdr vr[20],tr[20];
}hotel;
hotel A;

int C=1,B=1,R=1;


void main()
{

    system("color 3F");
    menu1();


 }
 int choix;
 void menu1()
    {
        system("cls");
        int choix1;
    puts("       °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("       °°°°   GESTION DE RESERVATION HOTELIERE         °°°°");
    puts("       °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("       °°°°     GESTION DES CLIENTS     :<<TAPES 1>>   °°°°");
    puts("       °°°°     GESTION DES CHAMBRES    :<<TAPES 2>>   °°°°");
    puts("       °°°°     GESTION DES reservation :<<TAPES 3>>   °°°°");
    puts("       °°°°     GENERATION D'ETATS      :<<TAPES 4>>   °°°°");
    puts("       °°°°     QUITTER                 :<<TAPES 5>>   °°°°");
    puts("       °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("               CHOISISSEZ UNE OPTION==========>> \a ");
    scanf("%d",&choix1);
    choix=choix1;
    switch(choix1)
    {
    case 1:
        g_d_c();
        break;
    case 2:
        g_d_ch();
        break;
    case 3:
        g_d_r();
        break;
    case 4:
        generation_detats();
        break;
    case 5:
        exit(0);
    default:
        if(choix>5);
        puts("     °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        puts("     °°°° SVP RESEYER AUTRE OPTION °°°");
        puts("     °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        menu1();
    }

}


 void menu2()
 {
     system("cls");
     int M,i;

     puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
     puts("°° 1:NOUVEAU 2:CONSULTER 3:MODIFIER 4:SUPPRIMER 5:MENU  °°");
     puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        do{
            printf("°°°°°°°°>>votre choix   :");
            scanf("%d",&M);
         }while(M<1 || M>5);
     switch(M){

     case 1:{
        switch(choix){
        case 1:
            g_d_c();
            break;
        case 2:
            g_d_ch();
            break;
        case 3:
            g_d_r();
            break;}
        }
        break;
     case 3:{
            switch(choix)
            {
            case 1:
                C--;
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("°°°°°°              GESTION DES CLIENTS             °°°°°°");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                printf("NUMERO DE CLIENT        \t:%d\n",C);
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("NOM                       \t:");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                scanf("%s",&A.tc[C].nom);
                puts("prenom                    \t:");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                scanf("%s",&A.tc[C].prenom);
                puts("CIN                       \t:");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                scanf("%s",&A.tc[C].cin);
                puts("tel.                      \t:");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                scanf("%f",&A.tc[C].tel);
                strcpy(A.vc[C].nom,A.tc[C].nom);
                strcpy(A.vc[C].prenom,A.tc[C].prenom);
                strcpy(A.vc[C].cin,A.tc[C].cin);
                A.vc[C].tel=A.tc[C].tel;
                menu2();
                break;
            case 2:
                B--;
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("°°°°°°               GESTION DES CHMBRES            °°°°°°");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                printf("NEMERO DE CHABRE        \t:%d\n",B);
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("TYPE DE CHAMBRE           \t:");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                scanf("%s",&A.tch[B].typedechambre);
                puts("PRIX                      \t:");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                scanf("%f",&A.tch[B].prix);
                strcpy(A.vch[B].typedechambre,A.tch[B].typedechambre);
                A.vch[B].prix=A.tch[B].prix;
                menu2();
                break;
            case 3:
                R--;
                puts("°°°°°°GESTION DES RESERVATION°°°°°°");
                printf("NUMERO DE RESERVATION        \t:%d\n",R);
                do{
                puts("date de reservation (j/m/a)  \t:");
                scanf("%d %d %d",&A.tr[R].datedereservation.jour,&A.tr[R].datedereservation.mois,&A.tr[R].datedereservation.annee);
                }while(date_de_reservationm());
                do{
                puts("debut de sejour (j/m/a)      \t:");
                scanf("%d %d %d",&A.tr[R].debutdesejour.jour,&A.tr[R].debutdesejour.mois,&A.tr[R].debutdesejour.annee);
                }while(debut_de_sejourm());
                do{
                puts("fin de sejour (j/m/a)        \t:");
                scanf("%d %d %d",&A.tr[R].findesejour.jour,&A.tr[R].findesejour.mois,&A.tr[R].findesejour.annee);
                }while(fin_de_sejourm());
                printf("NOMBRE DE NUITS        :%d",nombre_de_nuitsm());
                puts("MONTANT AVANCE               \t:");
                scanf("%f",&A.tr[R].montantavance);
                printf("NUMERO DE CLIENT             \t:%s/n",C);
                printf("TYPE DE CHEMPRE              \t:%s/n",A.vch[C].typedechambre);
                A.vr[R].datedereservation.jour=A.tr[R].datedereservation.jour;
                A.vr[R].datedereservation.mois=A.tr[R].datedereservation.mois;
                A.vr[R].datedereservation.annee=A.tr[R].datedereservation.annee;
                A.vr[R].debutdesejour.jour=A.tr[R].debutdesejour.jour;
                A.vr[R].debutdesejour.mois=A.tr[R].debutdesejour.mois;
                A.vr[R].debutdesejour.annee=A.tr[R].debutdesejour.annee;
                A.vr[R].findesejour.jour=A.tr[R].findesejour.jour;
                A.vr[R].findesejour.mois=A.tr[R].findesejour.mois;
                A.vr[R].findesejour.annee=A.tr[R].findesejour.annee;
                A.vr[R].montantavance=A.tr[R].montantavance;
                menu2();
                break;



           }
           }break;
     case 4:{
            switch(choix)
            {
                case 1:{
                        for(i=C;i<=20;i++)
                       {
                           strcpy(A.vc[i].nom,A.vc[i+1].nom);
                           strcpy(A.vc[i].prenom,A.vc[i+1].prenom);
                           strcpy(A.vc[i].cin,A.vc[i+1].cin);
                           A.vc[i].tel=A.vc[i+1].tel;
                       }
                       C--;
                       menu2();
                       }break;

                 case 2:{
                        for(i=B;i<=20;i++)
                       {
                           strcpy(A.vch[i].typedechambre,A.vch[i+1].typedechambre);
                           A.vch[i].prix=A.vch[i+1].prix;
                       }
                       B--;
                       menu2();
                       }break;

                 case 3:{
                        for(i=R;i<=20;i++)
                       {
                A.vr[i].datedereservation.jour=A.vr[i+1].datedereservation.jour;
                A.vr[i].datedereservation.mois=A.vr[i+1].datedereservation.mois;
                A.vr[i].datedereservation.annee=A.vr[i+1].datedereservation.annee;
                A.vr[i].debutdesejour.jour=A.vr[i+1].debutdesejour.jour;
                A.vr[i].debutdesejour.mois=A.vr[i+1].debutdesejour.mois;
                A.vr[i].debutdesejour.annee=A.vr[i+1].debutdesejour.annee;
                A.vr[i].findesejour.jour=A.vr[i+1].findesejour.jour;
                A.vr[i].findesejour.mois=A.vr[i+1].findesejour.mois;
                A.vr[i].findesejour.annee=A.vr[i+1].findesejour.annee;
                A.vr[i].montantavance=A.vr[i+1].montantavance;
                       }
                       R--;
                       menu2();
                       }break;

                        }
            }break;


     case 5:{
                menu1();
                }break;
            default:
                if(M>5);
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("°°°°      SVP RESEYER AUTRE OPTION         °°°°");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                menu2();


     }


 }

 void g_d_r()
 {
      system("cls");
   int choixr,nr,tr=0,i=0;
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("°°°°°°           GESTION DES RESERVATION            °°°°°°");
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("   1:ajouter     2:MODIFIER   3:SUPPRIMER   4:MENU");
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

    scanf("%d",&choixr);
    switch(choixr)
    {
    case 1:{
     printf("NUMERO DE RESERVATION        \t:%d\n",R);
        A.vr[R].ndereservation=R;
     do{
     puts("date de reservation (j/m/a)  \t:");
     scanf("%d %d %d",&A.vr[R].datedereservation.jour,&A.vr[R].datedereservation.mois,&A.vr[R].datedereservation.annee);
     }while(date_de_reservation());
     do{
     puts("debut de sejour (j/m/a)       :");
     scanf("%d %d %d",&A.vr[R].debutdesejour.jour,&A.vr[R].debutdesejour.mois,&A.vr[R].debutdesejour.annee);
     }while(debut_de_sejour());
     do{
     puts("fin de sejour (j/m/a)         :");
     scanf("%d %d %d",&A.vr[R].findesejour.jour,&A.vr[R].findesejour.mois,&A.vr[R].findesejour.annee);
     }while(fin_de_sejour());
     printf(" NOMBRE DE NUITS              : %d\n",nombre_de_nuits());

     puts("MONTANT AVANCE                :");
     scanf("%f",&A.vr[R].montantavance);
     printf("NUMERO DE CLIENT             \t:%d\n",C);
     printf("TYPE DE CHEMPRE              \t:%d\n",A.vch[B].typedechambre);
     R++;
     system("pause");
            menu2();
            }break;
    case 2:
        {
        puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        puts("NUMERO DE RESERVATION         :");
        puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        scanf("%d",&nr);
        for(i=0;i<=R;i++)
        {
            if(A.vr[i].ndereservation==nr)
                {
                tr=i;
                break;
                }
        }
         if(nr>R)
            {
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            puts("°°°°°°°                    ERREUR                   °°°°°°");
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            menu1();
            }
            else
                {
                    do{
                puts("date de reservation (j/m/a)  \t:");
                scanf("%d %d %d",&A.tr[R].datedereservation.jour,&A.tr[R].datedereservation.mois,&A.tr[R].datedereservation.annee);
                }while(date_de_reservationm());
                do{
                puts("debut de sejour (j/m/a)      \t:");
                scanf("%d %d %d",&A.tr[R].debutdesejour.jour,&A.tr[R].debutdesejour.mois,&A.tr[R].debutdesejour.annee);
                }while(debut_de_sejourm());
                do{
                puts("fin de sejour (j/m/a)        \t:");
                scanf("%d %d %d",&A.tr[R].findesejour.jour,&A.tr[R].findesejour.mois,&A.tr[R].findesejour.annee);
                }while(fin_de_sejourm());
                printf("NOMBRE DE NUITS        :%d",nombre_de_nuitsm());
                puts("MONTANT AVANCE               \t:");
                scanf("%f",&A.tr[R].montantavance);
                printf("NUMERO DE CLIENT             \t:%s/n",C);
                printf("TYPE DE CHEMPRE              \t:%s/n",A.vch[C].typedechambre);
                A.vr[R].datedereservation.jour=A.tr[R].datedereservation.jour;
                A.vr[R].datedereservation.mois=A.tr[R].datedereservation.mois;
                A.vr[R].datedereservation.annee=A.tr[R].datedereservation.annee;
                A.vr[R].debutdesejour.jour=A.tr[R].debutdesejour.jour;
                A.vr[R].debutdesejour.mois=A.tr[R].debutdesejour.mois;
                A.vr[R].debutdesejour.annee=A.tr[R].debutdesejour.annee;
                A.vr[R].findesejour.jour=A.tr[R].findesejour.jour;
                A.vr[R].findesejour.mois=A.tr[R].findesejour.mois;
                A.vr[R].findesejour.annee=A.tr[R].findesejour.annee;
                A.vr[R].montantavance=A.tr[R].montantavance;
                system("pause");
                g_d_c();
                }
                }break;
    case 3:{
        puts("NUMERO DE RESERVATION         :");
        scanf("%d",&nr);
        for(i=0;i<=R;i++)
        {
            if(A.vr[i].ndereservation==nr)
                {
                tr=i;
                }
                 break;
        }

        if(nr>R)
            {
            puts("   °°°°°°°ERREUR°°°°°°");
            g_d_r();
            }
            else
                {
                  do
                    {
                A.vr[i].datedereservation.jour=A.vr[i+1].datedereservation.jour;
                A.vr[i].datedereservation.mois=A.vr[i+1].datedereservation.mois;
                A.vr[i].datedereservation.annee=A.vr[i+1].datedereservation.annee;
                A.vr[i].debutdesejour.jour=A.vr[i+1].debutdesejour.jour;
                A.vr[i].debutdesejour.mois=A.vr[i+1].debutdesejour.mois;
                A.vr[i].debutdesejour.annee=A.vr[i+1].debutdesejour.annee;
                A.vr[i].findesejour.jour=A.vr[i+1].findesejour.jour;
                A.vr[i].findesejour.mois=A.vr[i+1].findesejour.mois;
                A.vr[i].findesejour.annee=A.vr[i+1].findesejour.annee;
                A.vr[i].montantavance=A.vr[i+1].montantavance;
                i++;
                    }while(i==20);
                    system("peaus");
                    g_d_r();

                }
                }break;
                case 4:{
        system("pause");
        menu2();
          }break;
         default:
                if(choixr>5){
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("°°°°      SVP RESEYER AUTRE OPTION         °°°°");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                g_d_c();

                           }

     }





        }

void g_d_ch()
{
    system("cls");
    int choixch,nch,tch=0,i=0;

    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("°°°°°°           GESTION DES CHMBRES                °°°°°°");
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("   1:ajouter     2:MODIFIER   3:SUPPRIMER   4:MENU");
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

    scanf("%d",&choixch);
    switch(choixch)
    {
    case 1:{
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            printf("NEMERO DE CHABRE        \t:%d\n",B);
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            A.vch[B].ndechambre=B;
            do{puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            puts("TYPE DE CHAMBRE           \t:");
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            puts("1:CHAMBRE REGULIERE 2:CHAMBRE FAMILIALE 3:CHAMBRES DOUBLES\n");
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            scanf("%d",&A.vch[B].typedechambre);
            }while(A.vch[B].typedechambre<1 || A.vch[B].typedechambre>3);
            if(A.vch[B].typedechambre=1){
                A.vch[B].prix=400;}
            if(A.vch[B].typedechambre=2){
                A.vch[B].prix=700;}
            if(A.vch[B].typedechambre=3){
                A.vch[B].prix=900;}
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            printf("PRIX                      \t:%.2fDH\n",A.vch[B].prix);
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            B++;
            system("pause");
            menu2();
            }
     case 2:{
        puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        puts("NUMERO DE CHAMBRE         :");
        puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        scanf("%d",&nch);
        for(i=0;i<=B;i++)
        {
            if(A.vch[i].ndechambre==nch)
                {
                tch=i;
                break;
                }
        }
        if(nch>B)
            {
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            puts("°°°°°°°                    ERREUR                   °°°°°°");
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            menu1();
            }
              else{

         do{puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            puts("TYPE DE CHAMBRE           \t:");
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            puts("1:CHAMBRE REGULIERE 2:CHAMBRE FAMILIALE 3:CHAMBRES DOUBLES\n");
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            scanf("%d",&A.tch[B].typedechambre);
            }while(A.tch[B].typedechambre<1 || A.tch[B].typedechambre>3);
            if(A.tch[B].typedechambre=1){
                A.tch[B].prix=400;}
            if(A.tch[B].typedechambre=2){
                A.tch[B].prix=700;}
            if(A.tch[B].typedechambre=3){
                A.vch[B].prix=900;}
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            printf("PRIX                      \t:%.2fDH\n",A.tch[B].prix);
            puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

            A.vch[B].typedechambre=A.tch[B].typedechambre;
            A.vch[B].prix=A.tch[B].prix;
                 g_d_ch();
                }
                }
                break;
    case 3:{
        puts("NUMERO DE CHMBRES         :");
        scanf("%d",&nch);
        for(i=0;i<=B;i++)
        {
            if(A.vch[i].ndechambre==nch)
                {
                tch=i;
                break;
                }
        }

        if(nch>B)
            {
            puts("   °°°°°°°ERREUR°°°°°°");
            g_d_ch();
            }
        else{
                do{
                 strcpy(A.vch[i].typedechambre,A.tch[i+1].typedechambre);
                 A.vch[i].prix=A.tch[i+1].prix;
                 i++;
                 }while(i==20);
                  system("pause");
                 g_d_ch();
            }
            }

            break;
        case 4:{
         system("pause");
        menu2();
        }break;
         default:
                if(choixch>5);
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("°°°°      SVP RESEYER AUTRE OPTION         °°°°");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                 system("pause");
                g_d_ch();
       }

}


void g_d_c()
{
    system("cls");
   int choixc,nc,tc=0,i=0;
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("°°°°°°           GESTION DES CLIENTS                °°°°°°");
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    puts("   1:ajouter     2:MODIFIER   3:SUPPRIMER   4:MENU");
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");

    scanf("%d",&choixc);
    switch(choixc)
    {
    case 1:{
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("NUMERO DE CLIENT        :%d\n",C);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    (A.vc[C].ndeclient)=C;
    printf("NOM                       :");
    scanf("%s",&A.vc[C].nom);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("prenom                    :");
    scanf("%s",&A.vc[C].prenom);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("CIN                       :");
    scanf("%s",&A.vc[C].cin);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("tel.                      :");
    scanf("%f",&A.vc[C].tel);
    C++;
    menu2();}
        break;
    case 2:{
        puts("NUMERO DE CLIENT         :");
        scanf("%d",&nc);
        for(i=0;i<=C;i++)
        {
            if(A.vc[i].ndeclient==nc)
                {
                tc=i;
                break;}
        }

        if(nc>C)
            {
            puts("   °°°°°°°ERREUR°°°°°°");
            menu1();
            }
            else{
                puts("NOM                       \t:");
                scanf("%s",A.tc[C].nom);
                puts("prenom                    \t:");
                scanf("%s",A.tc[C].prenom);
                puts("CIN                       \t:");
                scanf("%s",A.tc[C].cin);
                puts("tel.                      \t:");
                scanf("%f",&A.tc[C].tel);
                strcpy(A.vc[C].nom,A.tc[C].nom);
                strcpy(A.vc[C].prenom,A.tc[C].prenom);
                strcpy(A.vc[C].cin,A.tc[C].cin);
                A.vc[C].tel=A.tc[C].tel;
                 system("pause");
                g_d_c();
                }
                }
                break;
    case 3:{
         puts("NUMERO DE CLIENT         :");
        scanf("%d",&nc);
        for(i=0;i<=C;i++)
        {
            if(A.vc[i].ndeclient==nc)
                {
                tc=i;
                }
                 break;
        }

        if(nc>C)
            {
            puts("   °°°°°°°ERREUR°°°°°°");
            g_d_c();
            }
        else{
                do{
                strcpy(A.vc[i].nom,A.vc[i+1].nom);
                strcpy(A.vc[i].prenom,A.vc[i+1].prenom);
                strcpy(A.vc[i].cin,A.vc[i+1].cin);
                (A.vc[i].tel)=(A.vc[i+1].tel);
                 i++;
                 }while(i==20);
                  system("pause");
                 g_d_c();
            }

           } break;
   case 4:{
        system("pause");
        menu2();
          }break;
         default:
                if(choixc>5){
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                puts("°°°°      SVP RESEYER AUTRE OPTION         °°°°");
                puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                g_d_c();

                           }


    }

}
void reservation_en_cours()
{
    int i;

    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    for(i=1;i<=R;i++)
        {
   printf("RES.N  : %d ",i);
   printf("nom    : %d",A.vc[i].nom);
   printf("ARRIVE : %d/%d/%d",A.vr[i].datedereservation.jour,A.vr[i].datedereservation.mois,A.vr[i].datedereservation.annee);
   printf("ARRIVEE: %d/%d/%d",A.vr[i].debutdesejour.jour,A.vr[i].debutdesejour.mois,A.vr[i].debutdesejour.annee);
   printf("CHAMBRE: %d",A.vch[i].ndechambre);
   printf("type   : %d",A.vch[i].typedechambre);

        }
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
}

void generation_detats(){
    system("cls");
    int choix2;
puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
puts("Generation d'etats");
puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
puts("\n1 - Reservation en cours");
puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
puts("\n2 - facture");
puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
puts("\n3 - quitter");
puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
printf("saisir votre choix >>:");
scanf("%d",&choix2);
switch(choix2){
case 1 : reservation_en_cours(); break;
case 2 : facture(); break;
case 3 : menu1(); break;
default : generation_detats();
}
}
int facture()
{
    int j,s;
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("ENTRER NUMERO DE RESERVATION      :");
    scanf("%d",&j);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("FACTURE DE CLIENT NUMERO     :%d",j);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("DATE D'EDITION               :%d/%d/%d",&A.vr[j].datedereservation.jour,&A.vr[j].datedereservation.mois,&A.vr[j].datedereservation.annee);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("PERIODE        DU:%d/%d/%d  AU:%d/%d/%d",&A.vr[j].debutdesejour.jour,&A.vr[j].debutdesejour.mois,&A.vr[j].debutdesejour.annee,&A.vr[j].findesejour.jour,&A.vr[j].findesejour.mois,&A.vr[j].findesejour.annee);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("DUREE :  %d  JOUR(s) ",A.vr[j].ndenuits);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("MONTANT AVANCE                 :%f",&A.vr[j].montantavance);
    s=(A.vr[j].ndenuits)*(A.vch[j].prix);
    puts("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    printf("MONTANT A PAYER                :%s",&s);
    generation_detats();

}
int date_de_reservation(){
if (A.vr[R].datedereservation.jour<1 ||A.vr[R].datedereservation.jour>31){printf("error in day\n");return 1;}
if (A.vr[R].datedereservation.mois<1 || A.vr[R].datedereservation.mois>12){printf("error in month\n");return 1;}
if (A.vr[R].datedereservation.annee<18){printf("error in year\n");return 1;}
return 0;
}
int date_de_reservationm(){
if (A.tr[R].datedereservation.jour<1 ||A.tr[R].datedereservation.jour>31){printf("error in day\n");return 1;}
if (A.tr[R].datedereservation.mois<1 || A.tr[R].datedereservation.mois>12){printf("error in month\n");return 1;}
if (A.tr[R].datedereservation.annee<18){printf("error in year\n");return 1;}
return 0;
}
int debut_de_sejour(){
if (A.vr[R].debutdesejour.jour<1 || A.vr[R].debutdesejour.jour>31){printf("error in day\n");return 1;}
if (A.vr[R].debutdesejour.mois<1 || A.vr[R].debutdesejour.mois>12){printf("error in month\n");return 1;}
if (A.vr[R].debutdesejour.annee<18){printf("error in year\n");return 1;}

if (A.vr[R].datedereservation.annee==A.vr[R].debutdesejour.annee && A.vr[R].datedereservation.mois==A.vr[R].debutdesejour.mois && A.vr[R].datedereservation.jour>A.vr[R].debutdesejour.jour ||  A.vr[R].datedereservation.annee==A.vr[R].debutdesejour.annee &&A.vr[R].datedereservation.mois>A.vr[R].debutdesejour.mois || A.vr[R].datedereservation.annee>A.vr[R].debutdesejour.annee){printf("error in date\n");return 1;}


return 0;
}
int debut_de_sejourm(){
if (A.tr[R].debutdesejour.jour<1 || A.tr[R].debutdesejour.jour>31){printf("error in day\n");return 1;}
if (A.tr[R].debutdesejour.mois<1 || A.tr[R].debutdesejour.mois>12){printf("error in month\n");return 1;}
if (A.tr[R].debutdesejour.annee<18){printf("error in year\n");return 1;}

if (A.tr[R].datedereservation.annee==A.tr[R].debutdesejour.annee && A.tr[R].datedereservation.mois==A.tr[R].debutdesejour.mois && A.tr[R].datedereservation.jour>A.tr[R].debutdesejour.jour ||  A.tr[R].datedereservation.annee==A.tr[R].debutdesejour.annee &&A.tr[R].datedereservation.mois>A.tr[R].debutdesejour.mois || A.tr[R].datedereservation.annee>A.tr[R].debutdesejour.annee){printf("error in date\n");return 1;}


return 0;
}
int fin_de_sejour(){
if (A.vr[R].findesejour.jour<1 || A.vr[R].findesejour.jour>31){printf("error in day\n");return 1;}
if (A.vr[R].findesejour.mois<1 || A.vr[R].findesejour.mois>12){printf("error in month\n");return 1;}
if (A.vr[R].findesejour.annee<A.vr[R].debutdesejour.annee ){printf("error in year\n");return 1;}


if (A.vr[R].debutdesejour.annee ==A.vr[R].findesejour.annee && A.vr[R].debutdesejour.mois==A.vr[R].findesejour.mois && A.vr[R].debutdesejour.jour>=A.vr[R].findesejour.jour ||A.vr[R].debutdesejour.annee ==A.vr[R].findesejour.annee && A.vr[R].debutdesejour.mois>A.vr[R].findesejour.mois || A.vr[R].debutdesejour.annee >A.vr[R].findesejour.annee){printf("error in date\n");return 1;}

return 0;
}
int fin_de_sejourm(){
if (A.tr[R].findesejour.jour<1 || A.tr[R].findesejour.jour>31){printf("error in day\n");return 1;}
if (A.tr[R].findesejour.mois<1 || A.tr[R].findesejour.mois>12){printf("error in month\n");return 1;}
if (A.tr[R].findesejour.annee<A.tr[R].debutdesejour.annee ){printf("error in year\n");return 1;}


if (A.tr[R].debutdesejour.annee ==A.tr[R].findesejour.annee && A.tr[R].debutdesejour.mois==A.tr[R].findesejour.mois && A.tr[R].debutdesejour.jour>=A.tr[R].findesejour.jour ||A.tr[R].debutdesejour.annee ==A.tr[R].findesejour.annee &&A.tr[R].debutdesejour.mois>A.tr[R].findesejour.mois || A.tr[R].debutdesejour.annee >A.tr[R].findesejour.annee){printf("error in date\n");return 1;}

return 0;
}
int nombre_de_nuits(){
A.vr[R].ndenuits=(365*(A.vr[R].findesejour.annee-A.vr[R].debutdesejour.annee))+(31*(A.vr[R].findesejour.mois-A.vr[R].debutdesejour.mois))+(A.vr[R].findesejour.jour-A.vr[R].debutdesejour.jour);
return A.vr[R].ndenuits;

}
int nombre_de_nuitsm(){
A.tr[R].ndenuits=(365*(A.tr[R].findesejour.annee-A.tr[R].debutdesejour.annee))+(31*(A.tr[R].findesejour.mois-A.tr[R].debutdesejour.mois))+(A.tr[R].findesejour.jour-A.tr[R].debutdesejour.jour);
return A.vr[R].ndenuits;

}
