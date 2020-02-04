CMake_minimum_required (VERSION 3.5)

project(kapitelZweiSoundex
        VERSION 1.0
        DESCRIPTION "Soundex-Beispiel des 2.Kapitels"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_executable(SoundexTest SoundexTest.cpp)

target_link_libraries(SoundexTest pthread)
#target_link_libraries(SoundexTest gmock)
target_link_libraries(SoundexTest gtest_main) #Stellt Main-Methode bereit
#target_link_libraries(SoundexTest gtest)


install(TARGETS SoundexTest DESTINATION bin) #make install --> /usr/local