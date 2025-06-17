cmake_minimum_required(VERSION 3.31)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled IntroductionToC/BasicConcepts/main.c
        IntroductionToC/BasicConcepts/FormatSpecifiers.c
        IntroductionToC/BasicConcepts/Variables.c
        IntroductionToC/BasicConcepts/DataTypes.c
        IntroductionToC/BasicConcepts/Percentage.c
        IntroductionToC/BasicConcepts/Ticketing.c
        IntroductionToC/BasicConcepts/UserInput.c)
