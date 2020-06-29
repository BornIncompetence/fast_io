set(CMAKE_FOLDER "${CMAKE_FOLDER}/0001.forbid_uflow")

test_target(0001 fail)
test_target(0001 nofail)
test_target(0001 stdiowontfail)
