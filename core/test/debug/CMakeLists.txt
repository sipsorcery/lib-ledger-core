cmake_minimum_required(VERSION 3.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${CMAKE_BINARY_DIR}/include)
if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)

include_directories(../lib/libledger-test/)

add_executable(ledger-core-debug-tests main.cpp logger_test.cpp)

target_link_libraries(ledger-core-debug-tests gtest gtest_main)
target_link_libraries(ledger-core-debug-tests ledger-core-static)
target_link_libraries(ledger-core-debug-tests ledger-test)

include(CopyAndInstallImportedTargets)
copy_install_imported_targets(ledger-core-debug-tests crypto)

add_test (NAME ledger-core-debug-tests COMMAND ledger-core-debug-tests)