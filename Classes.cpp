#include <iostream>
#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


class Candidato{ 
    //Parametros
    public:
    double educacao;
    double educacaoSexual;
    double saudePublica;
    double segurancaPublica;
    double porteArma;
    double estadoLaico;
    double estatutoFamilia;
    double legalizarAborto;
    double reformaTrabalhista;
    double reformaAgraria;
    double legalizarMaconha;
    double intervencaoMilitar;
    double escolaSemPartido;

    //Caracteristicas
        //Carater politico e economico
    double autoritario;
    double libertario;

    double direita;
    double centro;
    double esquerda;

        //Carater social
    double direitaSocial;
    double esquerdaSocial;
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
    double rendaPerCapta;
    double escolaridade;
    double expectVida;
    //acho que pode ser um vetor com porcentagem de direita esquerda e talz
    double partidoMaisInf[3];
    //vamos fazer 1- primário, 2- sec e 3 - ter
    int setorMaisImport;
    double criminalidade;
    double taxaHomi;
    double taxaFEtaria;


};

int main(){
    Candidato* candidatoTeste = new Candidato;
    srand( (unsigned)time(NULL) );
    
    //---- Inicializando os parametros do candidato ----- (acho que a evolução sera neles)
    candidatoTeste -> educacao = (((double)((rand()%101))/100));
    candidatoTeste -> educacaoSexual = (((double)((rand()%101))/100));
    candidatoTeste -> saudePublica = (((double)((rand()%101))/100));
    candidatoTeste -> segurancaPublica = (((double)((rand()%101))/100));
    candidatoTeste -> porteArma = (((double)((rand()%101))/100));
    candidatoTeste -> estadoLaico = (((double)((rand()%101))/100));
    candidatoTeste -> estatutoFamilia = (((double)((rand()%101))/100));
    candidatoTeste -> legalizarAborto = (((double)((rand()%101))/100));
    candidatoTeste -> reformaTrabalhista = (((double)((rand()%101))/100));
    candidatoTeste -> reformaAgraria = (((double)((rand()%101))/100));
    candidatoTeste -> legalizarMaconha = (((double)((rand()%101))/100));
    candidatoTeste -> intervencaoMilitar = (((double)((rand()%101))/100));
    candidatoTeste -> escolaSemPartido = (((double)((rand()%101))/100));

    //---- Carater politico e economico ----
        
        //---- Decobrir se um candidato é autoritario ou liberal ----
    double criteriosAutoritario = (candidatoTeste -> saudePublica + candidatoTeste -> segurancaPublica + candidatoTeste -> estatutoFamilia +
                                    + candidatoTeste -> reformaTrabalhista + candidatoTeste -> reformaAgraria + candidatoTeste -> intervencaoMilitar +
                                    + candidatoTeste -> escolaSemPartido);
    candidatoTeste -> autoritario = (criteriosAutoritario/7); // 7 é o numero de caracteristicas que o definem, normalizar entre 0 e 1
    printf("%lf \n", candidatoTeste -> autoritario);

    double criteriosLibertario = (candidatoTeste -> porteArma + candidatoTeste -> estadoLaico + candidatoTeste -> legalizarAborto + candidatoTeste -> legalizarMaconha);
    candidatoTeste -> libertario = (criteriosLibertario/4);
    printf("%lf \n", candidatoTeste -> libertario); // 4 é o numero de caracteristicas que definem, normalizar entre 0 e 1

    if(candidatoTeste -> autoritario > candidatoTeste -> libertario)
        printf("O candidato tem um viés político e economico autoritario\n");
    else 
        printf("O candidato tem um viés político e economico libertario\n");

        //---- Descobrir se um candidato é de direita, centro ou esquerda -----
    double criteriosDireita = (candidatoTeste -> estatutoFamilia + candidatoTeste -> reformaTrabalhista + candidatoTeste -> intervencaoMilitar + 
                                + candidatoTeste -> escolaSemPartido); 
    candidatoTeste -> direita = (criteriosDireita/4); // 4 é o numero de caracteristicas que o definem, normalizar entre 0 e 1
    printf("%lf \n", candidatoTeste -> direita); 
    
    double criteriosEsquerda = (candidatoTeste -> educacaoSexual + candidatoTeste -> saudePublica + candidatoTeste -> segurancaPublica + 
                                + candidatoTeste -> estadoLaico + candidatoTeste -> legalizarAborto + candidatoTeste -> reformaAgraria);
    candidatoTeste -> esquerda = (criteriosEsquerda /6);
    printf("%lf \n", candidatoTeste -> esquerda); // 6 é o numero de caracteristicas que o definem, normalizar entre 0 e 1

    if(candidatoTeste -> direita > 0.5 && candidatoTeste -> esquerda > 0.5){
        if(candidatoTeste -> direita > candidatoTeste -> esquerda)
            printf("O candidato tem um viés político e economico de direita\n");
        else
            printf("O candidato tem um viés político e economico de esquerda\n");
    }

    else if(candidatoTeste -> direita > 0.5 || candidatoTeste -> esquerda > 0.5){
        if(candidatoTeste -> direita > 0.5)
            printf("O candidato tem um viés político e economico de direita\n");
        else
            printf("O candidato tem um viés político e economico de esquerda\n");
    }
    else
        printf("O candidato tem um viés político e economico de centro\n");


    //---- Carater Social ----

    double criteriosDireitaSocial = (candidatoTeste -> segurancaPublica + candidatoTeste -> porteArma + candidatoTeste -> estatutoFamilia +
                                    + candidatoTeste -> reformaTrabalhista + candidatoTeste -> intervencaoMilitar + candidatoTeste -> escolaSemPartido);
    candidatoTeste -> direitaSocial = (criteriosDireitaSocial/6); // 6 é o numero de caracteristicas que o definem, normalizar entre 0 e 1
    printf("%lf\n",candidatoTeste -> direitaSocial);

    double criteriosEsquerdaSocial = (candidatoTeste -> educacao + candidatoTeste -> educacaoSexual + candidatoTeste -> saudePublica + candidatoTeste -> estadoLaico +
                                    + candidatoTeste -> legalizarAborto + candidatoTeste -> legalizarMaconha);
    candidatoTeste -> esquerdaSocial = (criteriosEsquerdaSocial/6); // 6 é o numero de caracteristicas que o definem, normalizar entre 0 e 1
    printf("%lf\n",candidatoTeste -> esquerdaSocial);

    if(candidatoTeste -> direitaSocial > candidatoTeste -> esquerdaSocial)
        printf("O candidato tem um viés social de direita\n");
    else 
        printf("O candidato tem um viés social de esquerda\n");



    // Setar os estados, acredito que quando formos setar os dados é bom que pegar os dados de um mesmo site
    
    //---- 1 Distrito Federal ----
    EstadosEleitores* DistritoFederal = new EstadosEleitores;

    DistritoFederal-> cAlta = ;
    DistritoFederal-> cMediaAlta = ;
    DistritoFederal-> cMediaBaixa = ;
    DistritoFederal-> cBaixa = ;
    DistritoFederal-> popVotante = 0.01395;
    DistritoFederal-> religiosidade = ;
    DistritoFederal-> rendaPerCapta = 2548;
    DistritoFederal-> escolaridade = ;
    DistritoFederal-> expectVida = ;
    DistritoFederal-> partidoMaisInf[3] = ;
    DistritoFederal-> setorMaisImport = ;
    DistritoFederal-> criminalidade = ;
    DistritoFederal-> taxaHomi = ;
    DistritoFederal-> taxaFEtaria = ;

    //---- 2 Sao Paulo ----
    EstadosEleitores* SaoPaulo = new EstadosEleitores;

    SaoPaulo-> cAlta = ;
    SaoPaulo-> cMediaAlta = ;
    SaoPaulo-> cMediaBaixa = ;
    SaoPaulo-> cBaixa = ;
    SaoPaulo-> popVotante = 0.22269;
    SaoPaulo-> religiosidade = ;
    SaoPaulo-> rendaPerCapta = 1712;
    SaoPaulo-> escolaridade = ;
    SaoPaulo-> expectVida = ;
    SaoPaulo-> partidoMaisInf[3] = ;
    SaoPaulo-> setorMaisImport = ;
    SaoPaulo-> criminalidade = ;
    SaoPaulo-> taxaHomi = ;
    SaoPaulo-> taxaFEtaria = ;

    //---- 3 Rio de Janeiro ----
    EstadosEleitores* RioDeJaneiro = new EstadosEleitores;

    RioDeJaneiro-> cAlta = ;
    RioDeJaneiro-> cMediaAlta = ;
    RioDeJaneiro-> cMediaBaixa = ;
    RioDeJaneiro-> cBaixa = ;
    RioDeJaneiro-> popVotante = 0.08477;
    RioDeJaneiro-> religiosidade = ;
    RioDeJaneiro-> rendaPerCapta = 1445;
    RioDeJaneiro-> escolaridade = ;
    RioDeJaneiro-> expectVida = ;
    RioDeJaneiro-> partidoMaisInf[3] = ;
    RioDeJaneiro-> setorMaisImport = ;
    RioDeJaneiro-> criminalidade = ;
    RioDeJaneiro-> taxaHomi = ;
    RioDeJaneiro-> taxaFEtaria = ;

    //---- 4 Santa Catarina -----
    EstadosEleitores* SantaCatarina = new EstadosEleitores;

    SantaCatarina-> cAlta = ;
    SantaCatarina-> cMediaAlta = ;
    SantaCatarina-> cMediaBaixa = ;
    SantaCatarina-> cBaixa = ;
    SantaCatarina-> popVotante = 0.3364;
    SantaCatarina-> religiosidade = ;
    SantaCatarina-> rendaPerCapta = 1597;
    SantaCatarina-> escolaridade = ;
    SantaCatarina-> expectVida = ;
    SantaCatarina-> partidoMaisInf[3] = ;
    SantaCatarina-> setorMaisImport = ;
    SantaCatarina-> criminalidade = ;
    SantaCatarina-> taxaHomi = ;
    SantaCatarina-> taxaFEtaria = ;
    // ---- 5 Rio Grande do Sul ----
    EstadosEleitores* RioGrandeDoSul = new EstadosEleitores;

    RioGrandeDoSul-> cAlta = ;
    RioGrandeDoSul-> cMediaAlta = ;
    RioGrandeDoSul-> cMediaBaixa = ;
    RioGrandeDoSul-> cBaixa = ;
    RioGrandeDoSul-> popVotante = 0.05866;
    RioGrandeDoSul-> religiosidade = ;
    RioGrandeDoSul-> rendaPerCapta = 1635;
    RioGrandeDoSul-> escolaridade = ;
    RioGrandeDoSul-> expectVida = ;
    RioGrandeDoSul-> partidoMaisInf[3] = ;
    RioGrandeDoSul-> setorMaisImport = ;
    RioGrandeDoSul-> criminalidade = ;
    RioGrandeDoSul-> taxaHomi = ;
    RioGrandeDoSul-> taxaFEtaria = ;

    // ---- 6 Parana ----
    EstadosEleitores* Parana = new EstadosEleitores;

    Parana-> cAlta = ;
    Parana-> cMediaAlta = ;
    Parana-> cMediaBaixa = ;
    Parana-> cBaixa = ;
    Parana-> popVotante = 0.05456;
    Parana-> religiosidade = ;
    Parana-> rendaPerCapta = 1472;
    Parana-> escolaridade = ;
    Parana-> expectVida = ;
    Parana-> partidoMaisInf[3] = ;
    Parana-> setorMaisImport = ;
    Parana-> criminalidade = ;
    Parana-> taxaHomi = ;
    Parana-> taxaFEtaria = ;

    // ---- 7 Mato Grosso ----
    EstadosEleitores* MatoGrosso = new EstadosEleitores;

    MatoGrosso-> cAlta = ;
    MatoGrosso-> cMediaAlta = ;
    MatoGrosso-> cMediaBaixa = ;
    MatoGrosso-> cBaixa = ;
    MatoGrosso-> popVotante = 0.01541;
    MatoGrosso-> religiosidade = ;
    MatoGrosso-> rendaPerCapta = 1291;
    MatoGrosso-> escolaridade = ;
    MatoGrosso-> expectVida = ;
    MatoGrosso-> partidoMaisInf[3] = ;
    MatoGrosso-> setorMaisImport = ;
    MatoGrosso-> criminalidade = ;
    MatoGrosso-> taxaHomi = ;
    MatoGrosso-> taxaFEtaria = ;

    // ---- 8 Mato Grosso do Sul ----
    EstadosEleitores* MatoGrossoDoSul = new EstadosEleitores;

    MatoGrossoDoSul-> cAlta = ;
    MatoGrossoDoSul-> cMediaAlta = ;
    MatoGrossoDoSul-> cMediaBaixa = ;
    MatoGrossoDoSul-> cBaixa = ;
    MatoGrossoDoSul-> popVotante = 0.01257;
    MatoGrossoDoSul-> religiosidade = ;
    MatoGrossoDoSul-> rendaPerCapta = 1291;
    MatoGrossoDoSul-> escolaridade = ;
    MatoGrossoDoSul-> expectVida = ;
    MatoGrossoDoSul-> partidoMaisInf[3] = ;
    MatoGrossoDoSul-> setorMaisImport = ;
    MatoGrossoDoSul-> criminalidade = ;
    MatoGrossoDoSul-> taxaHomi = ;
    MatoGrossoDoSul-> taxaFEtaria = ;
    // ---- 9 Espirito Santo ----
    EstadosEleitores* EspiritoSanto = new EstadosEleitores;

    EspiritoSanto-> cAlta = ;
    EspiritoSanto-> cMediaAlta = ;
    EspiritoSanto-> cMediaBaixa = ;
    EspiritoSanto-> cBaixa = ;
    EspiritoSanto-> popVotante = 0.01851;
    EspiritoSanto-> religiosidade = ;
    EspiritoSanto-> rendaPerCapta = 1205;
    EspiritoSanto-> escolaridade = ;
    EspiritoSanto-> expectVida = ;
    EspiritoSanto-> partidoMaisInf[3] = ;
    EspiritoSanto-> setorMaisImport = ;
    EspiritoSanto-> criminalidade = ;
    EspiritoSanto-> taxaHomi = ;
    EspiritoSanto-> taxaFEtaria = ;

    // ---- 10 Goias ----
    EstadosEleitores* Goias = new EstadosEleitores;

    Goias-> cAlta = ;
    Goias-> cMediaAlta = ;
    Goias-> cMediaBaixa = ;
    Goias-> cBaixa = ;
    Goias-> popVotante = 0.03053;
    Goias-> religiosidade = ;
    Goias-> rendaPerCapta = 1277;
    Goias-> escolaridade = ;
    Goias-> expectVida = ;
    Goias-> partidoMaisInf[3] = ;
    Goias-> setorMaisImport = ;
    Goias-> criminalidade = ;
    Goias-> taxaHomi = ;
    Goias-> taxaFEtaria = ;

    // ---- 11 Minas Gerais ----
    EstadosEleitores* MinasGerais = new EstadosEleitores;

    MinasGerais-> cAlta = ;
    MinasGerais-> cMediaAlta = ;
    MinasGerais-> cMediaBaixa = ;
    MinasGerais-> cBaixa = ;
    MinasGerais-> popVotante = 0.10617;
    MinasGerais-> religiosidade = ;
    MinasGerais-> rendaPerCapta = 1224;
    MinasGerais-> escolaridade = ;
    MinasGerais-> expectVida = ;
    MinasGerais-> partidoMaisInf[3] = ;
    MinasGerais-> setorMaisImport = ;
    MinasGerais-> criminalidade = ;
    MinasGerais-> taxaHomi = ;
    MinasGerais-> taxaFEtaria = ;

    // ---- 12 Amazonas ----
    EstadosEleitores* Amazonas = new EstadosEleitores;

    Amazonas-> cAlta = ;
    Amazonas-> cMediaAlta = ;
    Amazonas-> cMediaBaixa = ;
    Amazonas-> cBaixa = ;
    Amazonas-> popVotante = 0.01550;
    Amazonas-> religiosidade = ;
    Amazonas-> rendaPerCapta = 850;
    Amazonas-> escolaridade = ;
    Amazonas-> expectVida = ;
    Amazonas-> partidoMaisInf[3] = ;
    Amazonas-> setorMaisImport = ;
    Amazonas-> criminalidade = ;
    Amazonas-> taxaHomi = ;
    Amazonas-> taxaFEtaria = ;

    // ---- 13 Rondonia ----
    EstadosEleitores* Rondonia = new EstadosEleitores;

    Rondonia-> cAlta = ;
    Rondonia-> cMediaAlta = ;
    Rondonia-> cMediaBaixa = ;
    Rondonia-> cBaixa = ;
    Rondonia-> popVotante = 0.0775;
    Rondonia-> religiosidade = ;
    Rondonia-> rendaPerCapta = 957;
    Rondonia-> escolaridade = ;
    Rondonia-> expectVida = ;
    Rondonia-> partidoMaisInf[3] = ;
    Rondonia-> setorMaisImport = ;
    Rondonia-> criminalidade = ;
    Rondonia-> taxaHomi = ;
    Rondonia-> taxaFEtaria = ;

    // ---- 14 Roraima ----
    EstadosEleitores* Roraima = new EstadosEleitores;

    Roraima-> cAlta = ;
    Roraima-> cMediaAlta = ;
    Roraima-> cMediaBaixa = ;
    Roraima-> cBaixa = ;
    Roraima-> popVotante = 0.00216;
    Roraima-> religiosidade = ;
    Roraima-> rendaPerCapta = 1006;
    Roraima-> escolaridade = ;
    Roraima-> expectVida = ;
    Roraima-> partidoMaisInf[3] = ;
    Roraima-> setorMaisImport = ;
    Roraima-> criminalidade = ;
    Roraima-> taxaHomi = ;
    Roraima-> taxaFEtaria = ;

    // ---- 15 Tocantins ----
    EstadosEleitores* Tocantins = new EstadosEleitores;

    Tocantins-> cAlta = ;
    Tocantins-> cMediaAlta = ;
    Tocantins-> cMediaBaixa = ;
    Tocantins-> cBaixa = ;
    Tocantins-> popVotante = 0.00704;
    Tocantins-> religiosidade = ;
    Tocantins-> rendaPerCapta = 937;
    Tocantins-> escolaridade = ;
    Tocantins-> expectVida = ;
    Tocantins-> partidoMaisInf[3] = ;
    Tocantins-> setorMaisImport = ;
    Tocantins-> criminalidade = ;
    Tocantins-> taxaHomi = ;
    Tocantins-> taxaFEtaria = ;

    // ---- 16 Amapa ----
    EstadosEleitores* Amapa = new EstadosEleitores;

    Amapa-> cAlta = ;
    Amapa-> cMediaAlta = ;
    Amapa-> cMediaBaixa = ;
    Amapa-> cBaixa = ;
    Amapa-> popVotante = 0.00336;
    Amapa-> religiosidade = ;
    Amapa-> rendaPerCapta = 936;
    Amapa-> escolaridade = ;
    Amapa-> expectVida = ;
    Amapa-> partidoMaisInf[3] = ;
    Amapa-> setorMaisImport = ;
    Amapa-> criminalidade = ;
    Amapa-> taxaHomi = ;
    Amapa-> taxaFEtaria = ;


    // ---- 17 Sergipe ----
    EstadosEleitores* Sergipe = new EstadosEleitores;

    Sergipe-> cAlta = ;
    Sergipe-> cMediaAlta = ;
    Sergipe-> cMediaBaixa = ;
    Sergipe-> cBaixa = ;
    Sergipe-> popVotante = 0.01;
    Sergipe-> religiosidade = ;
    Sergipe-> rendaPerCapta = 836;
    Sergipe-> escolaridade = ;
    Sergipe-> expectVida = ;
    Sergipe-> partidoMaisInf[3] = ;
    Sergipe-> setorMaisImport = ;
    Sergipe-> criminalidade = ;
    Sergipe-> taxaHomi = ;
    Sergipe-> taxaFEtaria = ;

    // ---- 18 Acre ----
    EstadosEleitores* Acre = new EstadosEleitores;

    Acre-> cAlta = ;
    Acre-> cMediaAlta = ;
    Acre-> cMediaBaixa = ;
    Acre-> cBaixa = ;
    Acre-> popVotante = 0.00360;
    Acre-> religiosidade = ;
    Acre-> rendaPerCapta = 769;
    Acre-> escolaridade = ;
    Acre-> expectVida = ;
    Acre-> partidoMaisInf[3] = ;
    Acre-> setorMaisImport = ;
    Acre-> criminalidade = ;
    Acre-> taxaHomi = ;
    Acre-> taxaFEtaria = ;

    // ---- 19 Pernambuco ----
    EstadosEleitores* Pernambuco = new EstadosEleitores;

    Pernambuco-> cAlta = ;
    Pernambuco-> cMediaAlta = ;
    Pernambuco-> cMediaBaixa = ;
    Pernambuco-> cBaixa = ;
    Pernambuco-> popVotante = 0.0462;
    Pernambuco-> religiosidade = ;
    Pernambuco-> rendaPerCapta = 852;
    Pernambuco-> escolaridade = ;
    Pernambuco-> expectVida = ;
    Pernambuco-> partidoMaisInf[3] = ;
    Pernambuco-> setorMaisImport = ;
    Pernambuco-> criminalidade = ;
    Pernambuco-> taxaHomi = ;
    Pernambuco-> taxaFEtaria = ;

    // ---- 20 Rio Grande do Norte ----
    EstadosEleitores* RioGrandeDoNorte = new EstadosEleitores;

    RioGrandeDoNorte-> cAlta = ;
    RioGrandeDoNorte-> cMediaAlta = ;
    RioGrandeDoNorte-> cMediaBaixa = ;
    RioGrandeDoNorte-> cBaixa = ;
    RioGrandeDoNorte-> popVotante = 0.01660;
    RioGrandeDoNorte-> religiosidade = ;
    RioGrandeDoNorte-> rendaPerCapta = 845;
    RioGrandeDoNorte-> escolaridade = ;
    RioGrandeDoNorte-> expectVida = ;
    RioGrandeDoNorte-> partidoMaisInf[3] = ;
    RioGrandeDoNorte-> setorMaisImport = ;
    RioGrandeDoNorte-> criminalidade = ;
    RioGrandeDoNorte-> taxaHomi = ;
    RioGrandeDoNorte-> taxaFEtaria = ;
    
    // ---- 21 Bahia ----
    EstadosEleitores* Bahia = new EstadosEleitores;

    Bahia-> cAlta = ;
    Bahia-> cMediaAlta = ;
    Bahia-> cMediaBaixa = ;
    Bahia-> cBaixa = ;
    Bahia-> popVotante = 0.07146;
    Bahia-> religiosidade = ;
    Bahia-> rendaPerCapta = 862;
    Bahia-> escolaridade = ;
    Bahia-> expectVida = ;
    Bahia-> partidoMaisInf[3] = ;
    Bahia-> setorMaisImport = ;
    Bahia-> criminalidade = ;
    Bahia-> taxaHomi = ;
    Bahia-> taxaFEtaria = ;

    // ---- 22 Para ----
    EstadosEleitores* Para = new EstadosEleitores;

    Para-> cAlta = ;
    Para-> cMediaAlta = ;
    Para-> cMediaBaixa = ;
    Para-> cBaixa = ;
    Para-> popVotante = 0.03614;
    Para-> religiosidade = ;
    Para-> rendaPerCapta = 715;
    Para-> escolaridade = ;
    Para-> expectVida = ;
    Para-> partidoMaisInf[3] = ;
    Para-> setorMaisImport = ;
    Para-> criminalidade = ;
    Para-> taxaHomi = ;
    Para-> taxaFEtaria = ;

    // ---- 23 Ceara ----
    EstadosEleitores* Ceara = new EstadosEleitores;

    Ceara-> cAlta = ;
    Ceara-> cMediaAlta = ;
    Ceara-> cMediaBaixa = ;
    Ceara-> cBaixa = ;
    Ceara-> popVotante = 0.04406;
    Ceara-> religiosidade = ;
    Ceara-> rendaPerCapta = 824;
    Ceara-> escolaridade = ;
    Ceara-> expectVida = ;
    Ceara-> partidoMaisInf[3] = ;
    Ceara-> setorMaisImport = ;
    Ceara-> criminalidade = ;
    Ceara-> taxaHomi = ;
    Ceara-> taxaFEtaria = ;

    // ---- 24 Paraiba ----
    EstadosEleitores* Paraiba = new EstadosEleitores;

    Paraiba-> cAlta = ;
    Paraiba-> cMediaAlta = ;
    Paraiba-> cMediaBaixa = ;
    Paraiba-> cBaixa = ;
    Paraiba-> popVotante = 0.02014;
    Paraiba-> religiosidade = ;
    Paraiba-> rendaPerCapta = 928;
    Paraiba-> escolaridade = ;
    Paraiba-> expectVida = ;
    Paraiba-> partidoMaisInf[3] = ;
    Paraiba-> setorMaisImport = ;
    Paraiba-> criminalidade = ;
    Paraiba-> taxaHomi = ;
    Paraiba-> taxaFEtaria = ;

    // ---- 25 Alagoas ----
    EstadosEleitores* Alagoas = new EstadosEleitores;

    Alagoas-> cAlta = ;
    Alagoas-> cMediaAlta = ;
    Alagoas-> cMediaBaixa = ;
    Alagoas-> cBaixa = ;
    Alagoas-> popVotante = 0.01367;
    Alagoas-> religiosidade = ;
    Alagoas-> rendaPerCapta = 658;
    Alagoas-> escolaridade = ;
    Alagoas-> expectVida = ;
    Alagoas-> partidoMaisInf[3] = ;
    Alagoas-> setorMaisImport = ;
    Alagoas-> criminalidade = ;
    Alagoas-> taxaHomi = ;
    Alagoas-> taxaFEtaria = ;

    // ---- 26 Piaui ----
    EstadosEleitores* Piaui = new EstadosEleitores;

    Piaui-> cAlta = ;
    Piaui-> cMediaAlta = ;
    Piaui-> cMediaBaixa = ;
    Piaui-> cBaixa = ;
    Piaui-> popVotante = 0.0167;
    Piaui-> religiosidade = ;
    Piaui-> rendaPerCapta = 715;
    Piaui-> escolaridade = ;
    Piaui-> expectVida = ;
    Piaui-> partidoMaisInf[3] = ;
    Piaui-> setorMaisImport = ;
    Piaui-> criminalidade = ;
    Piaui-> taxaHomi = ;
    Piaui-> taxaFEtaria = ;

    // ---- 27 Maranhao ----
    EstadosEleitores* Maranhao = new EstadosEleitores;

    Maranhao-> cAlta = ;
    Maranhao-> cMediaAlta = ;
    Maranhao-> cMediaBaixa = ;
    Maranhao-> cBaixa = ;
    Maranhao-> popVotante = 0.03208;
    Maranhao-> religiosidade = ;
    Maranhao-> rendaPerCapta = 597;
    Maranhao-> escolaridade = ;
    Maranhao-> expectVida = ;
    Maranhao-> partidoMaisInf[3] = ;
    Maranhao-> setorMaisImport = ;
    Maranhao-> criminalidade = ;
    Maranhao-> taxaHomi = ;
    Maranhao-> taxaFEtaria = ;

    return 0;
}