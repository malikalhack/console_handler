/**
 * @file    main.cpp
 * @version 0.1.0
 * @authors Anton Chernov
 * @date    25/05/2024
 */

/******************************** Included files ******************************/
#include "cmd_handler.h"
/********************************* Definitions ********************************/
using Console::CmdHandler;
/********************************* Entry point ********************************/
int main(int argc, char *argv[]) {
    CmdHandler cmd;

    exit(cmd.Start());
}
/******************************************************************************/
