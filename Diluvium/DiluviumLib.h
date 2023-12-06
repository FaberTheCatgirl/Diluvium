#pragma once

#ifdef DILUVIUMLIB_SHARED_LIBRARY
#ifdef _WIN32
#define DILUVIUMLIB_SHARED __declspec(dllexport)
#endif
#endif

#ifndef DILUVIUMLIB_SHARED
#define DILUVIUMLIB_SHARED
#endif