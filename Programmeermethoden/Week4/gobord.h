// file gobord.h

#define BOVEN 0
#define LINKS_BOVEN 1
#define RECHTS 2
#define RECHTS_ONDER 3
#define ONDER 4
#define LINKS_ONDER 5
#define LINKS 6
#define RECHTS_BOVEN 7

class bordvakje {
  public:
    char kleur;                    //     7 0 1
    bordvakje* buren[8];           //     6   2
    bordvakje();                   //     5 4 3
};//bordvakje

class gobord {

  public:
    gobord();
    gobord(int hoogte, int breedte);
    ~gobord();
    void setCPU(bool cpu);
    void setKleur(char kleur);
    char getKleur();
    char getCPUKleur();
    int getMuisX();
    int getMuisY();
    int getHoogte();
    void verplaatsHoog();
    void verplaatsLaag();
    void verplaatsLinks();
    void verplaatsRechts();
    void bouwBord();
    void randomZet(char kl);
    void mensZet(char kl, int & i, int & j);
    void drukAf(bordvakje* ingang);
    bool klaar();
    bool gewonnen(char &kleur, bordvakje* laatstezet);
    void doeZet(char kl, int i, int j);
    bordvakje* locatie (int x, int y);
    bordvakje* getIngang();
  private:
    bordvakje* ingang;
    int hoogte, breedte;
    int muislocatie[2];
    char kleur;
    bool cpu;
    int stukken;
    void rits(bordvakje* boven, bordvakje* onder);
    bordvakje* maakRij(int aantal);
};