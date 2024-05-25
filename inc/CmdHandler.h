/**
 * @file    CmdHandler.h
 * @version 0.1.0
 * @authors Anton Chernov
 * @date    25/05/2024
 */

#ifndef CMDHANDLER_H
#define CMDHANDLER_H
/******************************** Included files ******************************/
#include <stdlib.h>
/********************************** Definition ********************************/
namespace Console {
/***************************** Class declaration ******************************/
    class CmdHandler {
    private:

    public:
/** @brief Constructor */
        CmdHandler() = default;
        //explicit

/** @brief Destructor */
        ~CmdHandler() = default;
        // noexcept

/** @brief The copy constructor */
        CmdHandler(const CmdHandler& obj) = delete;

/** @brief The copy-assignment operator */
        CmdHandler& operator=(const CmdHandler& other) = delete;

/** @brief The move constructor */
        CmdHandler(CmdHandler&& fp) = delete;

/* @breif the move - assignment operator */
        CmdHandler const& operator=(CmdHandler&& fp) = delete;

        int Start();

    };
}
/******************************************************************************/
#endif /* !CMDHANDLER_H */
