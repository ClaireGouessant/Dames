#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <string.h>

/*STRUCTURE POUR LA POSITION DU CURSEUR DES PIONS ET DE QUELQUES TRUCS DIVERS*/
typedef struct
{
  int X;
  int Y;
  int A;
  int B;
} POS;

/*DEFINITION DES TOUCHES*/
#define     GAUCHE      75
#define     DROITE      77
#define     HAUT        72
#define     BAS         80
#define     ENTER       13
#define     ESCAPE      27
#define     ESPACE      32

/*DEFINITION DES PIONS*/
#define PION_J1 5
#define PION_J2 6
#define DAME_J1 4   ///1
#define DAME_J2 3   ///2

/*DEFINITION DES FONCTIONS*/
void tableau(int M,int N,int X,int Y,int A,int B);//FONCTION POUR DESSINER DES TABLEAUX
void initialise(char tableau[10][10]);//FONCTION POUR INITIALISER UN TABLEAU
void dessine_menu(int X,int Y);//FONCTION POUR DESSINER UN MENU

#endif // ENTETE_H_INCLUDED
