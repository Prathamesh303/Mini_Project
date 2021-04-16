

|Build|Unit Test|cppcheck|Valgrind|Coverage|Git Inspector|
|:--:|:--:|:--:|:--:|:--:|:--:|
| [![C/C++ CI - Build Status](https://github.com/Prathamesh303/Mini_Project/actions/workflows/cbuild.yml/badge.svg)](https://github.com/Prathamesh303/Mini_Project/actions/workflows/cbuild.yml) | [![Unit Testing](https://github.com/Prathamesh303/Mini_Project/actions/workflows/unitTesting.yml/badge.svg)](https://github.com/Prathamesh303/Mini_Project/actions/workflows/unitTesting.yml) |[![cppcheck-action](https://github.com/Prathamesh303/Mini_Project/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Prathamesh303/Mini_Project/actions/workflows/cppcheck.yml)| [![Dynamic Analysis](https://github.com/Prathamesh303/Mini_Project/actions/workflows/dynamic_code_quality.yml/badge.svg)](https://github.com/Prathamesh303/Mini_Project/actions/workflows/dynamic_code_quality.yml) |[![CI-Coverage](https://github.com/Prathamesh303/Mini_Project/actions/workflows/coverage.yml/badge.svg)](https://github.com/Prathamesh303/Mini_Project/actions/workflows/coverage.yml) |[![Contribution check](https://github.com/Prathamesh303/Mini_Project/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Prathamesh303/Mini_Project/actions/workflows/gitinspector.yml)|



# College Management  System 

It provides you with the following  functions :

* Displaying  the Course Details that includes Subject and Professor  Details 
* Displaying the Room Details if the Room that you want for your work is already  occupied than it provides  with list of room which are not occupied .
* Displaying the Committee Details .


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
## Contributors List and Summary
PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No of Test Cases|Test Case Pass
---------|-------------|----------------|----------------|---------------|-------------|--------------
`259958` | Prathamesh Dalvi  | SC1, SC2, SC3, SC4, SC5, SC6, SC7| 0   | 0  | 4   | 4   

| No |Feature  |
|--|--|
| SC1 |Displaying the Course  Details   |
| SC2 | Displaying the Room  Details |
| SC3 |Displaying the Committee Details  |
| SC4 |Unit Testing the code with various testcases |
| SC5 |Building the all workflows In Git |
| SC6 |Designing each module with readme files |
| SC7 |Gathering all requirments and designing each phase |
## Challenge Faced and How Was It Overcome
| No |Challenge  | Solution
|--|--|--|
| 01 | Output was 0 even after entering correct input  | Read the text file using fscanf function due to which correct data was stored in the array of structure |
| 02 | Make file not working even after following all steps  | Added make to environment variables  |
