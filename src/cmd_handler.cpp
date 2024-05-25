/**
 * @file    CmdHandler.cpp
 * @version 0.1.0
 * @authors Anton Chernov
 * @date    25/05/2024
 */

/******************************** Included files ******************************/
#include <stdio.h>
#include <termios.h>
#include "cmd_handler.h"
/********************************* Definitions ********************************/

#define CMD_LINE_LEN    (255u)
using Console::CmdHandler;
/******************************* Class definition *****************************/
int CmdHandler::Start() {
    //bool repeat = true;
    //char *temp_str[CMD_LINE_LEN];
    struct termios settings;
    tcgetattr(0, &settings); /* grab terminal i/o settings */
    settings.c_lflag &= ~ICANON; /* disable buffered i/o */
    settings.c_lflag &= ~ECHO; /* set no echo mode */
    tcsetattr(0, TCSANOW, &settings); /* use these new terminal i/o settings now */

    unsigned int num = 0;
    do {
        int ch = getchar();
        printf("*");
    } while (++num < 10);
    printf("\n");

    settings.c_lflag |= ICANON; /* enable buffered i/o */
    settings.c_lflag |= ECHO; /* set echo mode */
    tcsetattr(0, TCSANOW, &settings); /* use these new terminal i/o settings now */
    return EXIT_SUCCESS;
}
/*----------------------------------------------------------------------------*/

/******************************************************************************/
