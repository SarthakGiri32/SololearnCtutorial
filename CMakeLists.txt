cmake_minimum_required(VERSION 3.31)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled IntroductionToC/BasicConcepts/main.c
        IntroductionToC/BasicConcepts/FormatSpecifiers.c
        IntroductionToC/BasicConcepts/Variables.c
        IntroductionToC/BasicConcepts/DataTypes.c
        IntroductionToC/BasicConcepts/Percentage.c
        IntroductionToC/BasicConcepts/Ticketing.c
        IntroductionToC/ConditionalsAndLoops/UserInput.c
        IntroductionToC/ConditionalsAndLoops/BodyMassIndex.c
        IntroductionToC/ConditionalsAndLoops/GameControls.c
        IntroductionToC/ConditionalsAndLoops/OilChange.c
        IntroductionToC/ConditionalsAndLoops/DrawingStars.c
        IntroductionToC/ConditionalsAndLoops/Pagination.c
        IntroductionToC/ArraysAndStrings/AverageTemperatures.c
        IntroductionToC/ArraysAndStrings/GameResults.c
        IntroductionToC/ArraysAndStrings/WhichLetter.c
        IntroductionToC/ArraysAndStrings/BaggageFees.c
        IntroductionToC/ArraysAndStrings/BaggageFeeCalculatorV2.c)
