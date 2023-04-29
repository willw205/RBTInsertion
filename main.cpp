 #include "Node.h"
 #include <cstring>
 #include <iostream>
 #include <fstream>
 using namespace std;

 //Sources used for Red Black Tree:
 //https://www.programiz.com/dsa/red-black-tree#:~:text=In%20left%2Drotation%2C%20the%20arrangement,arrangements%20on%20the%20left%20node.&text=If%20y%20has%20a%20left,the%20left%20subtree%20of%20y%20.&text=If%20the%20parent%20of%20x,the%20left%20child%20of%20p%20./

 //Function prototypes here

 int main() {

   bool cont = true;
   char* name = new char[50];
   char userIn = new char[1000];
   Node* root = NULL;
   int value = 0;

   while(cont == true) {

     cout << "Please choose one of these actions --> ADD, READ, PRINT, or QUIT:" <<endl;
     cin >> name;
     cin.ignore();
     if (strcmp(name, "ADD)") == 0) {

       cout << "Please enter the number that you want added: ";
       cin >> value;
       //function here

       cout << endl;
       
     }
     else if (strcmp(name, "READ") == 0) {

       while(cont == true) {

	 cout << "Please enter the name of your file: " << endl;
	 cin.getline(name, 50, '\n');
	 ifstream fileStream (name);
	 if (fileStream.is_open()) {

	   fileStream.getline(userIn, 150);
	   cont = false;
	   
	 }
	 else {
	   cout << "Invalid!" << endl;
	 }
	 fileStream.close();
       }

       cont = true;
       int*numInput = new int[101];
       int size = 0;
       //functiosn here
       
       
     
     
   }
   else if (strcmp(name, "PRINT") == 0) {

     //print function here;
     
   }
   else if (strcmp(name, "QUIT") == 0) {

     cout << "Adios amigo!" << endl;
     cont = false;
     return 0;
     
   }
   else {

     cout << "Invalid! Try again" << endl;
     
   }
  
  } 
   cout << endl;
   return 0;

 }
   
 void leftRotate(Node* blue) {

   if (blue->getRight() == NULL) {
     return;
   }

   Node* yellow = blue->getRight();
   Node* parent = blue->getParent();
   blue->setRight(yellow->getLeft();
   yellow->setLeft(blue);
   blue->setParent(yellow);

   if(blue->getRight() != NULL) {
     
     blue->getRight()->setParent(blue);
		    
   }
   if(parent != NULL) {

    if(blue == parent->getLeft() {
	
      parent->setLeft(yellow);
      
     }
     else if (blue == parent->getRight() {

      parent->setRight(yellow);
			  
     }
		    
    }
      
    yellow->setParent(parent);
		  
 }

 void rightRotate(Node* yellow){

   if (yellow->getLeft() == NULL){
    return;
   }
  
   Node* blue = yellow->getLeft(); 
   Node* parent = yellow->getParent();

   yellow->setLeft(blue->getRight());
   blue->setRight(yellow); 
   yellow->setParent(blue); 

   if (yellow->getLeft() != NULL){
     
     yellow->getLeft()->setParent(yellow);
     
   }
   if (parent != NULL){
     if (yellow == parent->getLeft()){
       
       parent->setLeft(blue);
       
     }
     else if (yellow == parent->getRight()){

       parent->setRight(blue);

     }
   }
   blue->setParent(parent);
 }
