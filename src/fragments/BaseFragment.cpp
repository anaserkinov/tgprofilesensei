#include "Fragment.hpp"
#include "Fragments.hpp"
#include "DatabaseController.cpp"

class BaseFragment: public Fragment{
    DatabaseController* dbController = nullptr;
public:

    BaseFragment(int id): Fragment(id){
        
    };

    void setDBController(DatabaseController* dbController){
        this->dbController = dbController;
    }

    ~BaseFragment(){
        Fragment::~Fragment();
    };

};