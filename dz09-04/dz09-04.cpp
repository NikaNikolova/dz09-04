#include <iostream>
using namespace std;

class Employee {
public:
    virtual void performTask() = 0;
    virtual void receiveWages() = 0;
    virtual void resign() = 0;
};

class ProductManager {
public:
    virtual void stockProduct() = 0;
    virtual void discardProduct() = 0;
    virtual void modifyProductDetails() = 0;
};

class InventorySupervisor {
public:
    virtual void reviewStock() = 0;
    virtual void overseeInventory() = 0;
};

class MerchandiseInspector {
public:
    virtual void inspectMerchandise() = 0;
    virtual void tagMerchandise() = 0;
};

class CargoHandler {
public:
    virtual void loadCargo() = 0;
    virtual void unloadCargo() = 0;
};

class QualityAssuranceOfficer {
public:
    virtual void checkQuality() = 0;
    virtual void categorizeItems() = 0;
};

class Operator : public ProductManager, public Employee {
public:
    void performTask() override {
        cout << "Operator is actively working.\n";
    }
    void stockProduct() override {
        cout << "Operator is stocking a new product.\n";
    }
    void discardProduct() override {
        cout << "Operator is removing a product.\n";
    }
    void modifyProductDetails() override {
        cout << "Operator is updating product details.\n";
    }
};

class Manager : public InventorySupervisor, public Employee {
public:
    void performTask() override {
        cout << "Manager overseeing operations.\n";
    }
    void receiveWages() override {
        cout << "Manager receiving salary.\n";
    }
    void resign() override {
        cout << "Manager resigning from position.\n";
    }
    void reviewStock() override {
        cout << "Manager reviewing product list.\n";
    }
    void overseeInventory() override {
        cout << "Manager overseeing the entire stock.\n";
    }
};

class Merchandiser : public MerchandiseInspector, public Employee {
public:
    void performTask() override {
        cout << "Merchandiser arranging products.\n";
    }
    void receiveWages() override {
        cout << "Merchandiser collecting pay.\n";
    }
    void resign() override {
        cout << "Merchandiser leaving the job.\n";
    }
    void inspectMerchandise() override {
        cout << "Inspecting merchandise quality and placement.\n";
    }
    void tagMerchandise() override {
        cout << "Tagging merchandise with prices and codes.\n";
    }
};

class Loader : public CargoHandler, public Employee {
public:
    void performTask() override {
        cout << "Loader processing items.\n";
    }
    void receiveWages() override {
        cout << "Loader getting paid.\n";
    }
    void resign() override {
        cout << "Loader quitting job.\n";
    }
    void loadCargo() override {
        cout << "Loading items onto transport.\n";
    }
    void unloadCargo() override {
        cout << "Unloading items from transport.\n";
    }
};

class QualityControl : public QualityAssuranceOfficer, public Employee {
public:
    void performTask() override {
        cout << "Quality control specialist assessing items.\n";
    }
    void receiveWages() override {
        cout << "Quality control specialist receiving wages.\n";
    }
    void resign() override {
        cout << "Quality control specialist resigning.\n";
    }
    void checkQuality() override {
        cout << "Inspecting product quality.\n";
    }
    void categorizeItems() override {
        cout << "Sorting products based on quality standards.\n";
    }
};

int main()
{
    Employee* staffMember = new Loader();
    staffMember->performTask();
    delete staffMember;
}
