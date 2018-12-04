#ifndef EVOLUCAO_H

    #define EVOLUCAO_H 
	
	/*------------------------------------ CLASSES -------------------------------*/
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

	
	/* ------------------------- SETAR ESTADOS BRASILEIROS ------------------------------*/
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

    /*---------------------- RESULTADOS DOS ESTADOS ----------------------------------------*/
    double AutoritarioIdeal; 
    double LibertarioIdeal;
    double DireitaIdeal;
    double CentroIdeal;
    double EsquerdaIdeal;
    double DireitaSocialIdeal;
    double EsquerdaSocialIdeal;
    
    /*-------------------------------------- CANDIDATOS ------------------------------------*/
    Candidato* candidatoTeste = new Candidato;
    Candidato* candidatoIdeal = new Candidato;    

	/*--------------------------------- FUNCOES DA EVOLUCAO ----------------------------------*/

	void IniciaMundo (double* AutoritarioIdeal, double* LibertarioIdeal, double* DireitaIdeal, double* CentroIdeal, double* EsquerdaIdeal, double* DireitaSocialIdeal,
	double* EsquerdaSocialIdeal, EstadosEleitores* DistritoFederal, EstadosEleitores* SaoPaulo, EstadosEleitores* RioDeJaneiro, EstadosEleitores* SantaCatarina,
	EstadosEleitores* RioGrandeDoSul, EstadosEleitores* Parana, EstadosEleitores* MatoGrosso, EstadosEleitores* MatoGrossoDoSul, EstadosEleitores* EspiritoSanto,
	EstadosEleitores* Goias, EstadosEleitores* MinasGerais, EstadosEleitores* Amazonas, EstadosEleitores* Rondonia, EstadosEleitores* Roraima, EstadosEleitores* Tocantins,
	EstadosEleitores* Amapa, EstadosEleitores* Sergipe, EstadosEleitores* Acre, EstadosEleitores* Pernambuco, EstadosEleitores* RioGrandeDoNorte, EstadosEleitores* Bahia,
	EstadosEleitores* Para, EstadosEleitores* Ceara, EstadosEleitores* Paraiba, EstadosEleitores* Alagoas, EstadosEleitores* Piaui, EstadosEleitores* Maranhao);

	void IniciaPopulacao(double* gene1, double* gene2, double* gene3, double* gene4, double* gene5, double* gene6, double* gene7,double* gene8,
	double* gene9, double* gene10, double* gene11, double* gene12, double* gene13);

	void AvaliaPopulacao(double* pontuacao, Candidato* candidatoTeste, double* DNA, double* AutoritarioIdeal, double* LibertarioIdeal, double* DireitaIdeal, double* CentroIdeal, double* EsquerdaIdeal, 
	double* DireitaSocialIdeal, double* EsquerdaSocialIdeal);

	int SelecionaPopulacao(double* SelecaoNatural);

	void CruzamentoPopulacao(double* MelhorDNA, double* DNA1, double* DNA2, double* DNA3, double* DNA4, double* DNA5);

	void MutacaoDNA(double* DNA);

	void FimDaEvolucao(Candidato* candidatoIdeal, double* DNAevoluido);

#endif