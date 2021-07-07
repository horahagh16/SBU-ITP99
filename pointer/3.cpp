#include <iostream>
#include <stdlib.h>

using namespace std;

const int t = 10000000;

void troubleshoot()
{
    cout << "Searching for problems..." << endl;

    // note: () after new int[] will set allocated bytes to zero
    // https://stackoverflow.com/questions/7546620/operator-new-initializes-memory-to-zero
    int* mem = new int[t](); // in case we need it

    int counter = 0;
    for (int i = 0; i < t; ++i) {
        if (mem[i] == 0)
            counter++;
    }

    if (counter != t) {
        cout << "There is an error in memory allocation" << endl;
        delete[] mem;
    } else {
        cout << "We didn't find any problems" << endl;
        /*//*/ delete[] mem; // don't delete because didn't find anything
    }
}

void memory_safe()
{
    cout << "safest cpp function in the universe" << endl;
    int* d = new int[t];
    int* d_bpk = d;

    for (int i = 0; i < t; ++i) {
        //delete d;
        d++;
    }

    delete[] d_bpk;
}

void memory_safe_2()
{
    cout << "we want to debug last code!" << endl;

    const double* d = new double[t];

    /*for (int i = 0; i < t; ++i) {
        delete (d + i); // delete every element from memory
    }*/

    delete[] d;
}

void stupid_allocator()
{
    cout << "just one in twelve" << endl;

    int* a = NULL;
    for (int i = 0; i < t; ++i) {
        if (i % /*1*/2 != 0) {
            a = new int;
        } else {
            delete a;
        }
    }
}

int* f()
{
    return new int;
}

int* g()
{
    int* i = f();
    int* j = i;
    *i = 5;
    cout << *i << endl;

    //delete j; // we dont need it HERE

    return i;
}

void dp()
{
    int* j = g();
    cout << *j << endl;
    delete j; // j is done;
}

void wait()
{
    cout << "enter any character to continue..." << endl;
    char a /*= *(new char[t])*/;
    cin >> a;
}

int main()
{
    troubleshoot();
    wait();

    stupid_allocator();
    wait();

    memory_safe();
    wait();

    memory_safe_2();
    wait();

    dp();
    wait();

    return 0;
}
