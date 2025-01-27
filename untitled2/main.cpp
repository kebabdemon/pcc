#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;


int giveMeNumber(int number) {
    return number;
}

template <class T>
void printVec(const vector<T>& vec)
        {
    for(auto &item : vec){
        cout << item  << " ,";

    }
            cout << endl;
}

template <class T>
void printList(const list<T>& list)
{
    for(auto &item : list){
        cout << item  << " ,";

    }
    cout << endl;
}




//pro map
template <class T>
    list<T> insert(list<T> old, T value)
{
    old.push_front(value);
    return old;
};


//pro map
template <class T>
list<T> tail(list<T> old)
{

    old.pop_front();
    return old;
}

template <class T>
list<T> mapgeneric(list<T> input)
{
    list<T> res = insert(input, input.front());

    //cout << tail(input) << endl;

    mapgeneric(tail(input));

    return res;


}

//pro reduce
template <class T>
T reduce(list<T> input, int accum)
{
    list<T> res =

}


int main() {

    const int a = 5;

    vector<int> vec = {1,2,10,2,0,5};

    printVec(vec);

    cout << "Hello, World!" << endl;

    sort(vec.begin(),vec.end());

    printVec(vec);

    // od druhého prvku
    sort(next(vec.begin()),vec.end());
    sort(vec.begin()+1,vec.end());

    printVec(vec);



    // lambda

    auto sortable = [](int a, int b){return a>b;};
    vector<int> vec2 = {1,2,10,2,0,5};


    sort(vec2.begin(),vec2.end(), sortable);

    printVec(vec2);




    const int num = giveMeNumber(10);
    giveMeNumber(giveMeNumber(15));


    list<int> l = {1,2,3,4,6,7};
    printList(l);

    mapgeneric(l);
    printList(l);








    return 0;



}
