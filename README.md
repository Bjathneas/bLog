
# bLog - little b's Log

A simple logging solution complete with file and line names


## Usage/Examples
It's simple
```cpp
#include "bLog.h"

int main() {
    // MACROS
    BLOG_TRACE("This is a TRACE message")
    BLOG_DEBUG("This is a DEBUG message")
    BLOG_INFO("This is an INFO message")
    BLOG_WARN("This is a WARN message")
    BLOG_ERROR("This is an ERROR message")
    BLOG_FATAL("This is a FATAL message")
    BLOG_LOG("This is an UNKNOWN message")

    return EXIT_SUCCESS;
}
```

