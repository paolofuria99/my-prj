#include <iostream>

#include "my_fraction.h"
#include "cxx_examples.h"
#include "linked_list.h"

using namespace std;

int main(int, char**) {

    LinkedList* ll = init();

    add(ll, "a");
    add(ll, "b");
    add(ll, "c");

        
    cout << to_string(ll) << endl;

    cout << "size:" << size(ll) << endl;

    add(ll, "d");

    cout << to_string(ll) << endl;

    cout << "size:" << size(ll) << endl;


    cout << "search(ll,\"a\"): " << (search(ll, "a") ? "true" : "false") << endl;

    cout << "search(ll,\"z\"): " << (search(ll, "z")  ? "true" : "false") << endl;

    cout << pop(ll) << endl;    
    
    cout << to_string(ll) << endl;

    cout << pop(ll) << endl;    

    cout << to_string(ll) << endl;

    cout << pop(ll) << endl;    
    
    cout << to_string(ll) << endl;

    cout << pop(ll) << endl;    
    
    cout << to_string(ll) << endl;

    // to test exception
    // cout << pop(ll) << endl;            

    destroy(ll);

    cout << "destroyed"  << endl;    

} 
