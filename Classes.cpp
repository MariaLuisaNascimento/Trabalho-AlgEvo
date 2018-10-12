class Candidato{ 
    public caracteristicas = new Caracteristicas();
    public propostas = new Propostas();
};

class Caracteristicas{
    etnia;
    origemPolitica;
    origemSocioeconomica;
    nivelEscolaridade;    
};

class Propostas{

};

class EstadosEleitores{ 
    public:
    double popVotante;
    char religPred[];
    //Determinantes IDH
    double PIBperCapta;
    double escolaridade;
    double expectVida;
    double concPol;
    char partidoMaisInf[];
    char setorMaisImport[];
    double criminalidade;
    double taxaHomi;


};