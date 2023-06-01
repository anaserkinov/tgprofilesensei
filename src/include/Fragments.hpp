#ifndef FRAGMENTS
#define FRAGMENTS

#include "Fragment.hpp"
#include "DatabaseController.hpp"

class Fragments{
public:
    static const int LOGIN = 2;
    

};

class BaseFragment: public Fragment{
    DatabaseController* dbController = nullptr;
public:

    BaseFragment(int id);
    void setDBController(DatabaseController* dbController);
    ~BaseFragment();

};

class LoginFragment: public BaseFragment{
public:

    LoginFragment();

};


#endif