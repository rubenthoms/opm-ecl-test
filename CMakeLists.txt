project(TestEclFile)
cmake_minimum_required(VERSION 2.8)

find_library(libopmcommon libopmcommon_python.cpython-38-x86_64-linux-gnu.so PATHS /home/ruben/.local/lib/python3.8/site-packages/opm)

include_directories(/home/ruben/repos/build/opm-common/install/include)
link_directories(/home/ruben/.local/lib/python3.8/site-packages/opm)

ADD_EXECUTABLE(TestEclFile test-eclfile.cpp)
target_link_libraries(TestEclFile ${libopmcommon})