#include "BaseFragment.cpp"
#include "Fragments.hpp"

class LoginFragment: public BaseFragment{
public:

    LoginFragment(): BaseFragment(Fragments::LOGIN){};


    ~LoginFragment(){
        BaseFragment::~BaseFragment();
    };

};