#include <iostream>
using namespace std;

class IWorker abstract
{
public:
    virtual void Work() abstract;
    virtual void GainSalary() abstract;
    virtual void QuitJob()abstract;
};

class IWarehouseOperator
{
public:
    virtual void AddProduct() abstract;
    virtual void RemoveProduct() abstract;
    virtual void EditProduct() abstract;
};

class IWarehouseManager
{
public:
    virtual void BrowseProducts()abstract;
    virtual void ManageInventory() abstract;
};

class IWarehouseMerchandise
{
public:
    virtual void BrowseProducts() abstract;
    virtual void MarkProducts() abstract;

};

class IWarehouseLoader {
public:
    virtual void LoadProducts() abstract;
    virtual void UnloadProducts() abstract;
};


class IWarehouseQualityControl {
public:
    virtual void InspectProducts() abstract;
    virtual void SortProducts() abstract;
};


class WarehouseOperator : public IWarehouseOperator, public IWorker {
public:

    void Work() override
    {
        cout << "Warehouse operator is working \n";
    }

    void AddProduct() override {
        cout << "Warehouse operator is adding a product\n";
    }

    void RemoveProduct() override {
        cout << "Warehouse operator is deleting a product\n";
    }

    void EditProduct() override {
        cout << "Warehouse operator is editing a product\n";
    }
};

class WarehouseManager : public IWarehouseManager, public IWorker {
public:
    void Work() override {
        cout << "Warehouse manager is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse manager is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse manager is quitting the job\n";
    }

    void BrowseProducts() override {
        cout << "Warehouse manager is browsing products\n";
    }

    void ManageInventory() override {
        cout << "Warehouse manager is managing inventory\n";
    }
};

class WarehouseMerchandise : public IWarehouseMerchandise, public IWorker {
public:
    void Work() override {
        cout << "Warehouse merchandise specialist is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse merchandise specialist is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse merchandise specialist is quitting the job\n";
    }

    void BrowseProducts() override {
        cout << "Warehouse merchandise specialist is browsing products\n";
    }

    void MarkProducts() override {
        cout << "Warehouse merchandise specialist is marking products\n";
    }
};

class WarehouseLoader : public IWarehouseLoader, public IWorker {
public:
    void Work() override {
        cout << "Warehouse loader is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse loader is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse loader is quitting the job\n";
    }

    void LoadProducts() override {
        cout << "Warehouse loader is loading products\n";
    }

    void UnloadProducts() override {
        cout << "Warehouse loader is unloading products\n";
    }
};

class WarehouseQualityControl : public IWarehouseQualityControl, public IWorker {
public:
    void Work() override {
        cout << "Warehouse quality control specialist is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse quality control specialist is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse quality control specialist is quitting the job\n";
    }

    void InspectProducts() override {
        cout << "Warehouse quality control specialist is inspecting products\n";
    }

    void SortProducts() override {
        cout << "Warehouse quality control specialist is sorting products\n";
    }
};

int main()
{
    IWarehouseLoader* loader = new WarehouseLoader;
    loader->LoadProducts();
}