// Teachers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <department.h>

int main()
{
    Department SomeDepartment("CarDesignDepartment", 5, "Mykalenko Mykolai Mykolaiyovych", "Kyiv, Zabolotnogo str. 19", "+380978000000", "+3809781111111");

    Teacher T1("Petrenko Petro Petrovych",
                    "Math teacher",
                    "PHD",
                    "PHD2",
                    "Kyiv, Zabolotnogo 10",
                    "+380978000000",
                    "+3809781111111",
                    "Rich",
                    2,
                    35000,
                    "11November2011",
                    SomeDepartment);

    Teacher T2("Ivanenko Ivan Ivanovych",
                    "Math teacher",
                    "PHD",
                    "PHD2",
                    "Kyiv, Zabolotnogo 10",
                    "+380978000000",
                    "+3809781111111",
                    "Rich",
                    2,
                    35000,
                    "11November2011",
                    SomeDepartment);

    Teacher T3("Sergienko Sergiy Sergiyovych",
                "Math teacher",
                "PHD",
                "PHD2",
                "Kyiv, Zabolotnogo 10",
                "+380978000000",
                "+3809781111111",
                "Rich",
                2,
                35000,
                "11November2011",
                SomeDepartment);


    std::cout << T1.GetTeacherAllInfo() << "\n";
    std::cout << T2.GetTeacherAllInfo() << "\n";
    std::cout << T3.GetTeacherAllInfo() << "\n";

    std::cout << T1.GetTeacherInfo() << "\n";

}
