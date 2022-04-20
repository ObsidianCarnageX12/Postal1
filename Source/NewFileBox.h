#pragma once
/*
****************************************************************************************************************
** A attempt at fixing the file dialogs for proper editor functionality on modern windows systems!            **
**                                                                                                            **
****************************************************************************************************************

----------------------------------------------------------------------------------------------------------------

04/08/22 - File started (CS)


*/

// Include the compilation options
#include "CompileOptions.h"

//Includes for windows specific header(s)
#ifdef PLATFORM_WIN32
#include <windows.h>
#include <iostream>
#include <fstream>
#include <shobjidl.h> 
#endif

