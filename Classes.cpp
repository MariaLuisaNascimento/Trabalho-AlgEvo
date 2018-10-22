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
    double PIBperCapta;
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

    //---- 2 Sao Paulo ----
    EstadosEleitores* SaoPaulo = new EstadosEleitores;

    //---- 3 Rio de Janeiro ----
    EstadosEleitores* RioDeJaneiro = new EstadosEleitores;

    //---- 4 Santa Catarina -----
    EstadosEleitores* SantaCatarina = new EstadosEleitores;

    // ---- 5 Rio Grande do Sul ----
    EstadosEleitores* RioGrandeDoSul = new EstadosEleitores;

    // ---- 6 Parana ----
    EstadosEleitores* Parana = new EstadosEleitores;

    // ---- 7 Mato Grosso ----
    EstadosEleitores* MatoGrosso = new EstadosEleitores;

    // ---- 8 Mato Grosso do Sul ----
    EstadosEleitores* MatoGrossoDoSul = new EstadosEleitores;

    // ---- 9 Espirito Santo ----
    EstadosEleitores* EspiritoSanto = new EstadosEleitores;

    // ---- 10 Goias ----
    EstadosEleitores* Goias = new EstadosEleitores;

    // ---- 11 Minas Gerais ----
    EstadosEleitores* MinasGerais = new EstadosEleitores;

    // ---- 12 Amazonas ----
    EstadosEleitores* Amazonas = new EstadosEleitores;

    // ---- 13 Rondonia ----
    EstadosEleitores* Rondonia = new EstadosEleitores;

    // ---- 14 Roraima ----
    EstadosEleitores* Roraima = new EstadosEleitores;

    // ---- 15 Tocantins ----
    EstadosEleitores* Tocantins = new EstadosEleitores;

    // ---- 16 Amapa ----
    EstadosEleitores* Amapa = new EstadosEleitores;

    // ---- 17 Sergipe ----
    EstadosEleitores* Sergipe = new EstadosEleitores;

    // ---- 18 Acre ----
    EstadosEleitores* Acre = new EstadosEleitores;

    // ---- 19 Pernambuco ----
    EstadosEleitores* Pernambuco = new EstadosEleitores;

    // ---- 20 Rio Grande do Norte ----
    EstadosEleitores* RioGrandeDoNorte = new EstadosEleitores;
    
    // ---- 21 Bahia ----
    EstadosEleitores* Bahia = new EstadosEleitores;

    // ---- 22 Para ----
    EstadosEleitores* Para = new EstadosEleitores;

    // ---- 23 Ceara ----
    EstadosEleitores* Ceara = new EstadosEleitores;

    // ---- 24 Paraiba ----
    EstadosEleitores* Paraiba = new EstadosEleitores;

    // ---- 25 Alagoas ----
    EstadosEleitores* Alagoas = new EstadosEleitores;

    // ---- 26 Piaui ----
    EstadosEleitores* Piaui = new EstadosEleitores;

    // ---- 27 Maranhao ----
    EstadosEleitores* Maranhao = new EstadosEleitores;

    
}