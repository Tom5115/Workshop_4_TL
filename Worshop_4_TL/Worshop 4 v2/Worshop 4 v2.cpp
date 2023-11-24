#include "pch.h"
#include<iostream>
#include <string>

using namespace System;

void main()
{

    listechaine list;
    Objet2D* pointeur;

    string choix;
    string emp;
    int valcarre;
    int longrec;
    int larrec;

    while (choix != "fin") {

        cout << "\n" << "Choisissez l'action :\n";
        cout << " 1. Carre\n 2. Rectangle\n 3. Afficher\n 4. Supprimer\n fin. Arret prog\n----->";
        cin >> choix;

        if (choix == "1") {
            cout << "Valeur cote du carre : ";
            cin >> valcarre;
            pointeur = new Cube(valcarre);

            cout << " 1. Placer au debut\n 2. Placer a la fin\n----->";
            cin >> emp;
            place* node1 = new place(pointeur->afficheInfo());

            if (emp == "1") {
                list.addFront(node1);
            }
            else if (emp == "2") {
                list.addBack(node1);
            }
        }

        else if (choix == "2") {
            cout << "entre longueur rectangle : ";
            cin >> longrec;
            cout << "entre largeur rectangle : ";
            cin >> larrec;

            pointeur = new Rectangle(longrec, larrec);

            cout << " 1. Placer au debut\n 2. Placer a la fin\n----->";
            cin >> emp;
            place* node3 = new place(pointeur->afficheInfo());

            if (emp == "1") {
                list.addFront(node3);
            }
            else if (emp == "2") {
                list.addBack(node3);
            }

        }
        else if (choix == "3") {
            list.affichelist();
        }

        else if (choix == "4") {
            int ind;
            cout << "Quelle indice voulez vous supprimer : ";
            cin >> ind;
            list.deleteInd(ind);
        }
    }
}