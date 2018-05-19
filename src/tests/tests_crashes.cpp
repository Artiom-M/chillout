#include <float.h>
#include <gtest/gtest.h>
#include "tests_source.h"

TEST (CrashTest, PureVirtualMethodCallTest) {
    ASSERT_DEATH(Derived(), "");
}

TEST (CrashTest, AccessViolationTest) {
    ASSERT_DEATH(AccessViolation(), "");
}

// This test is disabled because of CRT assert window.
// This window could be disabled for a process but
// gtest starts new process for DEATH tests so it
// makes no sense to run it.
// TEST (CrashTest, InvalidParameterTest) {
//     ASSERT_DEATH(InvalidParameter(), "");
// }

TEST (CrashTest, SigillTest) {
    ASSERT_DEATH(RaiseSigill(), "");
}

TEST (CrashTest, SigsegvTest) {
    ASSERT_DEATH(RaiseSigsegv(), "");
}

TEST (CrashTest, SigtermTest) {
    ASSERT_DEATH(RaiseSigterm(), "");
}

TEST (CrashTest, ThrowExceptionTest) {
    ASSERT_ANY_THROW(ThrowException());
}

TEST (CrashTest, MemoryTest) {
    ASSERT_ANY_THROW(MemoryOverflow());
}
