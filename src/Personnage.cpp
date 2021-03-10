#include "Personnage.h"

//Classe Personnage
Personnage::Personnage()
{
        nom = "PeonPremierduNom";
        pv = 10;
        atk = 1;
        armure = 0;
        blocage = 0;
        critique = 5;
        esquive = 5;
        resistancemagique = 0;
        corruption = 0;
        croyance = "Materialiste";
}

//setter
Personnage::Personnage(string n, int p, int a, int ar, float b, float c, float e, int rm, int co, string cr)
{
    setNom(n);
    setPv(p);
    setAtk(a);
    setArmure(ar);
    setBlocage(b);
    setCritique(c);
    setEsquive(e);
    setResistancemagique(rm);
    setCorruption(co);
    setCroyance(cr);
}

//destructeur
Personnage::~Personnage()
{
    cout<< getNom()<< " nous a quitte. Paix a son ame..." <<endl <<endl;
}

//getter
string Personnage::getNom(){
    return nom;
}

int Personnage::getPv(){
    return pv;
}

int Personnage::getAtk(){
    return atk;
}

int Personnage::getArmure(){
    return armure;
}

float Personnage::getBlocage(){
    return blocage;
}

float Personnage::getCritique(){
    return critique;
}

float Personnage::getEsquive(){
    return esquive;
}

int Personnage::getResistancemagique(){
    return resistancemagique;
}

int Personnage::getCorruption(){
    return corruption;
}

string Personnage::getCroyance(){
    return croyance;
}

void Personnage::setNom(string n){
    nom = n;
}

//borner les données rentrées
void Personnage::setPv(int p){
    if (p < 0) {
        cerr << getNom() << "Montant de point de vie incorrect" << endl << endl;
        pv = 0;
        this->~Personnage();
    }
    else {
    pv = p;
    }
}

//dans un if, utiliser "or" pour 2 conditions à la fois
void Personnage::setAtk(int a){
    if (a < 0) {
        cerr << getNom() << "Attaque incorrecte" << endl << endl;
        a = 0;
        this->~Personnage();
    }
    else{
        atk = a;
    }
}

void Personnage::setArmure(int ar){
    armure = ar;
}

void Personnage::setBlocage(float b){
    blocage = b;
}

void Personnage::setCritique(float c){
    critique = c;
}

void Personnage::setEsquive(float e){
    esquive = e;
}

void Personnage::setResistancemagique(int rm){
    resistancemagique = rm;
}

void Personnage::setCorruption(int co){
    corruption = co;
}

void Personnage::setCroyance(string cr){
    croyance = cr;
}
//faire ceci avec toutes les autres stats, ou pas selon le jeu qu'on a prevu


//fonction pour afficher toutes les infos d'un perso
void Personnage::fiche()
{
    cout << endl;
	cout << "Fiche de " << getNom() << endl;
	cout << "Pv : " << getPv() << endl;
	cout << "Attaque : " << getAtk() << endl;
	cout << "Armure : " << getArmure() << endl;
	cout << "Chance de Bloquer : " << getBlocage() << endl;
	cout << "Chance de Coup Critique : " << getCritique() << endl;
	cout << "Chance d'Esquiver : " << getEsquive() << endl;
	cout << "Resistance aux Attaques Magiques : " << getResistancemagique() << endl;
	cout << "Degres de Corruption : " << getCorruption() << endl;
	cout << "Fidele du Culte " << getCroyance() << endl;
	cout << "Sans classe" << endl;
}
