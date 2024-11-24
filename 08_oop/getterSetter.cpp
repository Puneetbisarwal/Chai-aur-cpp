#include <iostream>
#include <vector>


using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"Water", "tea leaves"};
        }

        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }

        //getter
        string getTeaName() {
            return teaName;
        }

        //setter
        void setTeaName(string name){
            //logic
            teaName = name;
        }

        //getter for serving
        int getServings() {
            return servings;
        }

        //setter for servings
        void setServings(int serve){
            servings = serve;
        }

        //getter for ingre
        vector<string> getIngredients() {
            return ingredients;
        }

        //settter for ingre

        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        }

        void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for(string ingridient : ingredients){
            cout << ingridient << " ";
        }
        cout << endl;
    }

};

int main(){
    Chai chai("Lemon Tea", 2, {"Water", "lemon", "Honey"});
    //cout << "Tea Name: " << chai.getTeaName() << endl ;
    //cout << "Servings: " << chai.getServings() << endl ;
    //cout << "Ingredients: " << chai.getIngredients() << endl ;
    chai.displayChaiDetails();

    chai.setTeaName("Ginger tea");
    chai.setServings(3);
    chai.setIngredients({"Water", "Ginger", "Honey", "Sugar"});

    vector<string> temp = chai.getIngredients();

    cout << "Updated Tea Name: " << chai.getTeaName() << endl ;
    cout << "Updated Servings: " << chai.getServings() << endl ;
    cout << "Updated Ingredients: " ;
    for(string ingridient : temp){
                cout << ingridient << " ";
            }
    cout << endl ;


    return 0;
}
