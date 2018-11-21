#include <iostream>
#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

/* ---------------------------------------------------- DECLARAR AS CLASSES ----------------------------------------------------------------------------*/
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
    double classeA;
    double classeB;
    double classeC;
    double classesED;
    double popVotante;
    double religiosidade;
    //Determinantes IDH
    double rendaPerCapta;
    double ensinoSuperior;
    double analfabetismo;
    /*-3 é extrema esquerda, -2 é esquerda, -1 é centro-esquerda, 0 é centro,
    3 é extrema direita, 2 é direta e 1 é centro-direita*/
    int partidoMaisInf;
    //vamos fazer 1- primário, 2- sec e 3 - ter
    int setorMaisImport;
    double iGini; // indice para medir desigualdade social 
    double taxaHomi;
    double parcelaIdosos;

    //Caracteristicas
        //Carater politico e economico
    double nivelAutoritario;
    double nivelLibertario;

    double nivelDireita;
    double nivelCentro;
    double nivelEsquerda;

        //Carater social
    double nivelDireitaSocial;
    double nivelEsquerdaSocial;
};

/* ---------------------------------------------------------------------------------------------------------------------------------------------*/


/* ------------------------------------------------- DECLARAR AS FUNCOES DA EVOLUCAO -----------------------------------------------------------*/

void ParametrosDaEvolucao (EstadosEleitores* DistritoFederal, EstadosEleitores* SaoPaulo, EstadosEleitores* RioDeJaneiro, EstadosEleitores* SantaCatarina,
EstadosEleitores* RioGrandeDoSul, EstadosEleitores* Parana, EstadosEleitores* MatoGrosso, EstadosEleitores* MatoGrossoDoSul, EstadosEleitores* EspiritoSanto,
EstadosEleitores* Goias, EstadosEleitores* MinasGerais, EstadosEleitores* Amazonas, EstadosEleitores* Rondonia, EstadosEleitores* Roraima, EstadosEleitores* Tocantins,
EstadosEleitores* Amapa, EstadosEleitores* Sergipe, EstadosEleitores* Acre, EstadosEleitores* Pernambuco, EstadosEleitores* RioGrandeDoNorte, EstadosEleitores* Bahia,
EstadosEleitores* Para, EstadosEleitores* Ceara, EstadosEleitores* Paraiba, EstadosEleitores* Alagoas, EstadosEleitores* Piaui, EstadosEleitores* Maranhao);

void Evolucao(Candidato* candidatoTeste);

/* ------------------------------------------------------------------------------------------------------------------------------------------------*/


int main(){
/* ---------------------------------------------------- SETAR ESTADOS BRASILEIROS ------------------------------------------------------------------*/
    EstadosEleitores* DistritoFederal = new EstadosEleitores;       //1
    EstadosEleitores* SaoPaulo = new EstadosEleitores;              //2
    EstadosEleitores* RioDeJaneiro = new EstadosEleitores;          //3
    EstadosEleitores* SantaCatarina = new EstadosEleitores;         //4
    EstadosEleitores* RioGrandeDoSul = new EstadosEleitores;        //5
    EstadosEleitores* Parana = new EstadosEleitores;                //6
    EstadosEleitores* MatoGrosso = new EstadosEleitores;            //7
    EstadosEleitores* MatoGrossoDoSul = new EstadosEleitores;       //8
    EstadosEleitores* EspiritoSanto = new EstadosEleitores;         //9
    EstadosEleitores* Goias = new EstadosEleitores;                 //10
    EstadosEleitores* MinasGerais = new EstadosEleitores;           //11
    EstadosEleitores* Amazonas = new EstadosEleitores;              //12
    EstadosEleitores* Rondonia = new EstadosEleitores;              //13
    EstadosEleitores* Roraima = new EstadosEleitores;               //14
    EstadosEleitores* Tocantins = new EstadosEleitores;             //15
    EstadosEleitores* Amapa = new EstadosEleitores;                 //16
    EstadosEleitores* Sergipe = new EstadosEleitores;               //17
    EstadosEleitores* Acre = new EstadosEleitores;                  //18
    EstadosEleitores* Pernambuco = new EstadosEleitores;            //19
    EstadosEleitores* RioGrandeDoNorte = new EstadosEleitores;      //20
    EstadosEleitores* Bahia = new EstadosEleitores;                 //21
    EstadosEleitores* Para = new EstadosEleitores;                  //22
    EstadosEleitores* Ceara = new EstadosEleitores;                 //23
    EstadosEleitores* Paraiba = new EstadosEleitores;               //24
    EstadosEleitores* Alagoas = new EstadosEleitores;               //25
    EstadosEleitores* Piaui = new EstadosEleitores;                 //26
    EstadosEleitores* Maranhao = new EstadosEleitores;              //27
    
    ParametrosDaEvolucao(DistritoFederal,SaoPaulo,RioDeJaneiro,SantaCatarina,RioGrandeDoSul,Parana,MatoGrosso,MatoGrossoDoSul,EspiritoSanto,
Goias,MinasGerais,Amazonas,Rondonia,Roraima,Tocantins,Amapa,Sergipe,Acre,Pernambuco,RioGrandeDoNorte,Bahia,Para,Ceara,Paraiba,Alagoas,Piaui,Maranhao);
/* ----------------------------------------------------------------------------------------------------------------------------------------------------*/
/* ---------------------------------------------------- EVOLUIR O CANDIDATO ---------------------------------------------------------------------------*/   
    Candidato* candidatoTeste = new Candidato;
    Evolucao(candidatoTeste);
/* ----------------------------------------------------------------------------------------------------------------------------------------------------*/

    return 0;
}



void Evolucao(Candidato* candidatoTeste){
     //---- Inicilalizando os genes da especie que serão evoluídos -----
    double gene1, gene2, gene3, gene4, gene5, gene6, gene7, gene8, gene9, gene10, gene11, gene12, gene13;

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
}

void ParametrosDaEvolucao (EstadosEleitores* DistritoFederal, EstadosEleitores* SaoPaulo, EstadosEleitores* RioDeJaneiro, EstadosEleitores* SantaCatarina,
EstadosEleitores* RioGrandeDoSul, EstadosEleitores* Parana, EstadosEleitores* MatoGrosso, EstadosEleitores* MatoGrossoDoSul, EstadosEleitores* EspiritoSanto,
EstadosEleitores* Goias, EstadosEleitores* MinasGerais, EstadosEleitores* Amazonas, EstadosEleitores* Rondonia, EstadosEleitores* Roraima, EstadosEleitores* Tocantins,
EstadosEleitores* Amapa, EstadosEleitores* Sergipe, EstadosEleitores* Acre, EstadosEleitores* Pernambuco, EstadosEleitores* RioGrandeDoNorte, EstadosEleitores* Bahia,
EstadosEleitores* Para, EstadosEleitores* Ceara, EstadosEleitores* Paraiba, EstadosEleitores* Alagoas, EstadosEleitores* Piaui, EstadosEleitores* Maranhao){
 
    //---- 1 Distrito Federal ----
    DistritoFederal-> classeA = 0.0228;
    DistritoFederal-> classeB = 0.0252;
    DistritoFederal-> classeC = 0.1402;
    DistritoFederal-> classesED = 0.5048;
    DistritoFederal-> popVotante = 0.01395;
    DistritoFederal-> religiosidade = 0.8240;
    DistritoFederal-> rendaPerCapta = 2548;
    DistritoFederal-> ensinoSuperior = 0.1749;
    DistritoFederal -> analfabetismo = 0.026;
    DistritoFederal-> partidoMaisInf = -1; //2016 PT presidente
    DistritoFederal-> setorMaisImport = 3;
    DistritoFederal-> iGini = 0.555;
    DistritoFederal-> taxaHomi = 18.2;
    DistritoFederal-> parcelaIdosos = 0.114;

    //Caracteristicas
        //Carater politico e economico
    DistritoFederal-> nivelAutoritario = (DistritoFederal-> classeA + DistritoFederal-> classeC + DistritoFederal-> classesED + DistritoFederal-> religiosidade +
                                        DistritoFederal-> analfabetismo + DistritoFederal-> iGini + DistritoFederal-> parcelaIdosos);
    if(DistritoFederal-> setorMaisImport == 1)
        DistritoFederal-> nivelAutoritario = (DistritoFederal-> nivelAutoritario + 1)/8;
    else
        DistritoFederal-> nivelAutoritario = DistritoFederal-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    DistritoFederal-> nivelLibertario = (DistritoFederal-> classeB + DistritoFederal-> ensinoSuperior);
    if(DistritoFederal-> setorMaisImport == 2 || DistritoFederal-> setorMaisImport == 3)
        DistritoFederal-> nivelLibertario = (DistritoFederal-> nivelLibertario + 1)/3;
    else
        DistritoFederal-> nivelLibertario = DistritoFederal-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    DistritoFederal-> nivelDireita = (DistritoFederal-> classeA + DistritoFederal-> classeB + DistritoFederal-> religiosidade +  
                                    DistritoFederal-> analfabetismo + DistritoFederal-> iGini + DistritoFederal-> parcelaIdosos);
    if((DistritoFederal-> setorMaisImport == 1 || DistritoFederal-> setorMaisImport == 2) && (DistritoFederal-> partidoMaisInf == 1 || DistritoFederal-> partidoMaisInf == 2 || DistritoFederal-> partidoMaisInf == 3))
         DistritoFederal-> nivelDireita = (DistritoFederal-> nivelDireita + 2)/8;
    else if((DistritoFederal-> setorMaisImport != 1 || DistritoFederal-> setorMaisImport == 2) && (DistritoFederal-> partidoMaisInf == 1 || DistritoFederal-> partidoMaisInf == 2 || DistritoFederal-> partidoMaisInf == 3))
         DistritoFederal-> nivelDireita = (DistritoFederal-> nivelDireita + 1)/7;
    else
        DistritoFederal-> nivelDireita = DistritoFederal-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    DistritoFederal-> nivelCentro = (DistritoFederal-> classeC + DistritoFederal-> ensinoSuperior);
    if(DistritoFederal-> setorMaisImport == 3 && DistritoFederal-> partidoMaisInf == 0)
        DistritoFederal-> nivelCentro = (DistritoFederal-> nivelCentro + 2)/4;
    else if(DistritoFederal-> setorMaisImport != 3 && DistritoFederal-> partidoMaisInf == 0)
        DistritoFederal-> nivelCentro = (DistritoFederal-> nivelCentro + 1)/3;
    else
        DistritoFederal-> nivelCentro = DistritoFederal-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    DistritoFederal-> nivelEsquerda = DistritoFederal-> classesED;
    if(DistritoFederal-> partidoMaisInf == -1 || DistritoFederal-> partidoMaisInf == -2 || DistritoFederal-> partidoMaisInf == -3)
        DistritoFederal-> nivelEsquerda = (DistritoFederal-> nivelEsquerda + 1)/2;
    
        //Carater Social
    DistritoFederal-> nivelDireitaSocial = (DistritoFederal-> classeA + DistritoFederal-> classeB + DistritoFederal-> classeC + DistritoFederal-> classesED + 
                                            DistritoFederal-> religiosidade + DistritoFederal-> iGini + DistritoFederal-> parcelaIdosos);
    if(DistritoFederal-> setorMaisImport == 1)
        DistritoFederal-> nivelDireitaSocial = (DistritoFederal-> nivelDireitaSocial + 1)/8;
    else
        DistritoFederal-> nivelDireitaSocial = DistritoFederal-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    DistritoFederal-> nivelEsquerdaSocial = (DistritoFederal-> ensinoSuperior + DistritoFederal-> analfabetismo)/2;

    printf("%lf   %lf   %lf   %lf   %lf   %lf   %lf \n",DistritoFederal-> nivelAutoritario, DistritoFederal-> nivelLibertario , DistritoFederal-> nivelDireita, DistritoFederal-> nivelCentro, DistritoFederal-> nivelEsquerda, DistritoFederal-> nivelDireitaSocial, DistritoFederal-> nivelEsquerdaSocial);
    

    //---- 2 Sao Paulo ----
    SaoPaulo-> classeA = 0.0054;
    SaoPaulo-> classeB = 0.0191;
    SaoPaulo-> classeC = 0.0805;
    SaoPaulo-> classesED = 0.5814;
    SaoPaulo-> popVotante = 0.22269;
    SaoPaulo-> religiosidade = 0.842;
    SaoPaulo-> rendaPerCapta = 1712;
    SaoPaulo-> ensinoSuperior = 0.1167;
    SaoPaulo -> analfabetismo = 0.028;
    SaoPaulo-> partidoMaisInf = 1; //PSDB
    SaoPaulo-> setorMaisImport = 3;
    SaoPaulo-> iGini = 0.46;
    SaoPaulo-> taxaHomi = 10.7;
    SaoPaulo-> parcelaIdosos = 0.153;

    //---- 3 Rio de Janeiro ----
    RioDeJaneiro-> classeA = 0.0072;
    RioDeJaneiro-> classeB = 0.0186;
    RioDeJaneiro-> classeC = 0.0848;
    RioDeJaneiro-> classesED = 0.58;
    RioDeJaneiro-> popVotante = 0.08477;
    RioDeJaneiro-> religiosidade = 0.7520;
    RioDeJaneiro-> rendaPerCapta = 1445;
    RioDeJaneiro-> ensinoSuperior = 0.1091;
    RioDeJaneiro -> analfabetismo = 0.027;
    RioDeJaneiro-> partidoMaisInf = 0; //PMDB
    RioDeJaneiro-> setorMaisImport = 3;
    RioDeJaneiro-> iGini = 0.503;
    RioDeJaneiro-> taxaHomi = 40.4;
    RioDeJaneiro-> parcelaIdosos = 0.175;

    //---- 4 Santa Catarina -----
    SantaCatarina-> classeA = 0.0036;
    SantaCatarina-> classeB = 0.0158;
    SantaCatarina-> classeC = 0.0766;
    SantaCatarina-> classesED = 0.6153;
    SantaCatarina-> popVotante = 0.3364;
    SantaCatarina-> religiosidade = 0.9310;
    SantaCatarina-> rendaPerCapta = 1597;
    SantaCatarina-> ensinoSuperior = 0.0971;
    SantaCatarina-> analfabetismo = 0.028;
    SantaCatarina-> partidoMaisInf = 0; //PMDB
    SantaCatarina-> setorMaisImport = 1;
    SantaCatarina-> iGini = 0.419;
    SantaCatarina-> taxaHomi = 16.5;
    SantaCatarina-> parcelaIdosos = 0.152;

    // ---- 5 Rio Grande do Sul ----
    RioGrandeDoSul-> classeA = 0.005;
    RioGrandeDoSul-> classeB = 0.0151;
    RioGrandeDoSul-> classeC = 0.095;
    RioGrandeDoSul-> classesED = 0.5928;
    RioGrandeDoSul-> popVotante = 0.05866;
    RioGrandeDoSul-> religiosidade = 87.10;
    RioGrandeDoSul-> rendaPerCapta = 1635;
    RioGrandeDoSul-> ensinoSuperior = 0.0867;
    RioGrandeDoSul-> analfabetismo = 0.032;
    RioGrandeDoSul-> partidoMaisInf = 0; //PMDB
    RioGrandeDoSul-> setorMaisImport = 3;
    RioGrandeDoSul-> iGini = 0.454;
    RioGrandeDoSul-> taxaHomi = 26.7;
    RioGrandeDoSul-> parcelaIdosos = 0.178;

    // ---- 6 Parana ----
    Parana-> classeA = 0.0047;
    Parana-> classeB = 0.0169;
    Parana-> classeC = 0.0895;
    Parana-> classesED = 0.6013;
    Parana-> popVotante = 0.05456;
    Parana-> religiosidade = 89.9;
    Parana-> rendaPerCapta = 1472;
    Parana-> ensinoSuperior = 0.0971;
    Parana-> analfabetismo = 0.045;
    Parana-> partidoMaisInf = 1; //PSDB
    Parana-> setorMaisImport = 1;
    Parana-> iGini = 0.465;
    Parana-> taxaHomi = 22.6;
    Parana-> parcelaIdosos = 0.146;

    // ---- 7 Mato Grosso ----
    MatoGrosso-> classeA = 0.003;
    MatoGrosso-> classeB = 0.0138;
    MatoGrosso-> classeC = 0.0905;
    MatoGrosso-> classesED = 0.6001;
    MatoGrosso-> popVotante = 0.01541;
    MatoGrosso-> religiosidade = 87.9;
    MatoGrosso-> rendaPerCapta = 1291;
    MatoGrosso-> ensinoSuperior = 0.0765;
    MatoGrosso-> analfabetismo = 0.065;
    MatoGrosso-> partidoMaisInf = 1; //PSDB
    MatoGrosso-> setorMaisImport = 1;
    MatoGrosso-> iGini = 0.445;
    MatoGrosso-> taxaHomi = 31.5;
    MatoGrosso-> parcelaIdosos = 0.114;

    // ---- 8 Mato Grosso do Sul ----
    MatoGrossoDoSul-> classeA = 0.0054;
    MatoGrossoDoSul-> classeB = 0.0168;
    MatoGrossoDoSul-> classeC = 0.1064;
    MatoGrossoDoSul-> classesED = 0.6071;
    MatoGrossoDoSul-> popVotante = 0.01257;
    MatoGrossoDoSul-> religiosidade = 93.9;
    MatoGrossoDoSul-> rendaPerCapta = 1291;
    MatoGrossoDoSul-> ensinoSuperior = 0.0886;
    MatoGrossoDoSul-> analfabetismo = 0.063;
    MatoGrossoDoSul-> partidoMaisInf = 1; //PSDB
    MatoGrossoDoSul-> setorMaisImport = 1;
    MatoGrossoDoSul-> iGini = 0.479;
    MatoGrossoDoSul-> taxaHomi = 20.8;
    MatoGrossoDoSul-> parcelaIdosos = 0.133;

    // ---- 9 Espirito Santo ----
    EspiritoSanto-> classeA = 0.0021;
    EspiritoSanto-> classeB = 0.0157;
    EspiritoSanto-> classeC = 0.0911;
    EspiritoSanto-> classesED = 0.5813;
    EspiritoSanto-> popVotante = 0.01851;
    EspiritoSanto-> religiosidade = 0.853;
    EspiritoSanto-> rendaPerCapta = 1205;
    EspiritoSanto-> ensinoSuperior = 0.0834;
    EspiritoSanto-> analfabetismo = 0.062;
    EspiritoSanto-> partidoMaisInf = 0; //PMDB
    EspiritoSanto-> setorMaisImport = 3;
    EspiritoSanto-> iGini = 0.471;
    EspiritoSanto-> taxaHomi = 37.4;
    EspiritoSanto-> parcelaIdosos = 0.148;

    // ---- 10 Goias ----
    Goias-> classeA = 0.0025;
    Goias-> classeB = 0.0099;
    Goias-> classeC = 0.087;
    Goias-> classesED = 0.6119;
    Goias-> popVotante = 0.03053;
    Goias-> religiosidade = 0.869;
    Goias-> rendaPerCapta = 1277;
    Goias-> ensinoSuperior = 0.0775;
    Goias-> analfabetismo = 0.065;
    Goias-> partidoMaisInf = 0; //PMDB
    Goias-> setorMaisImport = 3;
    Goias-> iGini = 0.436;
    Goias-> taxaHomi = 39.3;
    Goias-> parcelaIdosos = 0.124;

    // ---- 11 Minas Gerais ----
    MinasGerais-> classeA = 0.0039;
    MinasGerais-> classeB = 0.0136;
    MinasGerais-> classeC = 0.0912;
    MinasGerais-> classesED = 0.6032;
    MinasGerais-> popVotante = 0.10617;
    MinasGerais-> religiosidade = 0.906;
    MinasGerais-> rendaPerCapta = 1224;
    MinasGerais-> ensinoSuperior = 0.0795;
    MinasGerais-> analfabetismo = 0.062;
    MinasGerais-> partidoMaisInf = 0; //PMDB
    MinasGerais-> setorMaisImport = 1;
    MinasGerais-> iGini = 0.478;
    MinasGerais-> taxaHomi = 19.6;
    MinasGerais-> parcelaIdosos = 0.151;

    // ---- 12 Amazonas ----
    Amazonas-> classeA = 0.0012;
    Amazonas-> classeB = 0.0078;
    Amazonas-> classeC = 0.0661;
    Amazonas-> classesED = 0.5377;
    Amazonas-> popVotante = 0.01550;
    Amazonas-> religiosidade = 0.8950;
    Amazonas-> rendaPerCapta = 850;
    Amazonas-> ensinoSuperior = 0.532;
    Amazonas-> analfabetismo = 0.069;
    Amazonas-> partidoMaisInf = 1; //PSDB
    Amazonas-> setorMaisImport = 3;
    Amazonas-> iGini = 0.476;
    Amazonas-> taxaHomi = 31.3;
    Amazonas-> parcelaIdosos = 0.088;

    // ---- 13 Rondonia ----
    Rondonia-> classeA = 0.0014;
    Rondonia-> classeB = 0.0088;
    Rondonia-> classeC = 0.092;
    Rondonia-> classesED = 0.5751;
    Rondonia-> popVotante = 0.0775;
    Rondonia-> religiosidade = 0.814;
    Rondonia-> rendaPerCapta = 957;
    Rondonia-> ensinoSuperior = 0.0566;
    Rondonia-> analfabetismo = 0.067;
    Rondonia-> partidoMaisInf = 0; //PMDB
    Rondonia-> setorMaisImport = 1;
    Rondonia-> iGini = 0.452;
    Rondonia-> taxaHomi = 28.1;
    Rondonia-> parcelaIdosos = 0.102;

    // ---- 14 Roraima ----
    Roraima-> classeA = 0.0029;
    Roraima-> classeB = 0.0128;
    Roraima-> classeC = 0.0978;
    Roraima-> classesED = 0.5686;
    Roraima-> popVotante = 0.00216;
    Roraima-> religiosidade = 78.2;
    Roraima-> rendaPerCapta = 1006;
    Roraima-> ensinoSuperior = 0.0672;
    Roraima-> analfabetismo = 0.066;
    Roraima-> partidoMaisInf = 0; //PMDB
    Roraima-> setorMaisImport = 1;
    Roraima-> iGini = 0.5;
    Roraima-> taxaHomi = 44;
    Roraima-> parcelaIdosos = 0.08;

    // ---- 15 Tocantins ----
    Tocantins-> classeA = 0.0033;
    Tocantins-> classeB = 0.0104;
    Tocantins-> classeC = 0.0754;
    Tocantins-> classesED = 0.5944;
    Tocantins-> popVotante = 0.00704;
    Tocantins-> religiosidade = 0.913;
    Tocantins-> rendaPerCapta = 937;
    Tocantins-> ensinoSuperior = 0.0705;
    Tocantins-> analfabetismo = 0.104;
    Tocantins-> partidoMaisInf = 0; //PMDB
    Tocantins-> setorMaisImport = 1;
    Tocantins-> iGini = 0.504;
    Tocantins-> taxaHomi = 26.6;
    Tocantins-> parcelaIdosos = 0.13;

    // ---- 16 Amapa ----
    Amapa-> classeA = 0;
    Amapa-> classeB = 0.0076;
    Amapa-> classeC = 0.0881;
    Amapa-> classesED = 0.5396;
    Amapa-> popVotante = 0.00336;
    Amapa-> religiosidade = 0.915;
    Amapa-> rendaPerCapta = 936;
    Amapa-> ensinoSuperior = 0.0698;
    Amapa-> analfabetismo = 0.05;
    Amapa-> partidoMaisInf = -1; //rede
    Amapa-> setorMaisImport = 1;
    Amapa-> iGini = 0.457;
    Amapa-> taxaHomi = 53.9;
    Amapa-> parcelaIdosos = 0.08;


    // ---- 17 Sergipe ----
    Sergipe-> classeA = 0.004;
    Sergipe-> classeB = 0.0063;
    Sergipe-> classeC = 0.0507;
    Sergipe-> classesED = 0.638;
    Sergipe-> popVotante = 0.01;
    Sergipe-> religiosidade = 0.882;
    Sergipe-> rendaPerCapta = 836;
    Sergipe-> ensinoSuperior = 0.0600;
    Sergipe-> analfabetismo = 0.147;
    Sergipe-> partidoMaisInf = -1; //PSB
    Sergipe-> setorMaisImport = 3;
    Sergipe-> iGini = 0.47;
    Sergipe-> taxaHomi = 55.7;
    Sergipe-> parcelaIdosos = 0.118;

    // ---- 18 Acre ----
    Acre-> classeA = 0.003;
    Acre-> classeB = 0.0054;
    Acre-> classeC = 0.0678;
    Acre-> classesED = 0.5576;
    Acre-> popVotante = 0.00360;
    Acre-> religiosidade = 0.846;
    Acre-> rendaPerCapta = 769;
    Acre-> ensinoSuperior = 0.0583;
    Acre-> analfabetismo = 0.131;
    Acre-> partidoMaisInf = -1; //PT
    Acre-> setorMaisImport = 1;
    Acre-> iGini = 0.5;
    Acre-> taxaHomi = 63.9;
    Acre-> parcelaIdosos = 0.088;

    // ---- 19 Pernambuco ----
    Pernambuco-> classeA = 0.0022;
    Pernambuco-> classeB = 0.0075;
    Pernambuco-> classeC = 0.0495;
    Pernambuco-> classesED = 0.6075;
    Pernambuco-> popVotante = 0.0462;
    Pernambuco-> religiosidade = 0.906;
    Pernambuco-> rendaPerCapta = 852;
    Pernambuco-> ensinoSuperior = 0.0567;
    Pernambuco-> analfabetismo = 0.128;
    Pernambuco-> partidoMaisInf = -1; //PSB
    Pernambuco-> setorMaisImport = 3;
    Pernambuco-> iGini = 0.492;
    Pernambuco-> taxaHomi = 57.3;
    Pernambuco-> parcelaIdosos = 0.148;

    // ---- 20 Rio Grande do Norte ----
    RioGrandeDoNorte-> classeA = 0.0012;
    RioGrandeDoNorte-> classeB = 0.0074;
    RioGrandeDoNorte-> classeC = 0.067;
    RioGrandeDoNorte-> classesED = 0.6088;
    RioGrandeDoNorte-> popVotante = 0.01660;
    RioGrandeDoNorte-> religiosidade = 0.9140;
    RioGrandeDoNorte-> rendaPerCapta = 845;
    RioGrandeDoNorte-> ensinoSuperior = 0.0589;
    RioGrandeDoNorte-> analfabetismo = 0.147;
    RioGrandeDoNorte-> partidoMaisInf = 0; //PSD
    RioGrandeDoNorte-> setorMaisImport = 1;
    RioGrandeDoNorte-> iGini = 0.487;
    RioGrandeDoNorte-> taxaHomi = 68;
    RioGrandeDoNorte-> parcelaIdosos = 0.126;
    
    // ---- 21 Bahia ----
    Bahia-> classeA = 0.0017;
    Bahia-> classeB = 0.0056;
    Bahia-> classeC = 0.0496;
    Bahia-> classesED = 0.6415;
    Bahia-> popVotante = 0.07146;
    Bahia-> religiosidade = 0.826;
    Bahia-> rendaPerCapta = 862;
    Bahia-> ensinoSuperior = 0.0451;
    Bahia-> analfabetismo = 0.130;
    Bahia-> partidoMaisInf = 1; //DEM
    Bahia-> setorMaisImport = 1;
    Bahia-> iGini = 0.481;
    Bahia-> taxaHomi = 45.1;
    Bahia-> parcelaIdosos = 0.134;

    // ---- 22 Para ----
    Para-> classeA = 0.0011;
    Para-> classeB = 0.0044;
    Para-> classeC = 0.049;
    Para-> classesED = 0.5969;
    Para-> popVotante = 0.03614;
    Para-> religiosidade = 0.895;
    Para-> rendaPerCapta = 715;
    Para-> ensinoSuperior = 0.0406;
    Para-> analfabetismo = 0.093;
    Para-> partidoMaisInf = 1; //PSDB
    Para-> setorMaisImport = 1;
    Para-> iGini = 0.459;
    Para-> taxaHomi = 53.4;
    Para-> parcelaIdosos = 0.106;

    // ---- 23 Ceara ----
    Ceara-> classeA = 0.0012;
    Ceara-> classeB = 0.047;
    Ceara-> classeC = 0.0403;
    Ceara-> classesED = 0.6271;
    Ceara-> popVotante = 0.04406;
    Ceara-> religiosidade = 0.934;
    Ceara-> rendaPerCapta = 824;
    Ceara-> ensinoSuperior = 0.0496;
    Ceara-> analfabetismo = 0.152;
    Ceara-> partidoMaisInf = -1; //PDT
    Ceara-> setorMaisImport = 3;
    Ceara-> iGini = 0.453;
    Ceara-> taxaHomi = 59.1;
    Ceara-> parcelaIdosos = 0.149;

    // ---- 24 Paraiba ----
    Paraiba-> classeA = 0.0019;
    Paraiba-> classeB = 0.0089;
    Paraiba-> classeC = 0.0627;
    Paraiba-> classesED = 0.6295;
    Paraiba-> popVotante = 0.02014;
    Paraiba-> religiosidade = 0.921;
    Paraiba-> rendaPerCapta = 928;
    Paraiba-> ensinoSuperior = 0.0571;
    Paraiba-> analfabetismo = 0.163;
    Paraiba-> partidoMaisInf = -1; //PSB
    Paraiba-> setorMaisImport = 3;
    Paraiba-> iGini = 0.51;
    Paraiba-> taxaHomi = 31.9;
    Paraiba-> parcelaIdosos = 0.135;

    // ---- 25 Alagoas ----
    Alagoas-> classeA = 0.0004;
    Alagoas-> classeB = 0.0031;
    Alagoas-> classeC = 0.0444;
    Alagoas-> classesED = 0.6034;
    Alagoas-> popVotante = 0.01367;
    Alagoas-> religiosidade = 0.8810;
    Alagoas-> rendaPerCapta = 658;
    Alagoas-> ensinoSuperior = 0.0466;
    Alagoas-> analfabetismo = 0.194;
    Alagoas-> partidoMaisInf = 0; //PMDB
    Alagoas-> setorMaisImport = 1;
    Alagoas-> iGini = 0.438;
    Alagoas-> taxaHomi = 56.9;
    Alagoas-> parcelaIdosos = 0.128;

    // ---- 26 Piaui ----
    Piaui-> classeA = 0.0025;
    Piaui-> classeB = 0.0031;
    Piaui-> classeC = 0.0468;
    Piaui-> classesED = 0.6446;
    Piaui-> popVotante = 0.0167;
    Piaui-> religiosidade = 0.9480;
    Piaui-> rendaPerCapta = 715;
    Piaui-> ensinoSuperior = 0.0510;
    Piaui-> analfabetismo = 0.172;
    Piaui-> partidoMaisInf = 2; //PP
    Piaui-> setorMaisImport = 2;
    Piaui-> iGini = 0.505;
    Piaui-> taxaHomi = 20.2;
    Piaui-> parcelaIdosos = 0.121;

    // ---- 27 Maranhao ----
    Maranhao-> classeA = 0.002;
    Maranhao-> classeB = 0.059;
    Maranhao-> classeC = 0.0364;
    Maranhao-> classesED = 0.6083;
    Maranhao-> popVotante = 0.03208;
    Maranhao-> religiosidade = 0.917;
    Maranhao-> rendaPerCapta = 597;
    Maranhao-> ensinoSuperior = 0.0356;
    Maranhao-> analfabetismo = 0.167; 
    Maranhao-> partidoMaisInf = -3;
    Maranhao-> setorMaisImport = 1;
    Maranhao-> iGini = 0.506;
    Maranhao-> taxaHomi = 29.4;
    Maranhao-> parcelaIdosos = 0.113;
}