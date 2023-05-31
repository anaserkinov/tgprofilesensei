#include "Database.hpp"

class MainDatabase {
private:
    static Database database;
public:
    static Database& getDB(){
        return database;
    }
};

Database MainDatabase::database = Database("main_db.db");
