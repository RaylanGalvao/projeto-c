
#ifndef CLASSES1_H_INCLUDED
#define CLASSES1_H_INCLUDED

class Veiculo{
    public:
        int vel;
        int blind;
        int rodas;
        void setTipo(int tp);
        void setVelMax(int vm);
        void setArma(bool ar);
        void imp();
    private:
    int tipo;
    int velMax;
    int arma;
};
void Veiculo::imp(){
    std::cout<<"tipo veiculo........: "<<tipo<<std::endl;
    std::cout<<"velocidade maxima...: "<<velMax<<std::endl;
    std::cout<<"quantidade de rodas.: "<<rodas<<std::endl;
    std::cout<<"blindagem...........: "<<blind<<std::endl;
    std::cout<<"armamento...........: "<<arma<<std::endl;
    std::cout<<".............................."<<std::endl;
}/*
void Veiculo::setTipo(int tp){
    tipo=tp;
}
void Veiculo::setVelMax(int vm){
    velMax=vm;
}
void Veiculo::setArma(int ar){
    arma=ar;
}
class Moto::public Veiculo{
    public:
        Moto();
};
Moto::Moto(){
    vel=0;
    blind=0;
    rodas=2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}
class Carro::public Veiculo{
    public:
        Carro();
};
Carro::Carro(){
    vel=0;
    blind=0;
    rodas=4;
    setTipo(2);
    setVelMax(180);
    setArma(false);
}
class Tanque::public Veiculo{
    public:
        Tanque();
};
Tanque::Tanque(){
    vel=0;
    blind=1;
    rodas=8;
    setTipo(3);
    setVelMax(200);
    setArma(true);
}
*/
#endif // CLASSES1_H_INCLUDED
