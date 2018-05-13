#ifndef TOOLS_H
#define TOOLS_H
#include "Equipe.h"

#include <iostream>
#include <list>


class tools
{
    public:
        static double RandomScore(int niveau);
        static bool Compare(Equipe *&First, Equipe *&Next);
        static void afficherSeparation();
};

#endif // TOOLS_H
