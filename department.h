// department.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Department
{
private:
    std::string  DepartmantName;
    int NumOfTeachers;
    std::string HeadName;
    std::string HeadsAddress;
    std::string HeadsHomePhoneNumber;
    std::string HeadsWorkPhoneNumber;

public:
    Department() {}
    Department(std::string  InDepartmantName, int InNumOfTeachers, std::string InHeadName, std::string InHeadsAddress, std::string InHeadsHomePhoneNumber, std::string InHeadsWorkPhoneNumber)
    {
        DepartmantName = InDepartmantName;
        NumOfTeachers = InNumOfTeachers;
        HeadName = InHeadName;
        HeadsAddress = InHeadsAddress;
        HeadsHomePhoneNumber = InHeadsHomePhoneNumber;
        HeadsWorkPhoneNumber = InHeadsWorkPhoneNumber;
    }

    Department(const Department& Other)
    {
        DepartmantName = Other.DepartmantName;
        NumOfTeachers = Other.NumOfTeachers;
        HeadName = Other.HeadName;
        HeadsAddress = Other.HeadsAddress;
        HeadsHomePhoneNumber = Other.HeadsHomePhoneNumber;
        HeadsWorkPhoneNumber = Other.HeadsWorkPhoneNumber;
    }

    std::string  GetDepartmnetName() { return DepartmantName; };
    int  GetNumOfTeachers() { return NumOfTeachers; };
    std::string  GetHeadName() { return HeadName; };
    std::string  GetHeadsAddress() { return HeadsAddress; };
    std::string  GetHeadsHomePhoneNumber() { return HeadsHomePhoneNumber; };
    std::string  GetHeadsWorkPhoneNumber() { return HeadsWorkPhoneNumber; };

    std::string GetDepartmnetInfo()
    {
        return DepartmantName + ":" +
            "\n| Number of teachers=" + std::to_string(NumOfTeachers) +
            "\n| Head Name=" + HeadName +
            "\n| Heads Address=" + HeadsAddress +
            "\n| Heads Home Phone Number=" + HeadsHomePhoneNumber +
            "\n| Heads Work Phone Number=" + HeadsWorkPhoneNumber + "\n";
    }

};

class Teacher 
{
private:
    std::string Name;
    std::string Position;
    std::string Degree;
    std::string AcademicTitle;
    std::string Address; 
    std::string HomePhoneNumber;
    std::string WorkPhoneNumber;
    std::string MateritalState;
    int NumOfChildren;
    int Salary;
    std::string EmploymentDate;
    Department Dep;

public:
    Teacher(
            std::string InName,
            std::string InPosition,
            std::string InDegree,
            std::string InAcademicTitle,
            std::string InAddress,
            std::string InHomePhoneNumber,
            std::string InWorkPhoneNumber,
            std::string InMateritalState,
            int InNumOfChildren,
            int InSalary,
            std::string InEmploymentDate,
            Department InDep
        ) 
    {
        Name = InName;
        Position = InPosition;
        Degree = InDegree;
        AcademicTitle = InAcademicTitle;
        Address = InAddress;
        HomePhoneNumber = InHomePhoneNumber;
        WorkPhoneNumber = InWorkPhoneNumber;
        MateritalState = InMateritalState;
        NumOfChildren = InNumOfChildren;
        Salary = InSalary;
        EmploymentDate = InEmploymentDate;
        Dep = InDep;
    }
    


    std::string GetTeacherInfo()
    {
        return Name + ":" +
            "\n| Position=" + Position +
            "\n| Degree=" + Degree +
            "\n| AcademicTitle=" + AcademicTitle +
            "\n| Address=" + Address +
            "\n| HomePhoneNumber=" + HomePhoneNumber +
            "\n| WorkPhoneNumber=" + WorkPhoneNumber +
            "\n| MateritalState=" + MateritalState +
            "\n| NumOfChildren=" + std::to_string(NumOfChildren) +
            "\n| Salary=" + std::to_string(Salary) +
            "\n| EmploymentDate=" + EmploymentDate + "\n"
            ;
    }

    std::string GetDepartmnetInfo()
    {
        return Dep.GetDepartmnetInfo();
    }

    std::string GetTeacherAllInfo()
    {
        return GetTeacherInfo() + GetDepartmnetInfo();
    }

    std::string  GetName() { return Name; };
    std::string  GetPosition() { return Position; };
    std::string  GetDegree() { return Degree; };
    std::string  GetAcademicTitle() { return AcademicTitle; };
    std::string  GetAddress() { return Address; };
    std::string  GetHomePhoneNumber() { return HomePhoneNumber; };
    std::string  GetWorkPhoneNumber() { return WorkPhoneNumber; };
    std::string  GetMateritalState() { return MateritalState; };
    int  GetNumOfChildren() { return NumOfChildren; };
    int  GetSalary() { return Salary; };
    std::string  GetInEmploymentDate() { return EmploymentDate; };

};
