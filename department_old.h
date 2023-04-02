// department.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//Створення класу Department

class Department
{
public:
    std::string  DepartmantName;
    int NumOfTeachers;
    std::string HeadName;
    std::string HeadsAddress;
    std::string HeadsHomePhoneNumber;
    std::string HeadsWorkPhoneNumber;

//Методи Departmant

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

//Створення класу Person

class Person 
{
private:
    std::string Name;
    std::string Address; 
    std::string HomePhoneNumber;	
    int NumOfChildren;

public:
    Person(
            std::string InName,
            std::string InAddress,
            std::string InHomePhoneNumber,
            int InNumOfChildren
        ) 
    {
        Name = InName;
        Address = InAddress;
        HomePhoneNumber = InHomePhoneNumber;
        NumOfChildren = InNumOfChildren;
    }
    
    std::string GetPersonInfo()
    {
        return Name + ":" +
            "\n| Address=" + Address +
            "\n| HomePhoneNumber=" + HomePhoneNumber +	
            "\n| NumOfChildren=" + std::to_string(NumOfChildren) +"\n"
            ;
    }

    std::string  GetName() { return Name; };
    std::string  GetAddress() { return Address; };
    std::string  GetHomePhoneNumber() { return HomePhoneNumber; };
    int  GetNumOfChildren() { return NumOfChildren; };
	
};
	

class Teacher 
{
private:
    std::string Position;
    std::string Degree;
    std::string AcademicTitle;
    std::string WorkPhoneNumber;
    std::string MateritalState;
    int Salary;
    std::string EmploymentDate;
    Department Dep;

public:
    Teacher(
            std::string InPosition,
            std::string InDegree,
            std::string InAcademicTitle,
            std::string InWorkPhoneNumber,
            std::string InMateritalState,
            int InSalary,
            std::string InEmploymentDate,
            Department InDep
        ) 
    {
        Position = InPosition;
        Degree = InDegree;
        AcademicTitle = InAcademicTitle;
        WorkPhoneNumber = InWorkPhoneNumber;
        MateritalState = InMateritalState;
        Salary = InSalary;
        EmploymentDate = InEmploymentDate;
        Dep = InDep;
    }

//Створення методу отримання всієї інформації про Teacher
    
    std::string GetTeacherInfo()
    {
        return Name + ":" +
            "\n| Position=" + Position +
            "\n| Degree=" + Degree +
            "\n| AcademicTitle=" + AcademicTitle +
            "\n| WorkPhoneNumber=" + WorkPhoneNumber +
            "\n| MateritalState=" + MateritalState +
            "\n| Salary=" + std::to_string(Salary) +
            "\n| EmploymentDate=" + EmploymentDate + "\n"
            ;
    }

    std::string GetDepartmnetInfo()
    {
        return Dep.GetDepartmnetInfo();
    }

    std::string  GetPosition() { return Position; };
    std::string  GetDegree() { return Degree; };
    std::string  GetAcademicTitle() { return AcademicTitle; };
    std::string  GetWorkPhoneNumber() { return WorkPhoneNumber; };
    std::string  GetMateritalState() { return MateritalState; };
    int  GetSalary() { return Salary; };
    std::string  GetInEmploymentDate() { return EmploymentDate; };
	
};
