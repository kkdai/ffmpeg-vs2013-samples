// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <io.h>
#include <direct.h>
extern "C"
{
	//ffmpeg
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
	//SDL
#include "SDL.h"
#include "SDL_thread.h"
};

// TODO: reference additional headers your program requires here
