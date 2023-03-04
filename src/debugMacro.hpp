#pragma once

#define DEBUGGING_ENABLED 1

#ifdef DEBUGGING_ENABLED
#define DEBUG(x) do {  \
    std::cerr << __FILE__ << ":" << __LINE__ << ": " << x << std::endl; \
  } while (0)
#else
#define DEBUG(x)
#endif
