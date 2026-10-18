#include<iostream>


using namespace std;

int main(){
    // variable declaration on
    // in order to declare a variable we need to use the keyword  we need to specify the data type of the variable and then store a value since any variable can hold only one value at a time
   // and also variable is  like memory location which store a values 
    //now come on cpp data types including the following
    /*
    integer means  numbers 0, -1 ,2,.... and so on 

    strings means sequence of the collection of the characters like any word like KIUT 

    character this is the singke laters like alphabet A, mean alphabet B etc or grade on marks scoring size of 1 byte

    Boolean means true or false size have 1 bytes

    float means decimal 20.9 size of 4 bytes in size

    double means any numbers which contain a 34,9018765432123 have 8 bytes in size
    
    */

    int y = 10;
    int x = 89;
    int t = 30;
    int t_ = -9;
    cout<< y;
    cout<< x;
    cout<< t;
    cout<< t_;
    cout<< endl;
    // string

    string str1 = "Hello world";
    string str2 = "KIUT";
    cout<< str1 + " " + "iam  study cs in " + str2<<endl;
    
    char grade = 'A';
    char letter = 'B';
    // for characteruse single quotes only dont use double quotes now 
    cout<< grade<<endl;
    cout<< letter<<endl;

    // float 

    float m = 7.2;
    float n = 4.7;

    cout<< m + n <<endl;

     // doubles

    double salry = 90.98;
    double domainCost = 20.99;
    
    cout<< salry + domainCost <<endl;
    // bool  but output will be 0 for false and 1 for true so dont confused 
    bool x1 = true;
    bool y_ = false;
    cout<< x1<<endl;
    cout<< y_ <<endl;
    // try this 

    int sum = x + y;
    cout <<sum<<endl;
    


    return 0;

}