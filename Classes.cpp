#include <iostream>
using namespace std;


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
    mudança;
};

class EstadosEleitores{ 
    public:
    double cAlta;
    double cMediaAlta;
    double cMediaBaixa;
    double cBaixa;
    double popVotante;
    double religiosidade;
    //Determinantes IDH
    double PIBperCapta;
    double escolaridade;
    double expectVida;
    //acho que pode ser um vetor com porcentagem de direita esquerda e talz
    double partidoMaisInf[3];
    //vamos fazer 1- primário, 2- sec e 3 - ter
    int setorMaisImport;
    double criminalidade;
    double taxaHomi;
    double taxaFEtária;


};