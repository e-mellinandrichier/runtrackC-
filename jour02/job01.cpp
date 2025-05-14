#include <iostream>
#include <string>
using namespace std;

// Classe de base Aquatique
class Aquatique {
protected:
    double vitesseNage; // m/s

public:
    Aquatique(double vitesse = 0.0) : vitesseNage(vitesse) {}

    virtual void nage() const {
        cout << "Je nage à " << vitesseNage << " m/s." << endl;
    }

    virtual ~Aquatique() {} // Destructeur virtuel
};

// Classe de base Terrestre
class Terrestre {
protected:
    double vitesseMarche; // m/s

public:
    Terrestre(double vitesse = 0.0) : vitesseMarche(vitesse) {}

    virtual void marche() const {
        cout << "Je marche à " << vitesseMarche << " m/s." << endl;
    }

    virtual ~Terrestre() {} // Destructeur virtuel
};

// Classe Pingouin qui hérite de Aquatique et Terrestre
class Pingouin : public Aquatique, public Terrestre {
private:
    string nom;

public:
    // Constructeur
    Pingouin(string n, double vitesseN, double vitesseM)
        : Aquatique(vitesseN), Terrestre(vitesseM), nom(n) {}

    // Méthode spécifique
    void sePresenter() const {
        cout << "Bonjour, je suis un pingouin nommé " << nom << "." << endl;
    }

    // Redéfinition de nage()
    void nage() const override {
        cout << nom << " nage maladroitement à " << vitesseNage << " m/s." << endl;
    }

    // Redéfinition de marche()
    void marche() const override {
        cout << nom << " marche en se dandinant à " << vitesseMarche << " m/s." << endl;
    }
};
