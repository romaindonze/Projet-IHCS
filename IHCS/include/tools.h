#ifndef TOOLS_H
#define TOOLS_H
#include "Equipe.h"

#include <iostream>
#include <list>


class tools
{
    public:
        static double GoalMarque(int niveau);
        static bool Compare(Equipe *&First, Equipe *&Next);
};

#endif // TOOLS_H
