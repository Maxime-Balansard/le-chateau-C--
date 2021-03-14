Arme::Arme()
{
    setDegats(10);
    setDegatsM(0);
    setType("normal");
    setcoefCrit(0);
    setPrix(0);
}

Arme::Arme(int d,int dm,string t,float cc,float pr){
    setDegats(d);
    setDegatsM(dm);
    setType(t);
    setPrix(pr);
    setcoefCrit(cc);
}

Arme::~Arme()
{
    //dtor
}

int Arme::getDegats(){
    return degats;
}

int Arme::getDegatsM(){
    return dm;
}

string Arme::getType(){
    return type;
}


float Arme::getCoefCrit(){
    return coefCrit;
}

float Arme::getPrix(){
    return prix;
}

void Arme::setDegats(int d){
    degats = d;
}

void Arme::setDegatsM(int dm){
    degatsM = dm;
}

void Arme::setType(string t){
    type = t;
}

void Arme::setcoefCrit(float cc){
    coefCrit = cc;
}

void Arme::setPrix(float p){
    prix = p;
}
