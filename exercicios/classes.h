#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class veiculo{
    public:
        int vel;
        int tipo;
        veiculo(int tp);
        int getVelMax();
        bool getLigado();
        void setLigado(int l);
    private:
        void setVelMax(int vm);
        std::string nome;
        int velMax;
        bool ligado;
};

bool veiculo::getLigado(){
    return ligado;
}

void veiculo::setLigado(int l){
    if(l==1){
        ligado=true;
    }else if(l==0){
        ligado=false;
    }
}

int veiculo::getVelMax(){
    return velMax;
}

void veiculo::setVelMax(int vm){
    velMax=vm;
}

veiculo::veiculo(int tp){//1=carro, 2=aviao, 3=navio
    tipo=tp;
    if(tipo==1){
        nome="carro";
        setVelMax(200);
    }else if(tipo==2){
        nome="aviao";
        setVelMax(800);
    }else if(tipo==3){
        nome="navio";
        setVelMax(120);
    }
    setLigado(0);
}

#endif // CLASSES_H_INCLUDED
