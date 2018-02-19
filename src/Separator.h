#ifndef __SEPARATOR_H__
#define __SEPARATOR_H__

#include "Base.h"
#include "CMD.h"
#include "And.h"
#include "Or.h"

using namespace std;

class Processes {
    private:
        std::vector<Base*> currCmds;

    public:
        Processes();
        ~Processes();
        void parse(std::string parse);
        int execute();
        void reset();
};
#endif
