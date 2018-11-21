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

void IniciaMundo (EstadosEleitores* DistritoFederal, EstadosEleitores* SaoPaulo, EstadosEleitores* RioDeJaneiro, EstadosEleitores* SantaCatarina,
EstadosEleitores* RioGrandeDoSul, EstadosEleitores* Parana, EstadosEleitores* MatoGrosso, EstadosEleitores* MatoGrossoDoSul, EstadosEleitores* EspiritoSanto,
EstadosEleitores* Goias, EstadosEleitores* MinasGerais, EstadosEleitores* Amazonas, EstadosEleitores* Rondonia, EstadosEleitores* Roraima, EstadosEleitores* Tocantins,
EstadosEleitores* Amapa, EstadosEleitores* Sergipe, EstadosEleitores* Acre, EstadosEleitores* Pernambuco, EstadosEleitores* RioGrandeDoNorte, EstadosEleitores* Bahia,
EstadosEleitores* Para, EstadosEleitores* Ceara, EstadosEleitores* Paraiba, EstadosEleitores* Alagoas, EstadosEleitores* Piaui, EstadosEleitores* Maranhao);

void IniciaPopulacao(Candidato* candidatoTeste);

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
    
    IniciaMundo(DistritoFederal,SaoPaulo,RioDeJaneiro,SantaCatarina,RioGrandeDoSul,Parana,MatoGrosso,MatoGrossoDoSul,EspiritoSanto,
Goias,MinasGerais,Amazonas,Rondonia,Roraima,Tocantins,Amapa,Sergipe,Acre,Pernambuco,RioGrandeDoNorte,Bahia,Para,Ceara,Paraiba,Alagoas,Piaui,Maranhao);
/* ----------------------------------------------------------------------------------------------------------------------------------------------------*/
/* ---------------------------------------------------- EVOLUIR O CANDIDATO ---------------------------------------------------------------------------*/   
    Candidato* candidatoTeste = new Candidato;
    IniciaPopulacao(candidatoTeste);
/* ----------------------------------------------------------------------------------------------------------------------------------------------------*/

    return 0;
}



void IniciaPopulacao(Candidato* candidatoTeste){
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


/*-------------------------------------------------DEFINIR OS VALORES DOS CAMPOS DE CADA ESTADO--------------------------------------------------------------------*/
void IniciaMundo (EstadosEleitores* DistritoFederal, EstadosEleitores* SaoPaulo, EstadosEleitores* RioDeJaneiro, EstadosEleitores* SantaCatarina,
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

    //Caracteristicas
        //Carater politico e economico
    SaoPaulo-> nivelAutoritario = (SaoPaulo-> classeA + SaoPaulo-> classeC + SaoPaulo-> classesED + SaoPaulo-> religiosidade +
                                        SaoPaulo-> analfabetismo + SaoPaulo-> iGini + SaoPaulo-> parcelaIdosos);
    if(SaoPaulo-> setorMaisImport == 1)
        SaoPaulo-> nivelAutoritario = (SaoPaulo-> nivelAutoritario + 1)/8;
    else
        SaoPaulo-> nivelAutoritario = SaoPaulo-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    SaoPaulo-> nivelLibertario = (SaoPaulo-> classeB + SaoPaulo-> ensinoSuperior);
    if(SaoPaulo-> setorMaisImport == 2 || SaoPaulo-> setorMaisImport == 3)
        SaoPaulo-> nivelLibertario = (SaoPaulo-> nivelLibertario + 1)/3;
    else
        SaoPaulo-> nivelLibertario = SaoPaulo-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    SaoPaulo-> nivelDireita = (SaoPaulo-> classeA + SaoPaulo-> classeB + SaoPaulo-> religiosidade +  
                                    SaoPaulo-> analfabetismo + SaoPaulo-> iGini + SaoPaulo-> parcelaIdosos);
    if((SaoPaulo-> setorMaisImport == 1 || SaoPaulo-> setorMaisImport == 2) && (SaoPaulo-> partidoMaisInf == 1 || SaoPaulo-> partidoMaisInf == 2 || SaoPaulo-> partidoMaisInf == 3))
         SaoPaulo-> nivelDireita = (SaoPaulo-> nivelDireita + 2)/8;
    else if((SaoPaulo-> setorMaisImport != 1 || SaoPaulo-> setorMaisImport == 2) && (SaoPaulo-> partidoMaisInf == 1 || SaoPaulo-> partidoMaisInf == 2 || SaoPaulo-> partidoMaisInf == 3))
         SaoPaulo-> nivelDireita = (SaoPaulo-> nivelDireita + 1)/7;
    else
        SaoPaulo-> nivelDireita = SaoPaulo-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    SaoPaulo-> nivelCentro = (SaoPaulo-> classeC + SaoPaulo-> ensinoSuperior);
    if(SaoPaulo-> setorMaisImport == 3 && SaoPaulo-> partidoMaisInf == 0)
        SaoPaulo-> nivelCentro = (SaoPaulo-> nivelCentro + 2)/4;
    else if(SaoPaulo-> setorMaisImport != 3 && SaoPaulo-> partidoMaisInf == 0)
        SaoPaulo-> nivelCentro = (SaoPaulo-> nivelCentro + 1)/3;
    else
        SaoPaulo-> nivelCentro = SaoPaulo-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    SaoPaulo-> nivelEsquerda = SaoPaulo-> classesED;
    if(SaoPaulo-> partidoMaisInf == -1 || SaoPaulo-> partidoMaisInf == -2 || SaoPaulo-> partidoMaisInf == -3)
        SaoPaulo-> nivelEsquerda = (SaoPaulo-> nivelEsquerda + 1)/2;
    
        //Carater Social
    SaoPaulo-> nivelDireitaSocial = (SaoPaulo-> classeA + SaoPaulo-> classeB + SaoPaulo-> classeC + SaoPaulo-> classesED + 
                                            SaoPaulo-> religiosidade + SaoPaulo-> iGini + SaoPaulo-> parcelaIdosos);
    if(SaoPaulo-> setorMaisImport == 1)
        SaoPaulo-> nivelDireitaSocial = (SaoPaulo-> nivelDireitaSocial + 1)/8;
    else
        SaoPaulo-> nivelDireitaSocial = SaoPaulo-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    SaoPaulo-> nivelEsquerdaSocial = (SaoPaulo-> ensinoSuperior + SaoPaulo-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
    RioDeJaneiro-> nivelAutoritario = (RioDeJaneiro-> classeA + RioDeJaneiro-> classeC + RioDeJaneiro-> classesED + RioDeJaneiro-> religiosidade +
                                        RioDeJaneiro-> analfabetismo + RioDeJaneiro-> iGini + RioDeJaneiro-> parcelaIdosos);
    if(RioDeJaneiro-> setorMaisImport == 1)
        RioDeJaneiro-> nivelAutoritario = (RioDeJaneiro-> nivelAutoritario + 1)/8;
    else
        RioDeJaneiro-> nivelAutoritario = RioDeJaneiro-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioDeJaneiro-> nivelLibertario = (RioDeJaneiro-> classeB + RioDeJaneiro-> ensinoSuperior);
    if(RioDeJaneiro-> setorMaisImport == 2 || RioDeJaneiro-> setorMaisImport == 3)
        RioDeJaneiro-> nivelLibertario = (RioDeJaneiro-> nivelLibertario + 1)/3;
    else
        RioDeJaneiro-> nivelLibertario = RioDeJaneiro-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioDeJaneiro-> nivelDireita = (RioDeJaneiro-> classeA + RioDeJaneiro-> classeB + RioDeJaneiro-> religiosidade +  
                                    RioDeJaneiro-> analfabetismo + RioDeJaneiro-> iGini + RioDeJaneiro-> parcelaIdosos);
    if((RioDeJaneiro-> setorMaisImport == 1 || RioDeJaneiro-> setorMaisImport == 2) && (RioDeJaneiro-> partidoMaisInf == 1 || RioDeJaneiro-> partidoMaisInf == 2 || RioDeJaneiro-> partidoMaisInf == 3))
         RioDeJaneiro-> nivelDireita = (RioDeJaneiro-> nivelDireita + 2)/8;
    else if((RioDeJaneiro-> setorMaisImport != 1 || RioDeJaneiro-> setorMaisImport == 2) && (RioDeJaneiro-> partidoMaisInf == 1 || RioDeJaneiro-> partidoMaisInf == 2 || RioDeJaneiro-> partidoMaisInf == 3))
         RioDeJaneiro-> nivelDireita = (RioDeJaneiro-> nivelDireita + 1)/7;
    else
        RioDeJaneiro-> nivelDireita = RioDeJaneiro-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioDeJaneiro-> nivelCentro = (RioDeJaneiro-> classeC + RioDeJaneiro-> ensinoSuperior);
    if(RioDeJaneiro-> setorMaisImport == 3 && RioDeJaneiro-> partidoMaisInf == 0)
        RioDeJaneiro-> nivelCentro = (RioDeJaneiro-> nivelCentro + 2)/4;
    else if(RioDeJaneiro-> setorMaisImport != 3 && RioDeJaneiro-> partidoMaisInf == 0)
        RioDeJaneiro-> nivelCentro = (RioDeJaneiro-> nivelCentro + 1)/3;
    else
        RioDeJaneiro-> nivelCentro = RioDeJaneiro-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioDeJaneiro-> nivelEsquerda = RioDeJaneiro-> classesED;
    if(RioDeJaneiro-> partidoMaisInf == -1 || RioDeJaneiro-> partidoMaisInf == -2 || RioDeJaneiro-> partidoMaisInf == -3)
        RioDeJaneiro-> nivelEsquerda = (RioDeJaneiro-> nivelEsquerda + 1)/2;
    
        //Carater Social
    RioDeJaneiro-> nivelDireitaSocial = (RioDeJaneiro-> classeA + RioDeJaneiro-> classeB + RioDeJaneiro-> classeC + RioDeJaneiro-> classesED + 
                                            RioDeJaneiro-> religiosidade + RioDeJaneiro-> iGini + RioDeJaneiro-> parcelaIdosos);
    if(RioDeJaneiro-> setorMaisImport == 1)
        RioDeJaneiro-> nivelDireitaSocial = (RioDeJaneiro-> nivelDireitaSocial + 1)/8;
    else
        RioDeJaneiro-> nivelDireitaSocial = RioDeJaneiro-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioDeJaneiro-> nivelEsquerdaSocial = (RioDeJaneiro-> ensinoSuperior + RioDeJaneiro-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
    SantaCatarina-> nivelAutoritario = (SantaCatarina-> classeA + SantaCatarina-> classeC + SantaCatarina-> classesED + SantaCatarina-> religiosidade +
                                        SantaCatarina-> analfabetismo + SantaCatarina-> iGini + SantaCatarina-> parcelaIdosos);
    if(SantaCatarina-> setorMaisImport == 1)
        SantaCatarina-> nivelAutoritario = (SantaCatarina-> nivelAutoritario + 1)/8;
    else
        SantaCatarina-> nivelAutoritario = SantaCatarina-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    SantaCatarina-> nivelLibertario = (SantaCatarina-> classeB + SantaCatarina-> ensinoSuperior);
    if(SantaCatarina-> setorMaisImport == 2 || SantaCatarina-> setorMaisImport == 3)
        SantaCatarina-> nivelLibertario = (SantaCatarina-> nivelLibertario + 1)/3;
    else
        SantaCatarina-> nivelLibertario = SantaCatarina-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    SantaCatarina-> nivelDireita = (SantaCatarina-> classeA + SantaCatarina-> classeB + SantaCatarina-> religiosidade +  
                                    SantaCatarina-> analfabetismo + SantaCatarina-> iGini + SantaCatarina-> parcelaIdosos);
    if((SantaCatarina-> setorMaisImport == 1 || SantaCatarina-> setorMaisImport == 2) && (SantaCatarina-> partidoMaisInf == 1 || SantaCatarina-> partidoMaisInf == 2 || SantaCatarina-> partidoMaisInf == 3))
         SantaCatarina-> nivelDireita = (SantaCatarina-> nivelDireita + 2)/8;
    else if((SantaCatarina-> setorMaisImport != 1 || SantaCatarina-> setorMaisImport == 2) && (SantaCatarina-> partidoMaisInf == 1 || SantaCatarina-> partidoMaisInf == 2 || SantaCatarina-> partidoMaisInf == 3))
         SantaCatarina-> nivelDireita = (SantaCatarina-> nivelDireita + 1)/7;
    else
        SantaCatarina-> nivelDireita = SantaCatarina-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    SantaCatarina-> nivelCentro = (SantaCatarina-> classeC + SantaCatarina-> ensinoSuperior);
    if(SantaCatarina-> setorMaisImport == 3 && SantaCatarina-> partidoMaisInf == 0)
        SantaCatarina-> nivelCentro = (SantaCatarina-> nivelCentro + 2)/4;
    else if(SantaCatarina-> setorMaisImport != 3 && SantaCatarina-> partidoMaisInf == 0)
        SantaCatarina-> nivelCentro = (SantaCatarina-> nivelCentro + 1)/3;
    else
        SantaCatarina-> nivelCentro = SantaCatarina-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    SantaCatarina-> nivelEsquerda = SantaCatarina-> classesED;
    if(SantaCatarina-> partidoMaisInf == -1 || SantaCatarina-> partidoMaisInf == -2 || SantaCatarina-> partidoMaisInf == -3)
        SantaCatarina-> nivelEsquerda = (SantaCatarina-> nivelEsquerda + 1)/2;
    
        //Carater Social
    SantaCatarina-> nivelDireitaSocial = (SantaCatarina-> classeA + SantaCatarina-> classeB + SantaCatarina-> classeC + SantaCatarina-> classesED + 
                                            SantaCatarina-> religiosidade + SantaCatarina-> iGini + SantaCatarina-> parcelaIdosos);
    if(SantaCatarina-> setorMaisImport == 1)
        SantaCatarina-> nivelDireitaSocial = (SantaCatarina-> nivelDireitaSocial + 1)/8;
    else
        SantaCatarina-> nivelDireitaSocial = SantaCatarina-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    SantaCatarina-> nivelEsquerdaSocial = (SantaCatarina-> ensinoSuperior + SantaCatarina-> analfabetismo)/2;




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
    
    //Caracteristicas
        //Carater politico e economico
    RioGrandeDoSul-> nivelAutoritario = (RioGrandeDoSul-> classeA + RioGrandeDoSul-> classeC + RioGrandeDoSul-> classesED + RioGrandeDoSul-> religiosidade +
                                        RioGrandeDoSul-> analfabetismo + RioGrandeDoSul-> iGini + RioGrandeDoSul-> parcelaIdosos);
    if(RioGrandeDoSul-> setorMaisImport == 1)
        RioGrandeDoSul-> nivelAutoritario = (RioGrandeDoSul-> nivelAutoritario + 1)/8;
    else
        RioGrandeDoSul-> nivelAutoritario = RioGrandeDoSul-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoSul-> nivelLibertario = (RioGrandeDoSul-> classeB + RioGrandeDoSul-> ensinoSuperior);
    if(RioGrandeDoSul-> setorMaisImport == 2 || RioGrandeDoSul-> setorMaisImport == 3)
        RioGrandeDoSul-> nivelLibertario = (RioGrandeDoSul-> nivelLibertario + 1)/3;
    else
        RioGrandeDoSul-> nivelLibertario = RioGrandeDoSul-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoSul-> nivelDireita = (RioGrandeDoSul-> classeA + RioGrandeDoSul-> classeB + RioGrandeDoSul-> religiosidade +  
                                    RioGrandeDoSul-> analfabetismo + RioGrandeDoSul-> iGini + RioGrandeDoSul-> parcelaIdosos);
    if((RioGrandeDoSul-> setorMaisImport == 1 || RioGrandeDoSul-> setorMaisImport == 2) && (RioGrandeDoSul-> partidoMaisInf == 1 || RioGrandeDoSul-> partidoMaisInf == 2 || RioGrandeDoSul-> partidoMaisInf == 3))
         RioGrandeDoSul-> nivelDireita = (RioGrandeDoSul-> nivelDireita + 2)/8;
    else if((RioGrandeDoSul-> setorMaisImport != 1 || RioGrandeDoSul-> setorMaisImport == 2) && (RioGrandeDoSul-> partidoMaisInf == 1 || RioGrandeDoSul-> partidoMaisInf == 2 || RioGrandeDoSul-> partidoMaisInf == 3))
         RioGrandeDoSul-> nivelDireita = (RioGrandeDoSul-> nivelDireita + 1)/7;
    else
        RioGrandeDoSul-> nivelDireita = RioGrandeDoSul-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoSul-> nivelCentro = (RioGrandeDoSul-> classeC + RioGrandeDoSul-> ensinoSuperior);
    if(RioGrandeDoSul-> setorMaisImport == 3 && RioGrandeDoSul-> partidoMaisInf == 0)
        RioGrandeDoSul-> nivelCentro = (RioGrandeDoSul-> nivelCentro + 2)/4;
    else if(RioGrandeDoSul-> setorMaisImport != 3 && RioGrandeDoSul-> partidoMaisInf == 0)
        RioGrandeDoSul-> nivelCentro = (RioGrandeDoSul-> nivelCentro + 1)/3;
    else
        RioGrandeDoSul-> nivelCentro = RioGrandeDoSul-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoSul-> nivelEsquerda = RioGrandeDoSul-> classesED;
    if(RioGrandeDoSul-> partidoMaisInf == -1 || RioGrandeDoSul-> partidoMaisInf == -2 || RioGrandeDoSul-> partidoMaisInf == -3)
        RioGrandeDoSul-> nivelEsquerda = (RioGrandeDoSul-> nivelEsquerda + 1)/2;
    
        //Carater Social
    RioGrandeDoSul-> nivelDireitaSocial = (RioGrandeDoSul-> classeA + RioGrandeDoSul-> classeB + RioGrandeDoSul-> classeC + RioGrandeDoSul-> classesED + 
                                            RioGrandeDoSul-> religiosidade + RioGrandeDoSul-> iGini + RioGrandeDoSul-> parcelaIdosos);
    if(RioGrandeDoSul-> setorMaisImport == 1)
        RioGrandeDoSul-> nivelDireitaSocial = (RioGrandeDoSul-> nivelDireitaSocial + 1)/8;
    else
        RioGrandeDoSul-> nivelDireitaSocial = RioGrandeDoSul-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoSul-> nivelEsquerdaSocial = (RioGrandeDoSul-> ensinoSuperior + RioGrandeDoSul-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
    Parana-> nivelAutoritario = (Parana-> classeA + Parana-> classeC + Parana-> classesED + Parana-> religiosidade +
                                        Parana-> analfabetismo + Parana-> iGini + Parana-> parcelaIdosos);
    if(Parana-> setorMaisImport == 1)
        Parana-> nivelAutoritario = (Parana-> nivelAutoritario + 1)/8;
    else
        Parana-> nivelAutoritario = Parana-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Parana-> nivelLibertario = (Parana-> classeB + Parana-> ensinoSuperior);
    if(Parana-> setorMaisImport == 2 || Parana-> setorMaisImport == 3)
        Parana-> nivelLibertario = (Parana-> nivelLibertario + 1)/3;
    else
        Parana-> nivelLibertario = Parana-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Parana-> nivelDireita = (Parana-> classeA + Parana-> classeB + Parana-> religiosidade +  
                                    Parana-> analfabetismo + Parana-> iGini + Parana-> parcelaIdosos);
    if((Parana-> setorMaisImport == 1 || Parana-> setorMaisImport == 2) && (Parana-> partidoMaisInf == 1 || Parana-> partidoMaisInf == 2 || Parana-> partidoMaisInf == 3))
         Parana-> nivelDireita = (Parana-> nivelDireita + 2)/8;
    else if((Parana-> setorMaisImport != 1 || Parana-> setorMaisImport == 2) && (Parana-> partidoMaisInf == 1 || Parana-> partidoMaisInf == 2 || Parana-> partidoMaisInf == 3))
         Parana-> nivelDireita = (Parana-> nivelDireita + 1)/7;
    else
        Parana-> nivelDireita = Parana-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Parana-> nivelCentro = (Parana-> classeC + Parana-> ensinoSuperior);
    if(Parana-> setorMaisImport == 3 && Parana-> partidoMaisInf == 0)
        Parana-> nivelCentro = (Parana-> nivelCentro + 2)/4;
    else if(Parana-> setorMaisImport != 3 && Parana-> partidoMaisInf == 0)
        Parana-> nivelCentro = (Parana-> nivelCentro + 1)/3;
    else
        Parana-> nivelCentro = Parana-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Parana-> nivelEsquerda = Parana-> classesED;
    if(Parana-> partidoMaisInf == -1 || Parana-> partidoMaisInf == -2 || Parana-> partidoMaisInf == -3)
        Parana-> nivelEsquerda = (Parana-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Parana-> nivelDireitaSocial = (Parana-> classeA + Parana-> classeB + Parana-> classeC + Parana-> classesED + 
                                            Parana-> religiosidade + Parana-> iGini + Parana-> parcelaIdosos);
    if(Parana-> setorMaisImport == 1)
        Parana-> nivelDireitaSocial = (Parana-> nivelDireitaSocial + 1)/8;
    else
        Parana-> nivelDireitaSocial = Parana-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Parana-> nivelEsquerdaSocial = (Parana-> ensinoSuperior + Parana-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
    MatoGrosso-> nivelAutoritario = (MatoGrosso-> classeA + MatoGrosso-> classeC + MatoGrosso-> classesED + MatoGrosso-> religiosidade +
                                        MatoGrosso-> analfabetismo + MatoGrosso-> iGini + MatoGrosso-> parcelaIdosos);
    if(MatoGrosso-> setorMaisImport == 1)
        MatoGrosso-> nivelAutoritario = (MatoGrosso-> nivelAutoritario + 1)/8;
    else
        MatoGrosso-> nivelAutoritario = MatoGrosso-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrosso-> nivelLibertario = (MatoGrosso-> classeB + MatoGrosso-> ensinoSuperior);
    if(MatoGrosso-> setorMaisImport == 2 || MatoGrosso-> setorMaisImport == 3)
        MatoGrosso-> nivelLibertario = (MatoGrosso-> nivelLibertario + 1)/3;
    else
        MatoGrosso-> nivelLibertario = MatoGrosso-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrosso-> nivelDireita = (MatoGrosso-> classeA + MatoGrosso-> classeB + MatoGrosso-> religiosidade +  
                                    MatoGrosso-> analfabetismo + MatoGrosso-> iGini + MatoGrosso-> parcelaIdosos);
    if((MatoGrosso-> setorMaisImport == 1 || MatoGrosso-> setorMaisImport == 2) && (MatoGrosso-> partidoMaisInf == 1 || MatoGrosso-> partidoMaisInf == 2 || MatoGrosso-> partidoMaisInf == 3))
         MatoGrosso-> nivelDireita = (MatoGrosso-> nivelDireita + 2)/8;
    else if((MatoGrosso-> setorMaisImport != 1 || MatoGrosso-> setorMaisImport == 2) && (MatoGrosso-> partidoMaisInf == 1 || MatoGrosso-> partidoMaisInf == 2 || MatoGrosso-> partidoMaisInf == 3))
         MatoGrosso-> nivelDireita = (MatoGrosso-> nivelDireita + 1)/7;
    else
        MatoGrosso-> nivelDireita = MatoGrosso-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrosso-> nivelCentro = (MatoGrosso-> classeC + MatoGrosso-> ensinoSuperior);
    if(MatoGrosso-> setorMaisImport == 3 && MatoGrosso-> partidoMaisInf == 0)
        MatoGrosso-> nivelCentro = (MatoGrosso-> nivelCentro + 2)/4;
    else if(MatoGrosso-> setorMaisImport != 3 && MatoGrosso-> partidoMaisInf == 0)
        MatoGrosso-> nivelCentro = (MatoGrosso-> nivelCentro + 1)/3;
    else
        MatoGrosso-> nivelCentro = MatoGrosso-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrosso-> nivelEsquerda = MatoGrosso-> classesED;
    if(MatoGrosso-> partidoMaisInf == -1 || MatoGrosso-> partidoMaisInf == -2 || MatoGrosso-> partidoMaisInf == -3)
        MatoGrosso-> nivelEsquerda = (MatoGrosso-> nivelEsquerda + 1)/2;
    
        //Carater Social
    MatoGrosso-> nivelDireitaSocial = (MatoGrosso-> classeA + MatoGrosso-> classeB + MatoGrosso-> classeC + MatoGrosso-> classesED + 
                                            MatoGrosso-> religiosidade + MatoGrosso-> iGini + MatoGrosso-> parcelaIdosos);
    if(MatoGrosso-> setorMaisImport == 1)
        MatoGrosso-> nivelDireitaSocial = (MatoGrosso-> nivelDireitaSocial + 1)/8;
    else
        MatoGrosso-> nivelDireitaSocial = MatoGrosso-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrosso-> nivelEsquerdaSocial = (MatoGrosso-> ensinoSuperior + MatoGrosso-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
    MatoGrossoDoSul-> nivelAutoritario = (MatoGrossoDoSul-> classeA + MatoGrossoDoSul-> classeC + MatoGrossoDoSul-> classesED + MatoGrossoDoSul-> religiosidade +
                                        MatoGrossoDoSul-> analfabetismo + MatoGrossoDoSul-> iGini + MatoGrossoDoSul-> parcelaIdosos);
    if(MatoGrossoDoSul-> setorMaisImport == 1)
        MatoGrossoDoSul-> nivelAutoritario = (MatoGrossoDoSul-> nivelAutoritario + 1)/8;
    else
        MatoGrossoDoSul-> nivelAutoritario = MatoGrossoDoSul-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrossoDoSul-> nivelLibertario = (MatoGrossoDoSul-> classeB + MatoGrossoDoSul-> ensinoSuperior);
    if(MatoGrossoDoSul-> setorMaisImport == 2 || MatoGrossoDoSul-> setorMaisImport == 3)
        MatoGrossoDoSul-> nivelLibertario = (MatoGrossoDoSul-> nivelLibertario + 1)/3;
    else
        MatoGrossoDoSul-> nivelLibertario = MatoGrossoDoSul-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrossoDoSul-> nivelDireita = (MatoGrossoDoSul-> classeA + MatoGrossoDoSul-> classeB + MatoGrossoDoSul-> religiosidade +  
                                    MatoGrossoDoSul-> analfabetismo + MatoGrossoDoSul-> iGini + MatoGrossoDoSul-> parcelaIdosos);
    if((MatoGrossoDoSul-> setorMaisImport == 1 || MatoGrossoDoSul-> setorMaisImport == 2) && (MatoGrossoDoSul-> partidoMaisInf == 1 || MatoGrossoDoSul-> partidoMaisInf == 2 || MatoGrossoDoSul-> partidoMaisInf == 3))
         MatoGrossoDoSul-> nivelDireita = (MatoGrossoDoSul-> nivelDireita + 2)/8;
    else if((MatoGrossoDoSul-> setorMaisImport != 1 || MatoGrossoDoSul-> setorMaisImport == 2) && (MatoGrossoDoSul-> partidoMaisInf == 1 || MatoGrossoDoSul-> partidoMaisInf == 2 || MatoGrossoDoSul-> partidoMaisInf == 3))
         MatoGrossoDoSul-> nivelDireita = (MatoGrossoDoSul-> nivelDireita + 1)/7;
    else
        MatoGrossoDoSul-> nivelDireita = MatoGrossoDoSul-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrossoDoSul-> nivelCentro = (MatoGrossoDoSul-> classeC + MatoGrossoDoSul-> ensinoSuperior);
    if(MatoGrossoDoSul-> setorMaisImport == 3 && MatoGrossoDoSul-> partidoMaisInf == 0)
        MatoGrossoDoSul-> nivelCentro = (MatoGrossoDoSul-> nivelCentro + 2)/4;
    else if(MatoGrossoDoSul-> setorMaisImport != 3 && MatoGrossoDoSul-> partidoMaisInf == 0)
        MatoGrossoDoSul-> nivelCentro = (MatoGrossoDoSul-> nivelCentro + 1)/3;
    else
        MatoGrossoDoSul-> nivelCentro = MatoGrossoDoSul-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrossoDoSul-> nivelEsquerda = MatoGrossoDoSul-> classesED;
    if(MatoGrossoDoSul-> partidoMaisInf == -1 || MatoGrossoDoSul-> partidoMaisInf == -2 || MatoGrossoDoSul-> partidoMaisInf == -3)
        MatoGrossoDoSul-> nivelEsquerda = (MatoGrossoDoSul-> nivelEsquerda + 1)/2;
    
        //Carater Social
    MatoGrossoDoSul-> nivelDireitaSocial = (MatoGrossoDoSul-> classeA + MatoGrossoDoSul-> classeB + MatoGrossoDoSul-> classeC + MatoGrossoDoSul-> classesED + 
                                            MatoGrossoDoSul-> religiosidade + MatoGrossoDoSul-> iGini + MatoGrossoDoSul-> parcelaIdosos);
    if(MatoGrossoDoSul-> setorMaisImport == 1)
        MatoGrossoDoSul-> nivelDireitaSocial = (MatoGrossoDoSul-> nivelDireitaSocial + 1)/8;
    else
        MatoGrossoDoSul-> nivelDireitaSocial = MatoGrossoDoSul-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    MatoGrossoDoSul-> nivelEsquerdaSocial = (MatoGrossoDoSul-> ensinoSuperior + MatoGrossoDoSul-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
    EspiritoSanto-> nivelAutoritario = (EspiritoSanto-> classeA + EspiritoSanto-> classeC + EspiritoSanto-> classesED + EspiritoSanto-> religiosidade +
                                        EspiritoSanto-> analfabetismo + EspiritoSanto-> iGini + EspiritoSanto-> parcelaIdosos);
    if(EspiritoSanto-> setorMaisImport == 1)
        EspiritoSanto-> nivelAutoritario = (EspiritoSanto-> nivelAutoritario + 1)/8;
    else
        EspiritoSanto-> nivelAutoritario = EspiritoSanto-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    EspiritoSanto-> nivelLibertario = (EspiritoSanto-> classeB + EspiritoSanto-> ensinoSuperior);
    if(EspiritoSanto-> setorMaisImport == 2 || EspiritoSanto-> setorMaisImport == 3)
        EspiritoSanto-> nivelLibertario = (EspiritoSanto-> nivelLibertario + 1)/3;
    else
        EspiritoSanto-> nivelLibertario = EspiritoSanto-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    EspiritoSanto-> nivelDireita = (EspiritoSanto-> classeA + EspiritoSanto-> classeB + EspiritoSanto-> religiosidade +  
                                    EspiritoSanto-> analfabetismo + EspiritoSanto-> iGini + EspiritoSanto-> parcelaIdosos);
    if((EspiritoSanto-> setorMaisImport == 1 || EspiritoSanto-> setorMaisImport == 2) && (EspiritoSanto-> partidoMaisInf == 1 || EspiritoSanto-> partidoMaisInf == 2 || EspiritoSanto-> partidoMaisInf == 3))
         EspiritoSanto-> nivelDireita = (EspiritoSanto-> nivelDireita + 2)/8;
    else if((EspiritoSanto-> setorMaisImport != 1 || EspiritoSanto-> setorMaisImport == 2) && (EspiritoSanto-> partidoMaisInf == 1 || EspiritoSanto-> partidoMaisInf == 2 || EspiritoSanto-> partidoMaisInf == 3))
         EspiritoSanto-> nivelDireita = (EspiritoSanto-> nivelDireita + 1)/7;
    else
        EspiritoSanto-> nivelDireita = EspiritoSanto-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    EspiritoSanto-> nivelCentro = (EspiritoSanto-> classeC + EspiritoSanto-> ensinoSuperior);
    if(EspiritoSanto-> setorMaisImport == 3 && EspiritoSanto-> partidoMaisInf == 0)
        EspiritoSanto-> nivelCentro = (EspiritoSanto-> nivelCentro + 2)/4;
    else if(EspiritoSanto-> setorMaisImport != 3 && EspiritoSanto-> partidoMaisInf == 0)
        EspiritoSanto-> nivelCentro = (EspiritoSanto-> nivelCentro + 1)/3;
    else
        EspiritoSanto-> nivelCentro = EspiritoSanto-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    EspiritoSanto-> nivelEsquerda = EspiritoSanto-> classesED;
    if(EspiritoSanto-> partidoMaisInf == -1 || EspiritoSanto-> partidoMaisInf == -2 || EspiritoSanto-> partidoMaisInf == -3)
        EspiritoSanto-> nivelEsquerda = (EspiritoSanto-> nivelEsquerda + 1)/2;
    
        //Carater Social
    EspiritoSanto-> nivelDireitaSocial = (EspiritoSanto-> classeA + EspiritoSanto-> classeB + EspiritoSanto-> classeC + EspiritoSanto-> classesED + 
                                            EspiritoSanto-> religiosidade + EspiritoSanto-> iGini + EspiritoSanto-> parcelaIdosos);
    if(EspiritoSanto-> setorMaisImport == 1)
        EspiritoSanto-> nivelDireitaSocial = (EspiritoSanto-> nivelDireitaSocial + 1)/8;
    else
        EspiritoSanto-> nivelDireitaSocial = EspiritoSanto-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    EspiritoSanto-> nivelEsquerdaSocial = (EspiritoSanto-> ensinoSuperior + EspiritoSanto-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
    Goias-> nivelAutoritario = (Goias-> classeA + Goias-> classeC + Goias-> classesED + Goias-> religiosidade +
                                        Goias-> analfabetismo + Goias-> iGini + Goias-> parcelaIdosos);
    if(Goias-> setorMaisImport == 1)
        Goias-> nivelAutoritario = (Goias-> nivelAutoritario + 1)/8;
    else
        Goias-> nivelAutoritario = Goias-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Goias-> nivelLibertario = (Goias-> classeB + Goias-> ensinoSuperior);
    if(Goias-> setorMaisImport == 2 || Goias-> setorMaisImport == 3)
        Goias-> nivelLibertario = (Goias-> nivelLibertario + 1)/3;
    else
        Goias-> nivelLibertario = Goias-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Goias-> nivelDireita = (Goias-> classeA + Goias-> classeB + Goias-> religiosidade +  
                                    Goias-> analfabetismo + Goias-> iGini + Goias-> parcelaIdosos);
    if((Goias-> setorMaisImport == 1 || Goias-> setorMaisImport == 2) && (Goias-> partidoMaisInf == 1 || Goias-> partidoMaisInf == 2 || Goias-> partidoMaisInf == 3))
         Goias-> nivelDireita = (Goias-> nivelDireita + 2)/8;
    else if((Goias-> setorMaisImport != 1 || Goias-> setorMaisImport == 2) && (Goias-> partidoMaisInf == 1 || Goias-> partidoMaisInf == 2 || Goias-> partidoMaisInf == 3))
         Goias-> nivelDireita = (Goias-> nivelDireita + 1)/7;
    else
        Goias-> nivelDireita = Goias-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Goias-> nivelCentro = (Goias-> classeC + Goias-> ensinoSuperior);
    if(Goias-> setorMaisImport == 3 && Goias-> partidoMaisInf == 0)
        Goias-> nivelCentro = (Goias-> nivelCentro + 2)/4;
    else if(Goias-> setorMaisImport != 3 && Goias-> partidoMaisInf == 0)
        Goias-> nivelCentro = (Goias-> nivelCentro + 1)/3;
    else
        Goias-> nivelCentro = Goias-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Goias-> nivelEsquerda = Goias-> classesED;
    if(Goias-> partidoMaisInf == -1 || Goias-> partidoMaisInf == -2 || Goias-> partidoMaisInf == -3)
        Goias-> nivelEsquerda = (Goias-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Goias-> nivelDireitaSocial = (Goias-> classeA + Goias-> classeB + Goias-> classeC + Goias-> classesED + 
                                            Goias-> religiosidade + Goias-> iGini + Goias-> parcelaIdosos);
    if(Goias-> setorMaisImport == 1)
        Goias-> nivelDireitaSocial = (Goias-> nivelDireitaSocial + 1)/8;
    else
        Goias-> nivelDireitaSocial = Goias-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Goias-> nivelEsquerdaSocial = (Goias-> ensinoSuperior + Goias-> analfabetismo)/2;




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

     //Caracteristicas
        //Carater politico e economico
    MinasGerais-> nivelAutoritario = (MinasGerais-> classeA + MinasGerais-> classeC + MinasGerais-> classesED + MinasGerais-> religiosidade +
                                        MinasGerais-> analfabetismo + MinasGerais-> iGini + MinasGerais-> parcelaIdosos);
    if(MinasGerais-> setorMaisImport == 1)
        MinasGerais-> nivelAutoritario = (MinasGerais-> nivelAutoritario + 1)/8;
    else
        MinasGerais-> nivelAutoritario = MinasGerais-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    MinasGerais-> nivelLibertario = (MinasGerais-> classeB + MinasGerais-> ensinoSuperior);
    if(MinasGerais-> setorMaisImport == 2 || MinasGerais-> setorMaisImport == 3)
        MinasGerais-> nivelLibertario = (MinasGerais-> nivelLibertario + 1)/3;
    else
        MinasGerais-> nivelLibertario = MinasGerais-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    MinasGerais-> nivelDireita = (MinasGerais-> classeA + MinasGerais-> classeB + MinasGerais-> religiosidade +  
                                    MinasGerais-> analfabetismo + MinasGerais-> iGini + MinasGerais-> parcelaIdosos);
    if((MinasGerais-> setorMaisImport == 1 || MinasGerais-> setorMaisImport == 2) && (MinasGerais-> partidoMaisInf == 1 || MinasGerais-> partidoMaisInf == 2 || MinasGerais-> partidoMaisInf == 3))
         MinasGerais-> nivelDireita = (MinasGerais-> nivelDireita + 2)/8;
    else if((MinasGerais-> setorMaisImport != 1 || MinasGerais-> setorMaisImport == 2) && (MinasGerais-> partidoMaisInf == 1 || MinasGerais-> partidoMaisInf == 2 || MinasGerais-> partidoMaisInf == 3))
         MinasGerais-> nivelDireita = (MinasGerais-> nivelDireita + 1)/7;
    else
        MinasGerais-> nivelDireita = MinasGerais-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    MinasGerais-> nivelCentro = (MinasGerais-> classeC + MinasGerais-> ensinoSuperior);
    if(MinasGerais-> setorMaisImport == 3 && MinasGerais-> partidoMaisInf == 0)
        MinasGerais-> nivelCentro = (MinasGerais-> nivelCentro + 2)/4;
    else if(MinasGerais-> setorMaisImport != 3 && MinasGerais-> partidoMaisInf == 0)
        MinasGerais-> nivelCentro = (MinasGerais-> nivelCentro + 1)/3;
    else
        MinasGerais-> nivelCentro = MinasGerais-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    MinasGerais-> nivelEsquerda = MinasGerais-> classesED;
    if(MinasGerais-> partidoMaisInf == -1 || MinasGerais-> partidoMaisInf == -2 || MinasGerais-> partidoMaisInf == -3)
        MinasGerais-> nivelEsquerda = (MinasGerais-> nivelEsquerda + 1)/2;
    
        //Carater Social
    MinasGerais-> nivelDireitaSocial = (MinasGerais-> classeA + MinasGerais-> classeB + MinasGerais-> classeC + MinasGerais-> classesED + 
                                            MinasGerais-> religiosidade + MinasGerais-> iGini + MinasGerais-> parcelaIdosos);
    if(MinasGerais-> setorMaisImport == 1)
        MinasGerais-> nivelDireitaSocial = (MinasGerais-> nivelDireitaSocial + 1)/8;
    else
        MinasGerais-> nivelDireitaSocial = MinasGerais-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    MinasGerais-> nivelEsquerdaSocial = (MinasGerais-> ensinoSuperior + MinasGerais-> analfabetismo)/2;




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
    
    //Caracteristicas
        //Carater politico e economico
    Amazonas-> nivelAutoritario = (Amazonas-> classeA + Amazonas-> classeC + Amazonas-> classesED + Amazonas-> religiosidade +
                                        Amazonas-> analfabetismo + Amazonas-> iGini + Amazonas-> parcelaIdosos);
    if(Amazonas-> setorMaisImport == 1)
        Amazonas-> nivelAutoritario = (Amazonas-> nivelAutoritario + 1)/8;
    else
        Amazonas-> nivelAutoritario = Amazonas-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amazonas-> nivelLibertario = (Amazonas-> classeB + Amazonas-> ensinoSuperior);
    if(Amazonas-> setorMaisImport == 2 || Amazonas-> setorMaisImport == 3)
        Amazonas-> nivelLibertario = (Amazonas-> nivelLibertario + 1)/3;
    else
        Amazonas-> nivelLibertario = Amazonas-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amazonas-> nivelDireita = (Amazonas-> classeA + Amazonas-> classeB + Amazonas-> religiosidade +  
                                    Amazonas-> analfabetismo + Amazonas-> iGini + Amazonas-> parcelaIdosos);
    if((Amazonas-> setorMaisImport == 1 || Amazonas-> setorMaisImport == 2) && (Amazonas-> partidoMaisInf == 1 || Amazonas-> partidoMaisInf == 2 || Amazonas-> partidoMaisInf == 3))
         Amazonas-> nivelDireita = (Amazonas-> nivelDireita + 2)/8;
    else if((Amazonas-> setorMaisImport != 1 || Amazonas-> setorMaisImport == 2) && (Amazonas-> partidoMaisInf == 1 || Amazonas-> partidoMaisInf == 2 || Amazonas-> partidoMaisInf == 3))
         Amazonas-> nivelDireita = (Amazonas-> nivelDireita + 1)/7;
    else
        Amazonas-> nivelDireita = Amazonas-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amazonas-> nivelCentro = (Amazonas-> classeC + Amazonas-> ensinoSuperior);
    if(Amazonas-> setorMaisImport == 3 && Amazonas-> partidoMaisInf == 0)
        Amazonas-> nivelCentro = (Amazonas-> nivelCentro + 2)/4;
    else if(Amazonas-> setorMaisImport != 3 && Amazonas-> partidoMaisInf == 0)
        Amazonas-> nivelCentro = (Amazonas-> nivelCentro + 1)/3;
    else
        Amazonas-> nivelCentro = Amazonas-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amazonas-> nivelEsquerda = Amazonas-> classesED;
    if(Amazonas-> partidoMaisInf == -1 || Amazonas-> partidoMaisInf == -2 || Amazonas-> partidoMaisInf == -3)
        Amazonas-> nivelEsquerda = (Amazonas-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Amazonas-> nivelDireitaSocial = (Amazonas-> classeA + Amazonas-> classeB + Amazonas-> classeC + Amazonas-> classesED + 
                                            Amazonas-> religiosidade + Amazonas-> iGini + Amazonas-> parcelaIdosos);
    if(Amazonas-> setorMaisImport == 1)
        Amazonas-> nivelDireitaSocial = (Amazonas-> nivelDireitaSocial + 1)/8;
    else
        Amazonas-> nivelDireitaSocial = Amazonas-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amazonas-> nivelEsquerdaSocial = (Amazonas-> ensinoSuperior + Amazonas-> analfabetismo)/2;




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

     //Caracteristicas
        //Carater politico e economico
    Rondonia-> nivelAutoritario = (Rondonia-> classeA + Rondonia-> classeC + Rondonia-> classesED + Rondonia-> religiosidade +
                                        Rondonia-> analfabetismo + Rondonia-> iGini + Rondonia-> parcelaIdosos);
    if(Rondonia-> setorMaisImport == 1)
        Rondonia-> nivelAutoritario = (Rondonia-> nivelAutoritario + 1)/8;
    else
        Rondonia-> nivelAutoritario = Rondonia-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Rondonia-> nivelLibertario = (Rondonia-> classeB + Rondonia-> ensinoSuperior);
    if(Rondonia-> setorMaisImport == 2 || Rondonia-> setorMaisImport == 3)
        Rondonia-> nivelLibertario = (Rondonia-> nivelLibertario + 1)/3;
    else
        Rondonia-> nivelLibertario = Rondonia-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Rondonia-> nivelDireita = (Rondonia-> classeA + Rondonia-> classeB + Rondonia-> religiosidade +  
                                    Rondonia-> analfabetismo + Rondonia-> iGini + Rondonia-> parcelaIdosos);
    if((Rondonia-> setorMaisImport == 1 || Rondonia-> setorMaisImport == 2) && (Rondonia-> partidoMaisInf == 1 || Rondonia-> partidoMaisInf == 2 || Rondonia-> partidoMaisInf == 3))
         Rondonia-> nivelDireita = (Rondonia-> nivelDireita + 2)/8;
    else if((Rondonia-> setorMaisImport != 1 || Rondonia-> setorMaisImport == 2) && (Rondonia-> partidoMaisInf == 1 || Rondonia-> partidoMaisInf == 2 || Rondonia-> partidoMaisInf == 3))
         Rondonia-> nivelDireita = (Rondonia-> nivelDireita + 1)/7;
    else
        Rondonia-> nivelDireita = Rondonia-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Rondonia-> nivelCentro = (Rondonia-> classeC + Rondonia-> ensinoSuperior);
    if(Rondonia-> setorMaisImport == 3 && Rondonia-> partidoMaisInf == 0)
        Rondonia-> nivelCentro = (Rondonia-> nivelCentro + 2)/4;
    else if(Rondonia-> setorMaisImport != 3 && Rondonia-> partidoMaisInf == 0)
        Rondonia-> nivelCentro = (Rondonia-> nivelCentro + 1)/3;
    else
        Rondonia-> nivelCentro = Rondonia-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Rondonia-> nivelEsquerda = Rondonia-> classesED;
    if(Rondonia-> partidoMaisInf == -1 || Rondonia-> partidoMaisInf == -2 || Rondonia-> partidoMaisInf == -3)
        Rondonia-> nivelEsquerda = (Rondonia-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Rondonia-> nivelDireitaSocial = (Rondonia-> classeA + Rondonia-> classeB + Rondonia-> classeC + Rondonia-> classesED + 
                                            Rondonia-> religiosidade + Rondonia-> iGini + Rondonia-> parcelaIdosos);
    if(Rondonia-> setorMaisImport == 1)
        Rondonia-> nivelDireitaSocial = (Rondonia-> nivelDireitaSocial + 1)/8;
    else
        Rondonia-> nivelDireitaSocial = Rondonia-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Rondonia-> nivelEsquerdaSocial = (Rondonia-> ensinoSuperior + Rondonia-> analfabetismo)/2;




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

     //Caracteristicas
        //Carater politico e economico
    Roraima-> nivelAutoritario = (Roraima-> classeA + Roraima-> classeC + Roraima-> classesED + Roraima-> religiosidade +
                                        Roraima-> analfabetismo + Roraima-> iGini + Roraima-> parcelaIdosos);
    if(Roraima-> setorMaisImport == 1)
        Roraima-> nivelAutoritario = (Roraima-> nivelAutoritario + 1)/8;
    else
        Roraima-> nivelAutoritario = Roraima-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Roraima-> nivelLibertario = (Roraima-> classeB + Roraima-> ensinoSuperior);
    if(Roraima-> setorMaisImport == 2 || Roraima-> setorMaisImport == 3)
        Roraima-> nivelLibertario = (Roraima-> nivelLibertario + 1)/3;
    else
        Roraima-> nivelLibertario = Roraima-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Roraima-> nivelDireita = (Roraima-> classeA + Roraima-> classeB + Roraima-> religiosidade +  
                                    Roraima-> analfabetismo + Roraima-> iGini + Roraima-> parcelaIdosos);
    if((Roraima-> setorMaisImport == 1 || Roraima-> setorMaisImport == 2) && (Roraima-> partidoMaisInf == 1 || Roraima-> partidoMaisInf == 2 || Roraima-> partidoMaisInf == 3))
         Roraima-> nivelDireita = (Roraima-> nivelDireita + 2)/8;
    else if((Roraima-> setorMaisImport != 1 || Roraima-> setorMaisImport == 2) && (Roraima-> partidoMaisInf == 1 || Roraima-> partidoMaisInf == 2 || Roraima-> partidoMaisInf == 3))
         Roraima-> nivelDireita = (Roraima-> nivelDireita + 1)/7;
    else
        Roraima-> nivelDireita = Roraima-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Roraima-> nivelCentro = (Roraima-> classeC + Roraima-> ensinoSuperior);
    if(Roraima-> setorMaisImport == 3 && Roraima-> partidoMaisInf == 0)
        Roraima-> nivelCentro = (Roraima-> nivelCentro + 2)/4;
    else if(Roraima-> setorMaisImport != 3 && Roraima-> partidoMaisInf == 0)
        Roraima-> nivelCentro = (Roraima-> nivelCentro + 1)/3;
    else
        Roraima-> nivelCentro = Roraima-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Roraima-> nivelEsquerda = Roraima-> classesED;
    if(Roraima-> partidoMaisInf == -1 || Roraima-> partidoMaisInf == -2 || Roraima-> partidoMaisInf == -3)
        Roraima-> nivelEsquerda = (Roraima-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Roraima-> nivelDireitaSocial = (Roraima-> classeA + Roraima-> classeB + Roraima-> classeC + Roraima-> classesED + 
                                            Roraima-> religiosidade + Roraima-> iGini + Roraima-> parcelaIdosos);
    if(Roraima-> setorMaisImport == 1)
        Roraima-> nivelDireitaSocial = (Roraima-> nivelDireitaSocial + 1)/8;
    else
        Roraima-> nivelDireitaSocial = Roraima-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Roraima-> nivelEsquerdaSocial = (Roraima-> ensinoSuperior + Roraima-> analfabetismo)/2;



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

     //Caracteristicas
        //Carater politico e economico
    Tocantins-> nivelAutoritario = (Tocantins-> classeA + Tocantins-> classeC + Tocantins-> classesED + Tocantins-> religiosidade +
                                        Tocantins-> analfabetismo + Tocantins-> iGini + Tocantins-> parcelaIdosos);
    if(Tocantins-> setorMaisImport == 1)
        Tocantins-> nivelAutoritario = (Tocantins-> nivelAutoritario + 1)/8;
    else
        Tocantins-> nivelAutoritario = Tocantins-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Tocantins-> nivelLibertario = (Tocantins-> classeB + Tocantins-> ensinoSuperior);
    if(Tocantins-> setorMaisImport == 2 || Tocantins-> setorMaisImport == 3)
        Tocantins-> nivelLibertario = (Tocantins-> nivelLibertario + 1)/3;
    else
        Tocantins-> nivelLibertario = Tocantins-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Tocantins-> nivelDireita = (Tocantins-> classeA + Tocantins-> classeB + Tocantins-> religiosidade +  
                                    Tocantins-> analfabetismo + Tocantins-> iGini + Tocantins-> parcelaIdosos);
    if((Tocantins-> setorMaisImport == 1 || Tocantins-> setorMaisImport == 2) && (Tocantins-> partidoMaisInf == 1 || Tocantins-> partidoMaisInf == 2 || Tocantins-> partidoMaisInf == 3))
         Tocantins-> nivelDireita = (Tocantins-> nivelDireita + 2)/8;
    else if((Tocantins-> setorMaisImport != 1 || Tocantins-> setorMaisImport == 2) && (Tocantins-> partidoMaisInf == 1 || Tocantins-> partidoMaisInf == 2 || Tocantins-> partidoMaisInf == 3))
         Tocantins-> nivelDireita = (Tocantins-> nivelDireita + 1)/7;
    else
        Tocantins-> nivelDireita = Tocantins-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Tocantins-> nivelCentro = (Tocantins-> classeC + Tocantins-> ensinoSuperior);
    if(Tocantins-> setorMaisImport == 3 && Tocantins-> partidoMaisInf == 0)
        Tocantins-> nivelCentro = (Tocantins-> nivelCentro + 2)/4;
    else if(Tocantins-> setorMaisImport != 3 && Tocantins-> partidoMaisInf == 0)
        Tocantins-> nivelCentro = (Tocantins-> nivelCentro + 1)/3;
    else
        Tocantins-> nivelCentro = Tocantins-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Tocantins-> nivelEsquerda = Tocantins-> classesED;
    if(Tocantins-> partidoMaisInf == -1 || Tocantins-> partidoMaisInf == -2 || Tocantins-> partidoMaisInf == -3)
        Tocantins-> nivelEsquerda = (Tocantins-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Tocantins-> nivelDireitaSocial = (Tocantins-> classeA + Tocantins-> classeB + Tocantins-> classeC + Tocantins-> classesED + 
                                            Tocantins-> religiosidade + Tocantins-> iGini + Tocantins-> parcelaIdosos);
    if(Tocantins-> setorMaisImport == 1)
        Tocantins-> nivelDireitaSocial = (Tocantins-> nivelDireitaSocial + 1)/8;
    else
        Tocantins-> nivelDireitaSocial = Tocantins-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Tocantins-> nivelEsquerdaSocial = (Tocantins-> ensinoSuperior + Tocantins-> analfabetismo)/2;




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

     //Caracteristicas
        //Carater politico e economico
    Amapa-> nivelAutoritario = (Amapa-> classeA + Amapa-> classeC + Amapa-> classesED + Amapa-> religiosidade +
                                        Amapa-> analfabetismo + Amapa-> iGini + Amapa-> parcelaIdosos);
    if(Amapa-> setorMaisImport == 1)
        Amapa-> nivelAutoritario = (Amapa-> nivelAutoritario + 1)/8;
    else
        Amapa-> nivelAutoritario = Amapa-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amapa-> nivelLibertario = (Amapa-> classeB + Amapa-> ensinoSuperior);
    if(Amapa-> setorMaisImport == 2 || Amapa-> setorMaisImport == 3)
        Amapa-> nivelLibertario = (Amapa-> nivelLibertario + 1)/3;
    else
        Amapa-> nivelLibertario = Amapa-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amapa-> nivelDireita = (Amapa-> classeA + Amapa-> classeB + Amapa-> religiosidade +  
                                    Amapa-> analfabetismo + Amapa-> iGini + Amapa-> parcelaIdosos);
    if((Amapa-> setorMaisImport == 1 || Amapa-> setorMaisImport == 2) && (Amapa-> partidoMaisInf == 1 || Amapa-> partidoMaisInf == 2 || Amapa-> partidoMaisInf == 3))
         Amapa-> nivelDireita = (Amapa-> nivelDireita + 2)/8;
    else if((Amapa-> setorMaisImport != 1 || Amapa-> setorMaisImport == 2) && (Amapa-> partidoMaisInf == 1 || Amapa-> partidoMaisInf == 2 || Amapa-> partidoMaisInf == 3))
         Amapa-> nivelDireita = (Amapa-> nivelDireita + 1)/7;
    else
        Amapa-> nivelDireita = Amapa-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amapa-> nivelCentro = (Amapa-> classeC + Amapa-> ensinoSuperior);
    if(Amapa-> setorMaisImport == 3 && Amapa-> partidoMaisInf == 0)
        Amapa-> nivelCentro = (Amapa-> nivelCentro + 2)/4;
    else if(Amapa-> setorMaisImport != 3 && Amapa-> partidoMaisInf == 0)
        Amapa-> nivelCentro = (Amapa-> nivelCentro + 1)/3;
    else
        Amapa-> nivelCentro = Amapa-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amapa-> nivelEsquerda = Amapa-> classesED;
    if(Amapa-> partidoMaisInf == -1 || Amapa-> partidoMaisInf == -2 || Amapa-> partidoMaisInf == -3)
        Amapa-> nivelEsquerda = (Amapa-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Amapa-> nivelDireitaSocial = (Amapa-> classeA + Amapa-> classeB + Amapa-> classeC + Amapa-> classesED + 
                                            Amapa-> religiosidade + Amapa-> iGini + Amapa-> parcelaIdosos);
    if(Amapa-> setorMaisImport == 1)
        Amapa-> nivelDireitaSocial = (Amapa-> nivelDireitaSocial + 1)/8;
    else
        Amapa-> nivelDireitaSocial = Amapa-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Amapa-> nivelEsquerdaSocial = (Amapa-> ensinoSuperior + Amapa-> analfabetismo)/2;




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

     //Caracteristicas
        //Carater politico e economico
    Sergipe-> nivelAutoritario = (Sergipe-> classeA + Sergipe-> classeC + Sergipe-> classesED + Sergipe-> religiosidade +
                                        Sergipe-> analfabetismo + Sergipe-> iGini + Sergipe-> parcelaIdosos);
    if(Sergipe-> setorMaisImport == 1)
        Sergipe-> nivelAutoritario = (Sergipe-> nivelAutoritario + 1)/8;
    else
        Sergipe-> nivelAutoritario = Sergipe-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Sergipe-> nivelLibertario = (Sergipe-> classeB + Sergipe-> ensinoSuperior);
    if(Sergipe-> setorMaisImport == 2 || Sergipe-> setorMaisImport == 3)
        Sergipe-> nivelLibertario = (Sergipe-> nivelLibertario + 1)/3;
    else
        Sergipe-> nivelLibertario = Sergipe-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Sergipe-> nivelDireita = (Sergipe-> classeA + Sergipe-> classeB + Sergipe-> religiosidade +  
                                    Sergipe-> analfabetismo + Sergipe-> iGini + Sergipe-> parcelaIdosos);
    if((Sergipe-> setorMaisImport == 1 || Sergipe-> setorMaisImport == 2) && (Sergipe-> partidoMaisInf == 1 || Sergipe-> partidoMaisInf == 2 || Sergipe-> partidoMaisInf == 3))
         Sergipe-> nivelDireita = (Sergipe-> nivelDireita + 2)/8;
    else if((Sergipe-> setorMaisImport != 1 || Sergipe-> setorMaisImport == 2) && (Sergipe-> partidoMaisInf == 1 || Sergipe-> partidoMaisInf == 2 || Sergipe-> partidoMaisInf == 3))
         Sergipe-> nivelDireita = (Sergipe-> nivelDireita + 1)/7;
    else
        Sergipe-> nivelDireita = Sergipe-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Sergipe-> nivelCentro = (Sergipe-> classeC + Sergipe-> ensinoSuperior);
    if(Sergipe-> setorMaisImport == 3 && Sergipe-> partidoMaisInf == 0)
        Sergipe-> nivelCentro = (Sergipe-> nivelCentro + 2)/4;
    else if(Sergipe-> setorMaisImport != 3 && Sergipe-> partidoMaisInf == 0)
        Sergipe-> nivelCentro = (Sergipe-> nivelCentro + 1)/3;
    else
        Sergipe-> nivelCentro = Sergipe-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Sergipe-> nivelEsquerda = Sergipe-> classesED;
    if(Sergipe-> partidoMaisInf == -1 || Sergipe-> partidoMaisInf == -2 || Sergipe-> partidoMaisInf == -3)
        Sergipe-> nivelEsquerda = (Sergipe-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Sergipe-> nivelDireitaSocial = (Sergipe-> classeA + Sergipe-> classeB + Sergipe-> classeC + Sergipe-> classesED + 
                                            Sergipe-> religiosidade + Sergipe-> iGini + Sergipe-> parcelaIdosos);
    if(Sergipe-> setorMaisImport == 1)
        Sergipe-> nivelDireitaSocial = (Sergipe-> nivelDireitaSocial + 1)/8;
    else
        Sergipe-> nivelDireitaSocial = Sergipe-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Sergipe-> nivelEsquerdaSocial = (Sergipe-> ensinoSuperior + Sergipe-> analfabetismo)/2;




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

     //Caracteristicas
        //Carater politico e economico
    Acre-> nivelAutoritario = (Acre-> classeA + Acre-> classeC + Acre-> classesED + Acre-> religiosidade +
                                        Acre-> analfabetismo + Acre-> iGini + Acre-> parcelaIdosos);
    if(Acre-> setorMaisImport == 1)
        Acre-> nivelAutoritario = (Acre-> nivelAutoritario + 1)/8;
    else
        Acre-> nivelAutoritario = Acre-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Acre-> nivelLibertario = (Acre-> classeB + Acre-> ensinoSuperior);
    if(Acre-> setorMaisImport == 2 || Acre-> setorMaisImport == 3)
        Acre-> nivelLibertario = (Acre-> nivelLibertario + 1)/3;
    else
        Acre-> nivelLibertario = Acre-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Acre-> nivelDireita = (Acre-> classeA + Acre-> classeB + Acre-> religiosidade +  
                                    Acre-> analfabetismo + Acre-> iGini + Acre-> parcelaIdosos);
    if((Acre-> setorMaisImport == 1 || Acre-> setorMaisImport == 2) && (Acre-> partidoMaisInf == 1 || Acre-> partidoMaisInf == 2 || Acre-> partidoMaisInf == 3))
         Acre-> nivelDireita = (Acre-> nivelDireita + 2)/8;
    else if((Acre-> setorMaisImport != 1 || Acre-> setorMaisImport == 2) && (Acre-> partidoMaisInf == 1 || Acre-> partidoMaisInf == 2 || Acre-> partidoMaisInf == 3))
         Acre-> nivelDireita = (Acre-> nivelDireita + 1)/7;
    else
        Acre-> nivelDireita = Acre-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Acre-> nivelCentro = (Acre-> classeC + Acre-> ensinoSuperior);
    if(Acre-> setorMaisImport == 3 && Acre-> partidoMaisInf == 0)
        Acre-> nivelCentro = (Acre-> nivelCentro + 2)/4;
    else if(Acre-> setorMaisImport != 3 && Acre-> partidoMaisInf == 0)
        Acre-> nivelCentro = (Acre-> nivelCentro + 1)/3;
    else
        Acre-> nivelCentro = Acre-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Acre-> nivelEsquerda = Acre-> classesED;
    if(Acre-> partidoMaisInf == -1 || Acre-> partidoMaisInf == -2 || Acre-> partidoMaisInf == -3)
        Acre-> nivelEsquerda = (Acre-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Acre-> nivelDireitaSocial = (Acre-> classeA + Acre-> classeB + Acre-> classeC + Acre-> classesED + 
                                            Acre-> religiosidade + Acre-> iGini + Acre-> parcelaIdosos);
    if(Acre-> setorMaisImport == 1)
        Acre-> nivelDireitaSocial = (Acre-> nivelDireitaSocial + 1)/8;
    else
        Acre-> nivelDireitaSocial = Acre-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Acre-> nivelEsquerdaSocial = (Acre-> ensinoSuperior + Acre-> analfabetismo)/2;




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

     //Caracteristicas
        //Carater politico e economico
    Pernambuco-> nivelAutoritario = (Pernambuco-> classeA + Pernambuco-> classeC + Pernambuco-> classesED + Pernambuco-> religiosidade +
                                        Pernambuco-> analfabetismo + Pernambuco-> iGini + Pernambuco-> parcelaIdosos);
    if(Pernambuco-> setorMaisImport == 1)
        Pernambuco-> nivelAutoritario = (Pernambuco-> nivelAutoritario + 1)/8;
    else
        Pernambuco-> nivelAutoritario = Pernambuco-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Pernambuco-> nivelLibertario = (Pernambuco-> classeB + Pernambuco-> ensinoSuperior);
    if(Pernambuco-> setorMaisImport == 2 || Pernambuco-> setorMaisImport == 3)
        Pernambuco-> nivelLibertario = (Pernambuco-> nivelLibertario + 1)/3;
    else
        Pernambuco-> nivelLibertario = Pernambuco-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Pernambuco-> nivelDireita = (Pernambuco-> classeA + Pernambuco-> classeB + Pernambuco-> religiosidade +  
                                    Pernambuco-> analfabetismo + Pernambuco-> iGini + Pernambuco-> parcelaIdosos);
    if((Pernambuco-> setorMaisImport == 1 || Pernambuco-> setorMaisImport == 2) && (Pernambuco-> partidoMaisInf == 1 || Pernambuco-> partidoMaisInf == 2 || Pernambuco-> partidoMaisInf == 3))
         Pernambuco-> nivelDireita = (Pernambuco-> nivelDireita + 2)/8;
    else if((Pernambuco-> setorMaisImport != 1 || Pernambuco-> setorMaisImport == 2) && (Pernambuco-> partidoMaisInf == 1 || Pernambuco-> partidoMaisInf == 2 || Pernambuco-> partidoMaisInf == 3))
         Pernambuco-> nivelDireita = (Pernambuco-> nivelDireita + 1)/7;
    else
        Pernambuco-> nivelDireita = Pernambuco-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    Pernambuco-> nivelCentro = (Pernambuco-> classeC + Pernambuco-> ensinoSuperior);
    if(Pernambuco-> setorMaisImport == 3 && Pernambuco-> partidoMaisInf == 0)
        Pernambuco-> nivelCentro = (Pernambuco-> nivelCentro + 2)/4;
    else if(Pernambuco-> setorMaisImport != 3 && Pernambuco-> partidoMaisInf == 0)
        Pernambuco-> nivelCentro = (Pernambuco-> nivelCentro + 1)/3;
    else
        Pernambuco-> nivelCentro = Pernambuco-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    Pernambuco-> nivelEsquerda = Pernambuco-> classesED;
    if(Pernambuco-> partidoMaisInf == -1 || Pernambuco-> partidoMaisInf == -2 || Pernambuco-> partidoMaisInf == -3)
        Pernambuco-> nivelEsquerda = (Pernambuco-> nivelEsquerda + 1)/2;
    
        //Carater Social
    Pernambuco-> nivelDireitaSocial = (Pernambuco-> classeA + Pernambuco-> classeB + Pernambuco-> classeC + Pernambuco-> classesED + 
                                            Pernambuco-> religiosidade + Pernambuco-> iGini + Pernambuco-> parcelaIdosos);
    if(Pernambuco-> setorMaisImport == 1)
        Pernambuco-> nivelDireitaSocial = (Pernambuco-> nivelDireitaSocial + 1)/8;
    else
        Pernambuco-> nivelDireitaSocial = Pernambuco-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    Pernambuco-> nivelEsquerdaSocial = (Pernambuco-> ensinoSuperior + Pernambuco-> analfabetismo)/2;




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
    
     //Caracteristicas
        //Carater politico e economico
    RioGrandeDoNorte-> nivelAutoritario = (RioGrandeDoNorte-> classeA + RioGrandeDoNorte-> classeC + RioGrandeDoNorte-> classesED + RioGrandeDoNorte-> religiosidade +
                                        RioGrandeDoNorte-> analfabetismo + RioGrandeDoNorte-> iGini + RioGrandeDoNorte-> parcelaIdosos);
    if(RioGrandeDoNorte-> setorMaisImport == 1)
        RioGrandeDoNorte-> nivelAutoritario = (RioGrandeDoNorte-> nivelAutoritario + 1)/8;
    else
        RioGrandeDoNorte-> nivelAutoritario = RioGrandeDoNorte-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoNorte-> nivelLibertario = (RioGrandeDoNorte-> classeB + RioGrandeDoNorte-> ensinoSuperior);
    if(RioGrandeDoNorte-> setorMaisImport == 2 || RioGrandeDoNorte-> setorMaisImport == 3)
        RioGrandeDoNorte-> nivelLibertario = (RioGrandeDoNorte-> nivelLibertario + 1)/3;
    else
        RioGrandeDoNorte-> nivelLibertario = RioGrandeDoNorte-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoNorte-> nivelDireita = (RioGrandeDoNorte-> classeA + RioGrandeDoNorte-> classeB + RioGrandeDoNorte-> religiosidade +  
                                    RioGrandeDoNorte-> analfabetismo + RioGrandeDoNorte-> iGini + RioGrandeDoNorte-> parcelaIdosos);
    if((RioGrandeDoNorte-> setorMaisImport == 1 || RioGrandeDoNorte-> setorMaisImport == 2) && (RioGrandeDoNorte-> partidoMaisInf == 1 || RioGrandeDoNorte-> partidoMaisInf == 2 || RioGrandeDoNorte-> partidoMaisInf == 3))
         RioGrandeDoNorte-> nivelDireita = (RioGrandeDoNorte-> nivelDireita + 2)/8;
    else if((RioGrandeDoNorte-> setorMaisImport != 1 || RioGrandeDoNorte-> setorMaisImport == 2) && (RioGrandeDoNorte-> partidoMaisInf == 1 || RioGrandeDoNorte-> partidoMaisInf == 2 || RioGrandeDoNorte-> partidoMaisInf == 3))
         RioGrandeDoNorte-> nivelDireita = (RioGrandeDoNorte-> nivelDireita + 1)/7;
    else
        RioGrandeDoNorte-> nivelDireita = RioGrandeDoNorte-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoNorte-> nivelCentro = (RioGrandeDoNorte-> classeC + RioGrandeDoNorte-> ensinoSuperior);
    if(RioGrandeDoNorte-> setorMaisImport == 3 && RioGrandeDoNorte-> partidoMaisInf == 0)
        RioGrandeDoNorte-> nivelCentro = (RioGrandeDoNorte-> nivelCentro + 2)/4;
    else if(RioGrandeDoNorte-> setorMaisImport != 3 && RioGrandeDoNorte-> partidoMaisInf == 0)
        RioGrandeDoNorte-> nivelCentro = (RioGrandeDoNorte-> nivelCentro + 1)/3;
    else
        RioGrandeDoNorte-> nivelCentro = RioGrandeDoNorte-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoNorte-> nivelEsquerda = RioGrandeDoNorte-> classesED;
    if(RioGrandeDoNorte-> partidoMaisInf == -1 || RioGrandeDoNorte-> partidoMaisInf == -2 || RioGrandeDoNorte-> partidoMaisInf == -3)
        RioGrandeDoNorte-> nivelEsquerda = (RioGrandeDoNorte-> nivelEsquerda + 1)/2;
    
        //Carater Social
    RioGrandeDoNorte-> nivelDireitaSocial = (RioGrandeDoNorte-> classeA + RioGrandeDoNorte-> classeB + RioGrandeDoNorte-> classeC + RioGrandeDoNorte-> classesED + 
                                            RioGrandeDoNorte-> religiosidade + RioGrandeDoNorte-> iGini + RioGrandeDoNorte-> parcelaIdosos);
    if(RioGrandeDoNorte-> setorMaisImport == 1)
        RioGrandeDoNorte-> nivelDireitaSocial = (RioGrandeDoNorte-> nivelDireitaSocial + 1)/8;
    else
        RioGrandeDoNorte-> nivelDireitaSocial = RioGrandeDoNorte-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
    RioGrandeDoNorte-> nivelEsquerdaSocial = (RioGrandeDoNorte-> ensinoSuperior + RioGrandeDoNorte-> analfabetismo)/2;




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

    //Caracteristicas
        //Carater politico e economico
   Bahia-> nivelAutoritario = (Bahia-> classeA +Bahia-> classeC +Bahia-> classesED +Bahia-> religiosidade +
                                       Bahia-> analfabetismo +Bahia-> iGini +Bahia-> parcelaIdosos);
    if(Bahia-> setorMaisImport == 1)
       Bahia-> nivelAutoritario = (Bahia-> nivelAutoritario + 1)/8;
    else
       Bahia-> nivelAutoritario =Bahia-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Bahia-> nivelLibertario = (Bahia-> classeB +Bahia-> ensinoSuperior);
    if(Bahia-> setorMaisImport == 2 ||Bahia-> setorMaisImport == 3)
       Bahia-> nivelLibertario = (Bahia-> nivelLibertario + 1)/3;
    else
       Bahia-> nivelLibertario =Bahia-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Bahia-> nivelDireita = (Bahia-> classeA +Bahia-> classeB +Bahia-> religiosidade +  
                                   Bahia-> analfabetismo +Bahia-> iGini +Bahia-> parcelaIdosos);
    if((Bahia-> setorMaisImport == 1 ||Bahia-> setorMaisImport == 2) && (Bahia-> partidoMaisInf == 1 ||Bahia-> partidoMaisInf == 2 ||Bahia-> partidoMaisInf == 3))
        Bahia-> nivelDireita = (Bahia-> nivelDireita + 2)/8;
    else if((Bahia-> setorMaisImport != 1 ||Bahia-> setorMaisImport == 2) && (Bahia-> partidoMaisInf == 1 ||Bahia-> partidoMaisInf == 2 ||Bahia-> partidoMaisInf == 3))
        Bahia-> nivelDireita = (Bahia-> nivelDireita + 1)/7;
    else
       Bahia-> nivelDireita =Bahia-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
   Bahia-> nivelCentro = (Bahia-> classeC +Bahia-> ensinoSuperior);
    if(Bahia-> setorMaisImport == 3 &&Bahia-> partidoMaisInf == 0)
       Bahia-> nivelCentro = (Bahia-> nivelCentro + 2)/4;
    else if(Bahia-> setorMaisImport != 3 &&Bahia-> partidoMaisInf == 0)
       Bahia-> nivelCentro = (Bahia-> nivelCentro + 1)/3;
    else
       Bahia-> nivelCentro =Bahia-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Bahia-> nivelEsquerda =Bahia-> classesED;
    if(Bahia-> partidoMaisInf == -1 ||Bahia-> partidoMaisInf == -2 ||Bahia-> partidoMaisInf == -3)
       Bahia-> nivelEsquerda = (Bahia-> nivelEsquerda + 1)/2;
    
        //Carater Social
   Bahia-> nivelDireitaSocial = (Bahia-> classeA +Bahia-> classeB +Bahia-> classeC +Bahia-> classesED + 
                                           Bahia-> religiosidade +Bahia-> iGini +Bahia-> parcelaIdosos);
    if(Bahia-> setorMaisImport == 1)
       Bahia-> nivelDireitaSocial = (Bahia-> nivelDireitaSocial + 1)/8;
    else
       Bahia-> nivelDireitaSocial =Bahia-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Bahia-> nivelEsquerdaSocial = (Bahia-> ensinoSuperior +Bahia-> analfabetismo)/2;





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


    //Caracteristicas
        //Carater politico e economico
   Para-> nivelAutoritario = (Para-> classeA +Para-> classeC +Para-> classesED +Para-> religiosidade +
                                       Para-> analfabetismo +Para-> iGini +Para-> parcelaIdosos);
    if(Para-> setorMaisImport == 1)
       Para-> nivelAutoritario = (Para-> nivelAutoritario + 1)/8;
    else
       Para-> nivelAutoritario =Para-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Para-> nivelLibertario = (Para-> classeB +Para-> ensinoSuperior);
    if(Para-> setorMaisImport == 2 ||Para-> setorMaisImport == 3)
       Para-> nivelLibertario = (Para-> nivelLibertario + 1)/3;
    else
       Para-> nivelLibertario =Para-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Para-> nivelDireita = (Para-> classeA +Para-> classeB +Para-> religiosidade +  
                                   Para-> analfabetismo +Para-> iGini +Para-> parcelaIdosos);
    if((Para-> setorMaisImport == 1 ||Para-> setorMaisImport == 2) && (Para-> partidoMaisInf == 1 ||Para-> partidoMaisInf == 2 ||Para-> partidoMaisInf == 3))
        Para-> nivelDireita = (Para-> nivelDireita + 2)/8;
    else if((Para-> setorMaisImport != 1 ||Para-> setorMaisImport == 2) && (Para-> partidoMaisInf == 1 ||Para-> partidoMaisInf == 2 ||Para-> partidoMaisInf == 3))
        Para-> nivelDireita = (Para-> nivelDireita + 1)/7;
    else
       Para-> nivelDireita =Para-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
   Para-> nivelCentro = (Para-> classeC +Para-> ensinoSuperior);
    if(Para-> setorMaisImport == 3 &&Para-> partidoMaisInf == 0)
       Para-> nivelCentro = (Para-> nivelCentro + 2)/4;
    else if(Para-> setorMaisImport != 3 &&Para-> partidoMaisInf == 0)
       Para-> nivelCentro = (Para-> nivelCentro + 1)/3;
    else
       Para-> nivelCentro =Para-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Para-> nivelEsquerda =Para-> classesED;
    if(Para-> partidoMaisInf == -1 ||Para-> partidoMaisInf == -2 ||Para-> partidoMaisInf == -3)
       Para-> nivelEsquerda = (Para-> nivelEsquerda + 1)/2;
    
        //Carater Social
   Para-> nivelDireitaSocial = (Para-> classeA +Para-> classeB +Para-> classeC +Para-> classesED + 
                                           Para-> religiosidade +Para-> iGini +Para-> parcelaIdosos);
    if(Para-> setorMaisImport == 1)
       Para-> nivelDireitaSocial = (Para-> nivelDireitaSocial + 1)/8;
    else
       Para-> nivelDireitaSocial =Para-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Para-> nivelEsquerdaSocial = (Para-> ensinoSuperior +Para-> analfabetismo)/2;





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

    //Caracteristicas
        //Carater politico e economico
   Ceara-> nivelAutoritario = (Ceara-> classeA +Ceara-> classeC +Ceara-> classesED +Ceara-> religiosidade +
                                       Ceara-> analfabetismo +Ceara-> iGini +Ceara-> parcelaIdosos);
    if(Ceara-> setorMaisImport == 1)
       Ceara-> nivelAutoritario = (Ceara-> nivelAutoritario + 1)/8;
    else
       Ceara-> nivelAutoritario =Ceara-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Ceara-> nivelLibertario = (Ceara-> classeB +Ceara-> ensinoSuperior);
    if(Ceara-> setorMaisImport == 2 ||Ceara-> setorMaisImport == 3)
       Ceara-> nivelLibertario = (Ceara-> nivelLibertario + 1)/3;
    else
       Ceara-> nivelLibertario =Ceara-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Ceara-> nivelDireita = (Ceara-> classeA +Ceara-> classeB +Ceara-> religiosidade +  
                                   Ceara-> analfabetismo +Ceara-> iGini +Ceara-> parcelaIdosos);
    if((Ceara-> setorMaisImport == 1 ||Ceara-> setorMaisImport == 2) && (Ceara-> partidoMaisInf == 1 ||Ceara-> partidoMaisInf == 2 ||Ceara-> partidoMaisInf == 3))
        Ceara-> nivelDireita = (Ceara-> nivelDireita + 2)/8;
    else if((Ceara-> setorMaisImport != 1 ||Ceara-> setorMaisImport == 2) && (Ceara-> partidoMaisInf == 1 ||Ceara-> partidoMaisInf == 2 ||Ceara-> partidoMaisInf == 3))
        Ceara-> nivelDireita = (Ceara-> nivelDireita + 1)/7;
    else
       Ceara-> nivelDireita =Ceara-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
   Ceara-> nivelCentro = (Ceara-> classeC +Ceara-> ensinoSuperior);
    if(Ceara-> setorMaisImport == 3 &&Ceara-> partidoMaisInf == 0)
       Ceara-> nivelCentro = (Ceara-> nivelCentro + 2)/4;
    else if(Ceara-> setorMaisImport != 3 &&Ceara-> partidoMaisInf == 0)
       Ceara-> nivelCentro = (Ceara-> nivelCentro + 1)/3;
    else
       Ceara-> nivelCentro =Ceara-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Ceara-> nivelEsquerda =Ceara-> classesED;
    if(Ceara-> partidoMaisInf == -1 ||Ceara-> partidoMaisInf == -2 ||Ceara-> partidoMaisInf == -3)
       Ceara-> nivelEsquerda = (Ceara-> nivelEsquerda + 1)/2;
    
        //Carater Social
   Ceara-> nivelDireitaSocial = (Ceara-> classeA +Ceara-> classeB +Ceara-> classeC +Ceara-> classesED + 
                                           Ceara-> religiosidade +Ceara-> iGini +Ceara-> parcelaIdosos);
    if(Ceara-> setorMaisImport == 1)
       Ceara-> nivelDireitaSocial = (Ceara-> nivelDireitaSocial + 1)/8;
    else
       Ceara-> nivelDireitaSocial =Ceara-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Ceara-> nivelEsquerdaSocial = (Ceara-> ensinoSuperior +Ceara-> analfabetismo)/2;






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

    //Caracteristicas
        //Carater politico e economico
   Paraiba-> nivelAutoritario = (Paraiba-> classeA +Paraiba-> classeC +Paraiba-> classesED +Paraiba-> religiosidade +
                                       Paraiba-> analfabetismo +Paraiba-> iGini +Paraiba-> parcelaIdosos);
    if(Paraiba-> setorMaisImport == 1)
       Paraiba-> nivelAutoritario = (Paraiba-> nivelAutoritario + 1)/8;
    else
       Paraiba-> nivelAutoritario =Paraiba-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Paraiba-> nivelLibertario = (Paraiba-> classeB +Paraiba-> ensinoSuperior);
    if(Paraiba-> setorMaisImport == 2 ||Paraiba-> setorMaisImport == 3)
       Paraiba-> nivelLibertario = (Paraiba-> nivelLibertario + 1)/3;
    else
       Paraiba-> nivelLibertario =Paraiba-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Paraiba-> nivelDireita = (Paraiba-> classeA +Paraiba-> classeB +Paraiba-> religiosidade +  
                                   Paraiba-> analfabetismo +Paraiba-> iGini +Paraiba-> parcelaIdosos);
    if((Paraiba-> setorMaisImport == 1 ||Paraiba-> setorMaisImport == 2) && (Paraiba-> partidoMaisInf == 1 ||Paraiba-> partidoMaisInf == 2 ||Paraiba-> partidoMaisInf == 3))
        Paraiba-> nivelDireita = (Paraiba-> nivelDireita + 2)/8;
    else if((Paraiba-> setorMaisImport != 1 ||Paraiba-> setorMaisImport == 2) && (Paraiba-> partidoMaisInf == 1 ||Paraiba-> partidoMaisInf == 2 ||Paraiba-> partidoMaisInf == 3))
        Paraiba-> nivelDireita = (Paraiba-> nivelDireita + 1)/7;
    else
       Paraiba-> nivelDireita =Paraiba-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
   Paraiba-> nivelCentro = (Paraiba-> classeC +Paraiba-> ensinoSuperior);
    if(Paraiba-> setorMaisImport == 3 &&Paraiba-> partidoMaisInf == 0)
       Paraiba-> nivelCentro = (Paraiba-> nivelCentro + 2)/4;
    else if(Paraiba-> setorMaisImport != 3 &&Paraiba-> partidoMaisInf == 0)
       Paraiba-> nivelCentro = (Paraiba-> nivelCentro + 1)/3;
    else
       Paraiba-> nivelCentro =Paraiba-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Paraiba-> nivelEsquerda =Paraiba-> classesED;
    if(Paraiba-> partidoMaisInf == -1 ||Paraiba-> partidoMaisInf == -2 ||Paraiba-> partidoMaisInf == -3)
       Paraiba-> nivelEsquerda = (Paraiba-> nivelEsquerda + 1)/2;
    
        //Carater Social
   Paraiba-> nivelDireitaSocial = (Paraiba-> classeA +Paraiba-> classeB +Paraiba-> classeC +Paraiba-> classesED + 
                                           Paraiba-> religiosidade +Paraiba-> iGini +Paraiba-> parcelaIdosos);
    if(Paraiba-> setorMaisImport == 1)
       Paraiba-> nivelDireitaSocial = (Paraiba-> nivelDireitaSocial + 1)/8;
    else
       Paraiba-> nivelDireitaSocial =Paraiba-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Paraiba-> nivelEsquerdaSocial = (Paraiba-> ensinoSuperior +Paraiba-> analfabetismo)/2;





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

    //Caracteristicas
        //Carater politico e economico
   Alagoas-> nivelAutoritario = (Alagoas-> classeA +Alagoas-> classeC +Alagoas-> classesED +Alagoas-> religiosidade +
                                       Alagoas-> analfabetismo +Alagoas-> iGini +Alagoas-> parcelaIdosos);
    if(Alagoas-> setorMaisImport == 1)
       Alagoas-> nivelAutoritario = (Alagoas-> nivelAutoritario + 1)/8;
    else
       Alagoas-> nivelAutoritario =Alagoas-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Alagoas-> nivelLibertario = (Alagoas-> classeB +Alagoas-> ensinoSuperior);
    if(Alagoas-> setorMaisImport == 2 ||Alagoas-> setorMaisImport == 3)
       Alagoas-> nivelLibertario = (Alagoas-> nivelLibertario + 1)/3;
    else
       Alagoas-> nivelLibertario =Alagoas-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Alagoas-> nivelDireita = (Alagoas-> classeA +Alagoas-> classeB +Alagoas-> religiosidade +  
                                   Alagoas-> analfabetismo +Alagoas-> iGini +Alagoas-> parcelaIdosos);
    if((Alagoas-> setorMaisImport == 1 ||Alagoas-> setorMaisImport == 2) && (Alagoas-> partidoMaisInf == 1 ||Alagoas-> partidoMaisInf == 2 ||Alagoas-> partidoMaisInf == 3))
        Alagoas-> nivelDireita = (Alagoas-> nivelDireita + 2)/8;
    else if((Alagoas-> setorMaisImport != 1 ||Alagoas-> setorMaisImport == 2) && (Alagoas-> partidoMaisInf == 1 ||Alagoas-> partidoMaisInf == 2 ||Alagoas-> partidoMaisInf == 3))
        Alagoas-> nivelDireita = (Alagoas-> nivelDireita + 1)/7;
    else
       Alagoas-> nivelDireita =Alagoas-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
   Alagoas-> nivelCentro = (Alagoas-> classeC +Alagoas-> ensinoSuperior);
    if(Alagoas-> setorMaisImport == 3 &&Alagoas-> partidoMaisInf == 0)
       Alagoas-> nivelCentro = (Alagoas-> nivelCentro + 2)/4;
    else if(Alagoas-> setorMaisImport != 3 &&Alagoas-> partidoMaisInf == 0)
       Alagoas-> nivelCentro = (Alagoas-> nivelCentro + 1)/3;
    else
       Alagoas-> nivelCentro =Alagoas-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Alagoas-> nivelEsquerda =Alagoas-> classesED;
    if(Alagoas-> partidoMaisInf == -1 ||Alagoas-> partidoMaisInf == -2 ||Alagoas-> partidoMaisInf == -3)
       Alagoas-> nivelEsquerda = (Alagoas-> nivelEsquerda + 1)/2;
    
        //Carater Social
   Alagoas-> nivelDireitaSocial = (Alagoas-> classeA +Alagoas-> classeB +Alagoas-> classeC +Alagoas-> classesED + 
                                           Alagoas-> religiosidade +Alagoas-> iGini +Alagoas-> parcelaIdosos);
    if(Alagoas-> setorMaisImport == 1)
       Alagoas-> nivelDireitaSocial = (Alagoas-> nivelDireitaSocial + 1)/8;
    else
       Alagoas-> nivelDireitaSocial =Alagoas-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Alagoas-> nivelEsquerdaSocial = (Alagoas-> ensinoSuperior +Alagoas-> analfabetismo)/2;





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

    //Caracteristicas
        //Carater politico e economico
   Piaui-> nivelAutoritario = (Piaui-> classeA +Piaui-> classeC +Piaui-> classesED +Piaui-> religiosidade +
                                       Piaui-> analfabetismo +Piaui-> iGini +Piaui-> parcelaIdosos);
    if(Piaui-> setorMaisImport == 1)
       Piaui-> nivelAutoritario = (Piaui-> nivelAutoritario + 1)/8;
    else
       Piaui-> nivelAutoritario =Piaui-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Piaui-> nivelLibertario = (Piaui-> classeB +Piaui-> ensinoSuperior);
    if(Piaui-> setorMaisImport == 2 ||Piaui-> setorMaisImport == 3)
       Piaui-> nivelLibertario = (Piaui-> nivelLibertario + 1)/3;
    else
       Piaui-> nivelLibertario =Piaui-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Piaui-> nivelDireita = (Piaui-> classeA +Piaui-> classeB +Piaui-> religiosidade +  
                                   Piaui-> analfabetismo +Piaui-> iGini +Piaui-> parcelaIdosos);
    if((Piaui-> setorMaisImport == 1 ||Piaui-> setorMaisImport == 2) && (Piaui-> partidoMaisInf == 1 ||Piaui-> partidoMaisInf == 2 ||Piaui-> partidoMaisInf == 3))
        Piaui-> nivelDireita = (Piaui-> nivelDireita + 2)/8;
    else if((Piaui-> setorMaisImport != 1 ||Piaui-> setorMaisImport == 2) && (Piaui-> partidoMaisInf == 1 ||Piaui-> partidoMaisInf == 2 ||Piaui-> partidoMaisInf == 3))
        Piaui-> nivelDireita = (Piaui-> nivelDireita + 1)/7;
    else
       Piaui-> nivelDireita =Piaui-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
   Piaui-> nivelCentro = (Piaui-> classeC +Piaui-> ensinoSuperior);
    if(Piaui-> setorMaisImport == 3 &&Piaui-> partidoMaisInf == 0)
       Piaui-> nivelCentro = (Piaui-> nivelCentro + 2)/4;
    else if(Piaui-> setorMaisImport != 3 &&Piaui-> partidoMaisInf == 0)
       Piaui-> nivelCentro = (Piaui-> nivelCentro + 1)/3;
    else
       Piaui-> nivelCentro =Piaui-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Piaui-> nivelEsquerda =Piaui-> classesED;
    if(Piaui-> partidoMaisInf == -1 ||Piaui-> partidoMaisInf == -2 ||Piaui-> partidoMaisInf == -3)
       Piaui-> nivelEsquerda = (Piaui-> nivelEsquerda + 1)/2;
    
        //Carater Social
   Piaui-> nivelDireitaSocial = (Piaui-> classeA +Piaui-> classeB +Piaui-> classeC +Piaui-> classesED + 
                                           Piaui-> religiosidade +Piaui-> iGini +Piaui-> parcelaIdosos);
    if(Piaui-> setorMaisImport == 1)
       Piaui-> nivelDireitaSocial = (Piaui-> nivelDireitaSocial + 1)/8;
    else
       Piaui-> nivelDireitaSocial =Piaui-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Piaui-> nivelEsquerdaSocial = (Piaui-> ensinoSuperior +Piaui-> analfabetismo)/2;





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

    //Caracteristicas
        //Carater politico e economico
   Maranhao-> nivelAutoritario = (Maranhao-> classeA +Maranhao-> classeC +Maranhao-> classesED +Maranhao-> religiosidade +
                                       Maranhao-> analfabetismo +Maranhao-> iGini +Maranhao-> parcelaIdosos);
    if(Maranhao-> setorMaisImport == 1)
       Maranhao-> nivelAutoritario = (Maranhao-> nivelAutoritario + 1)/8;
    else
       Maranhao-> nivelAutoritario =Maranhao-> nivelAutoritario/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Maranhao-> nivelLibertario = (Maranhao-> classeB +Maranhao-> ensinoSuperior);
    if(Maranhao-> setorMaisImport == 2 ||Maranhao-> setorMaisImport == 3)
       Maranhao-> nivelLibertario = (Maranhao-> nivelLibertario + 1)/3;
    else
       Maranhao-> nivelLibertario =Maranhao-> nivelLibertario/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Maranhao-> nivelDireita = (Maranhao-> classeA +Maranhao-> classeB +Maranhao-> religiosidade +  
                                   Maranhao-> analfabetismo +Maranhao-> iGini +Maranhao-> parcelaIdosos);
    if((Maranhao-> setorMaisImport == 1 ||Maranhao-> setorMaisImport == 2) && (Maranhao-> partidoMaisInf == 1 ||Maranhao-> partidoMaisInf == 2 ||Maranhao-> partidoMaisInf == 3))
        Maranhao-> nivelDireita = (Maranhao-> nivelDireita + 2)/8;
    else if((Maranhao-> setorMaisImport != 1 ||Maranhao-> setorMaisImport == 2) && (Maranhao-> partidoMaisInf == 1 ||Maranhao-> partidoMaisInf == 2 ||Maranhao-> partidoMaisInf == 3))
        Maranhao-> nivelDireita = (Maranhao-> nivelDireita + 1)/7;
    else
       Maranhao-> nivelDireita =Maranhao-> nivelDireita/6;
    //-------------------------------------------------------------------------------------------------------------------------------
   Maranhao-> nivelCentro = (Maranhao-> classeC +Maranhao-> ensinoSuperior);
    if(Maranhao-> setorMaisImport == 3 &&Maranhao-> partidoMaisInf == 0)
       Maranhao-> nivelCentro = (Maranhao-> nivelCentro + 2)/4;
    else if(Maranhao-> setorMaisImport != 3 &&Maranhao-> partidoMaisInf == 0)
       Maranhao-> nivelCentro = (Maranhao-> nivelCentro + 1)/3;
    else
       Maranhao-> nivelCentro =Maranhao-> nivelCentro/2;
    //-------------------------------------------------------------------------------------------------------------------------------
   Maranhao-> nivelEsquerda =Maranhao-> classesED;
    if(Maranhao-> partidoMaisInf == -1 ||Maranhao-> partidoMaisInf == -2 ||Maranhao-> partidoMaisInf == -3)
       Maranhao-> nivelEsquerda = (Maranhao-> nivelEsquerda + 1)/2;
    
        //Carater Social
   Maranhao-> nivelDireitaSocial = (Maranhao-> classeA +Maranhao-> classeB +Maranhao-> classeC +Maranhao-> classesED + 
                                           Maranhao-> religiosidade +Maranhao-> iGini +Maranhao-> parcelaIdosos);
    if(Maranhao-> setorMaisImport == 1)
       Maranhao-> nivelDireitaSocial = (Maranhao-> nivelDireitaSocial + 1)/8;
    else
       Maranhao-> nivelDireitaSocial =Maranhao-> nivelDireitaSocial/7;
    //-------------------------------------------------------------------------------------------------------------------------------
   Maranhao-> nivelEsquerdaSocial = (Maranhao-> ensinoSuperior +Maranhao-> analfabetismo)/2;

}