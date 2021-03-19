#include "Personnage.h"

//Classe Personnage
Personnage::Personnage()
{
        nom = "PeonPremierduNom";
        pv = 10;
        monnaie = 5;
        atk = 1;
        armure = 0;
        blocage = 0;
        critique = 5;
        esquive = 5;
        resistancemagique = 0;
        corruption = 0;
        croyance = tabCroyance[0];
}

//setter
Personnage::Personnage(string n,int p, int m, int a, int ar, float b, float c, float e, int rm, int co, int cr)
{
    setNom(n);
    setPv(p);
    setMonnaie(m);
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
    cout<< "Mortecouille!!! " << getNom()<< " nous a quitte! Paix a son ame..." <<endl <<endl;
}

//getter
string Personnage::getNom(){
    return nom;
}

int Personnage::getPv(){
    return pv;
}
int Personnage::getMonnaie(){
    return monnaie;
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
        cerr << "Les points de vie de "<< getNom() << " sont tombes a 0 !" << endl << endl;
        pv = 0;
        this->~Personnage();
    }
    else {
    pv = p;
    }
}

//dans un if, utiliser "or" pour 2 conditions à la fois
void Personnage::setAtk(int a){
    if (a < 1) {
        cerr << getNom() << " a un montant d'Attaque incorrecte" << endl << endl;
        atk = 1;
        this->~Personnage();
    }
    else{
        atk = a;
    }
}

void Personnage::setArmure(int ar){
    if (ar < 0) {
        cerr << getNom() << " a un montant d'Armure incorrect" << endl << endl;
        armure = 0;
    }
    else if (ar > 50) {
        cerr << getNom() << " a atteint le Montant d'Armure maximum" << endl << endl;
        armure = 50;
    }
    else{
    armure = ar;
    }
}
void Personnage::setMonnaie(int m){
    if (m < 0) {
        cerr << getNom() << " est fauché" << endl << endl;
        monnaie = 0;
    }
    monnaie = m;
}

void Personnage::setBlocage(float b){
    if (b < 0.0 or b > 0.50) {
        cerr << "Chances de bloquer incorrectes" << endl << endl;
        blocage = 0.0;
    }
    blocage = b;
}

void Personnage::setCritique(float c){
    if (c < 0.0 or c > 1.0) {
        cerr << "Chances de critique incorrectes" << endl << endl;
        critique = 0.0;
    }
    critique = c;
}

void Personnage::setEsquive(float e){
    if (e < 0.0 or e > 0.50) {
        cerr << "Chances d'esquive incorrectes" << endl << endl;
        esquive = 0.0;
    }
    esquive = e;
}

void Personnage::setResistancemagique(int rm){
   if (rm < 0) {
        cerr << getNom() << " a un montant de resistance magique incorrect" << endl << endl;
        resistancemagique = 0;
    }
    else if (rm > 50) {
        cerr << getNom() << " a atteint le Montant de Resistance magique maximum" << endl << endl;
        resistancemagique = 50;
    }
    else{
    resistancemagique = rm;
    }
}

void Personnage::setCorruption(int co){
    if (co < 0) {
        cerr << getNom() << " est devenu aussi pur que la lumiere" << endl << endl;
        corruption = 0;
    }
    else if (co > 5) {
        cerr << "La corruption a envahit l'esprit de " << getNom() << " et son energie vitale a ete aspiree." << endl << endl;
        corruption = 5;
        this->~Personnage();
    }
    else {
    corruption = co;
    }
}

void Personnage::setCroyance(int index){
    if (index < 0 || index > 3) {
        cerr << "Mauvais index, " << getNom() <<" va recevoir une croyance aléatoire parmis celles existantes." << endl << endl;
        index = rand() % 4;
        croyance = tabCroyance[index];
    } else {
    croyance = tabCroyance[index];
    }
}
//faire ceci avec toutes les autres stats, ou pas selon le jeu qu'on a prevu


//fonction pour afficher toutes les infos d'un perso
void Personnage::fiche()
{
    cout << endl;
	cout << "Fiche de " << getNom() << endl;
	cout << "Pv : " << getPv() << endl;
	cout << "Monnaie : " << getMonnaie() << endl;
	cout << "Attaque : " << getAtk() << endl;
	cout << "Armure : " << getArmure() << endl;
	cout << "Chance de Bloquer : " << getBlocage() << endl;
	cout << "Chance de Coup Critique : " << getCritique() << endl;
	cout << "Chance d'Esquiver : " << getEsquive() << endl;
	cout << "Resistance aux Attaques Magiques : " << getResistancemagique() << endl;
	cout << "Degres de Corruption : " << getCorruption() << endl;
	cout << "Fidele du Culte " << getCroyance() << endl;
	cout << "Sans classe" << endl << endl;
}

void Personnage::attaque(Personnage* cible){

    cout<< getNom() << " attaque " << cible->getNom() << " !!!" << endl;

    float random1 = rand()%100;
    float random2 = rand()%100;
    float random3 = rand()%100;

    if(random1 <= (cible->getBlocage()*100)){
        cout << cible->getNom() << " pare l'attaque !" << endl << endl;
    }

    else if(random2 <= (cible->getEsquive()*100)) {
        cout << cible->getNom() << " esquive !" << endl << endl;
    }

    else if(random3 <= (getCritique()*100)) {

        cout<< "C'est un Coup de Maitre, Monseigneur !  " << getNom() << " inflige " << ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))*2) << " degats!"<< endl;
        cible->setPv (cible->getPv() - ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))*2));

    }

    else {

        cout<< getNom() << " inflige " << ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))) << " degats!"<< endl;
        cible->setPv (cible->getPv() - ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))));

    }

    //montant de degats totaux = (atk + degat - corruption) * (1-(armure/100))

    /*armure =10

    1 - 10/100 = 1- 0.1 = 0.9
    atk+degat-corruption * 0.9

    1- 50/100 = 1 - 0.5 = 0.5
    atk+degat-corruption * 0.5*/


    //perte de PV = ((Atk + dégat) * armure )/100
    /*if(cible -> pv==0){
        cible->~Personnage();
    }*/
}
