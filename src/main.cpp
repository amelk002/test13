#include <iostream>
#include <pwd.h>
#include <sys/types.h>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cmath>
#include <sstream>
#include <stdio.h>
#include <unistd.h>
#include <cstring>
#include <sys/wait.h>
#include <algorithm>
#include "Separator.h"

using namespace std;



int main()
{

    string input;
    getline(cin, input);
    Processes mainProcexss;
    while(input != "exit")
    {
        mainProcess.parse(input);
        mainProcess.execute();
        mainProcess.reset();x
        getline(cin, input);
    }
    return 0;
}
