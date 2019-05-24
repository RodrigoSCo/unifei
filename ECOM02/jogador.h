#ifndef JOG_ID
  #define JOG_ID

  #ifndef MAX
    #define MAX 45
  #endif

  #ifndef MAX_NO
    #define MAX_NO 45
  #endif

  class jogador{
  public:
    /* Atributos */
    int maoTrem[MAX];
    CartaObjetivo maoObj[MAX];
    int ConquistasGrafo[MAX_NO][MAX_NO]; //adjacencias
    int id;
    int contPeca;

    /* Métodos */
    jogador();
    ~jogador();
    void desejaDevolver();
    int buscaProfundidade(); //Retorna o maior caminho de um vértice
    int maiorCaminho(); //Retorna o maior dos caminhos

  };

#endif
