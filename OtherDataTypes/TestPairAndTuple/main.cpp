#include <iostream>
#include <iomanip>
#include <tuple>
#include <string>

using namespace std;

// Example of a pair
int main() {
    pair<string, int> pp{"Nancy", 34};
    cout << endl << "Name: " << pp.first << setw(10) << "Age: "
         << pp.second << endl;

    // Change values
    pp = make_pair("Dave", 19);
    cout << "Name: " << pp.first << setw(10) << "Age: " << pp.second
         << endl;

    // Newer approach
    pair pv = pair(23, 19.3);
    cout << endl << "Int: " << pv.first << setw(10) << "Float: "
         << pp.second << endl;

    // Copy values
    // pair pv = pp;       // *** This will not work since value types differ
    pair pp2 = pp;
    cout << endl << "Name: " << pp2.first << setw(10) << "Age: "
         << pp2.second << endl;

    // Swap values
    pp2 = make_pair("Beef", 38);
    cout << "Name: " << pp2.first << setw(10) << "Age: "
         << pp2.second << endl;

    swap(pp2, pp);
    cout << "Name: " << pp2.first << setw(10) << "Age: "
         << pp2.second << endl;

    // Using get<>()
    pair p{2, 3.4};
    pair p2{5, 22.3};
    cout << endl << "Int p: " << get<0>(p) << setw(25)
         << " Double p: " << get<1>(p) << endl;
    cout << "Int p2: " << get<int>(p2) << setw(25)
         << " Double p2: " << get<double>(p2) << endl;

    // Using tuples
    cout << endl << endl << setw(15) << "Tuples";
    cout << endl << setw(30) << setfill('=') << "" << endl;

    tuple<int, string, double, int> tv = {4, "Heyo", 6.34, -8};
    tuple tv2 = make_tuple(2, 'c', 34.2, 13.6);
    tuple tv3{"Hello", 'i', 343, 23.2};

    // Output by index value
    cout << "Value 0: " << get<0>(tv) << " Value 2: " <<
         get<2>(tv) << endl;

    // Output by type (no duplications allowed i.e. no more than 1 int
    cout << "String value: " << get<string>(tv)
         << " Double value: " << get<double>(tv) << endl;

    // Add tuples
    tuple tv4 = tuple_cat(tv, tv2, tv3);
    cout << "Grabs 4th element from tv: " << get<3>(tv4) << endl;

    // Example of tie command
    int num{};
    double dnum{};

    tuple tnum{45, 2.33};
    tie(num, dnum) = tnum;

    cout << endl << "Tie value 1: " << num << setw(20) << setfill(' ')
         << "Tie value 2: " << dnum << endl;

    // Changing values of the tie variables; note it changes the tuple
    num = 33;
    dnum = 1.2;
    cout << "Tuple value 1: " << get<0>(tnum) << setw(20)
            << " Tuple value 2: " << get<1>(tnum) << endl;

    // Ignoring a value from the tie
    num = 2;
    dnum = 3.3;
    char ch = 'A';

    tuple tnum2{44, 6.2, 'y'};
    tie(num, ignore, ch) = tnum2;

    // Note that the double is not from the tuple here
    cout << endl << "double value after the tie: " << dnum;

    // Using structured binding on the above variables.
    // Note that variables don't need to be declared in advance.
    auto [v1, v2, v3] = tnum2;
    cout << endl << "v1: " << v1 << "    v2: " << v2 << "    v3: " << v3 << endl;

    // To actually change the values, we reference it
    auto &[r1, r2, r3] = tnum2;
    cout << endl << "Number before referencing: " << get<0>(tnum2) << endl;
    r1 = 40;
    cout << "Number after referencing: " << get<0>(tnum2) << endl;

    // Another good use of referencing is for naming complex structures
    int points[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    for (auto [a, b, c] : points)
        cout << a << " " << b << " " << c << endl;

    return 0;
}
