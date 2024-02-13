project(UnitTests)

find_package(GTest REQUIRED)

enable_testing()

file(GLOB TEST_SRC_FILES CONFIGURE_DEPENDS "*.cpp")

add_executable(
    unit_tests
    ${TEST_SRC_FILES}
)

add_dependencies(unit_tests CoreLib)

target_link_libraries(
    unit_tests
    PRIVATE
    CoreLib
    GTest::gtest
    GTest::gtest_main
    GTest::gmock
    GTest::gmock_main
)

add_test(NAME unit_Tests COMMAND unit_tests)