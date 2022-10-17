#include <iostream>
#include <vector>
#include <random>
#include <functional>
#include <algorithm>
using namespace std;
typedef vector<char> char_array;
char_array charset(){
    return char_array( 
    {'0','1','2','3','4',
    '5','6','7','8','9'
    });};
string random_string( size_t length, function<char(void)> rand_char ){
    string str(length,0);
    generate_n( str.begin(), length, rand_char );
    return str;}
int main(){
    const auto ch_set = charset();   
    default_random_engine rng(random_device{}());
    uniform_int_distribution<> dist(0, ch_set.size()-1);
    auto randchar = [ ch_set,&dist,&rng ](){return ch_set[ dist(rng) ];};      
    auto length = 9999999;
    cout << random_string (length , randchar) << endl;
    return 0;}