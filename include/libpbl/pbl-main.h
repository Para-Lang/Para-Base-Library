/// @file pbl-main.h
/// @brief Main Functions, types and macros used inside the Para-C. This file includes no other Para-C headers, and
/// serves as the base for the entire base-lib implementation.
/// @author Luna-Klatzer
/// @date 2021-11-23
/// @copyright Copyright (c) 2021

#pragma once

// Including Headers that are required throughout the entire PBL Library
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef PBL_MODULES_MAIN_H
#define PBL_MODULES_MAIN_H

// ---- Functions Definitions -----------------------------------------------------------------------------------------
/**
 * @brief Aborts the current program with the specified 'exit_code' and logs the error message
 * @param exit_code The exit code that should be used when exiting the program
 * @param string The string that should be printed out
 */
void PblAbortWithCriticalError(int exit_code, const char *string);

// ---- End of Function Definitions -----------------------------------------------------------------------------------

#endif//PBL_MODULES_MAIN_H