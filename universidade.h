class Universidade{
private:
    char nomeUni[30];
public:
    Universidade(const char* nome = "");
    ~Universidade();
    void set_nome(const char* nome);
    char* inform_uni();
};
