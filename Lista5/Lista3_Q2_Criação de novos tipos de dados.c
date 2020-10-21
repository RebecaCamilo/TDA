//Horário: composto de hora, minutos e segundos.
//Data: composto de dia, mês e ano.
//Compromisso: composto de uma data, horário e texto que descreve o compromisso.

#include <stdio.h>

struct horario {
    int hora;
    int minutos;
    int segundos;
};

struct data {
    int dia;
    int mes;
    int ano;
};

struct compromisso {
    struct data dat;
    struct horario hor;
    char compromisso[200];
};

int main() {

    return 0;
}
