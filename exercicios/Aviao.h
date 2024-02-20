#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{

public:
    int vel=0;
    int velMax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();

private:

};

 Aviao::Aviao(int tp){
    if(tp==1){
        this->velMax=800;
        this->tipo="jato";
    }
    else if(tp==2){
        this->velMax=350;
        this->tipo="monomotor";
    }
    else if(tp==3){
        this->velMax=180;
        this->tipo="planador";
    }
}
void Aviao::imprimir(){
    std::cout << "tipo: "<<tipo<<std::endl;
    std::cout << "velocidade maxima: "<<velMax<<std::endl;
    std::cout << "velocidade atual: "<<vel<<std::endl;
    std::cout << "..........................."<<std::endl;
}

#endif // AVIAO_H_INCLUDED
