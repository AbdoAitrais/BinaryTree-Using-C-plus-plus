#include <iostream>
#include "Classes/Tree.cpp"

int main() {
    srand(time(nullptr));
    //Tree<pair<int,string>> ar;
//    ar.insert(5);
//    ar.insert(3);
//    ar.insert(0);
//    ar.insert(6);
//    ar.insert(2);
//    ar.insert(7);
//
//    ar.showInorder();
//
//    ar.deleteElement(6);
//
//    ar.showInorder();

//    ar.insert(make_pair<int,string>(1,"hello"));
//    ar.insert(make_pair<int,string>(5,"hello"));
//    ar.insert(make_pair<int,string>(2,"hello"));
//    ar.insert(make_pair<int,string>(6,"hello"));

    //ar.showGraphicTree();

    Tree<int> ar;

    for (int i = 0; i < 1000000; ++i) {
        ar.insert(rand()%1000000);
    }

    cout << ar.find(15263);



    return 0;

}
