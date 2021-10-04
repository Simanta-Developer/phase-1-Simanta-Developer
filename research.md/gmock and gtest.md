# :boom:g-Mock :
* [gMock](https://chromium.googlesource.com/external/github.com/google/googletest/+/HEAD/docs/gmock_for_dummies.md) is a library (sometimes we also call it a “framework”) for creating mock classes and using them. It does to C++ what jMock/EasyMock does to Java (well, more or less).
* When using gMock,
>> 1. First, you use some simple macros to describe the interface you want to mock, and they will expand to the implementation of your mock class.
>> 2. Next, you create some mock objects and specify its expectations and behavior using an intuitive syntax.
>> 3. Then you exercise code that uses the mock objects. gMock will catch any violation to the expectations as soon as it arises.
* To read the dummy guide for gMock [click here](http://google.github.io/googletest/gmock_cook_book.html).
* For gMock **cheat sheet** [click here](https://google.github.io/googletest/gmock_cheat_sheet.html). 
# :boom:g-test :
* Google Test (also known as gtest for e.g. the ROS environment) is a unit testing library for the C++ programming language, based on the xUnit() architecture.
* [g-test](https://google.github.io/googletest/) Commonly used in conjunction with Google Mock.
* [FEATURES](http://donsoft.io/gmock-presentation/#/4/2) : 
>> 1.Rich set of assertions
>> 
>> 2.Value-parametrised tests.
>> 
>> 3.Type-parametrised tests.
>> 
>> 4.Death tests.
>> 
>> 5.Test discovery.
>> 
>> 6.XML test report generation.
>> 
>> 7.Multi-threaded tests.
* Gtest is a framework for unit testing. Gmock is a framework imitating the rest of your system during unit tests. 
* [Click here](https://github.com/google/googletest) for accessing github repository of google test. 




 

