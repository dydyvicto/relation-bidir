/**
 * @file Individu.h
 * @author Philippe Lopisteguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa voiture
 * @version 0.1
 * @date 2023-10-10
 * 
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Cette classe définie un individu par un nom, par un prénom et évenentuellement une voiture qu'il conduit
 * 
 * @details Au dela de représenter un Individu par son nom et prénom, la classe Individu permet
 * également de renseigner la voiture qu'il conduit/
 * 
 * La voiture associée à l'individu est représentée par un pointeur vers un objet Voiture qui peut être null
 * si l'individu 
 * 
 * @warning Un individu ne peut être associé à au plus une voiture
 */

class Individu
{
    // ATTRIBUTS
  public:

    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;  

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;  


    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 



    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu à partyir de son nom (1er param) et son prénom (2eme param)
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @details string chaine renvoie le nom et prénom
     * 
     * @bug un espace en trop entre nom et prénom
     */

    // Méthodes usuelles : toString
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la voiture conduite par l'individu
     * 
     * @param [in] voiture pointeur vers l'objet Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H