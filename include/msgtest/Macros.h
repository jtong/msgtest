#ifndef MSGTEST_MACROS_H
#define MSGTEST_MACROS_H

#define MSGTEST_CONCATENATE_DIRECT(s1, s2) s1##s2
#define MSGTEST_CONCATENATE(s1, s2) MSGTEST_CONCATENATE_DIRECT(s1, s2)

#define MSGTEST_ANONYMOUS_VARIABLE(str) MSGTEST_CONCATENATE(str, __LINE__)


#endif //MSGTEST_MACROS_H