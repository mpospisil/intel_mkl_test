#pragma once

// Define MKLCALCULATIONS_EXPORTS when building your DLL
#ifdef MKLCALCULATIONS_EXPORTS
  // If accessing the data from inside the DLL
#define DLL_MKLCALCULATIONS __declspec(dllexport)
#else
  // If accessing the data from outside the DLL
#define DLL_MKLCALCULATIONS __declspec(dllimport)
#endif