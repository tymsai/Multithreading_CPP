/*
Run Both the programs to see difference in speed
test numbers to get better output:
184056184056
1840560184056
*/

// WITHOUT THREADS

/*
#include<iostream>
#include <chrono>
using namespace std;
typedef unsigned long long int lli;

lli sum, subb;
lli multi(lli add_a, lli add_b){
    for(int i=0; i<581840112; i++){
            sum=add_a+i*add_b+i;
    }
return sum;
}
lli subt(lli sub_a, lli sub_b){
    for(int i=0; i<581840112; i++){
            subb=sub_a+i-sub_b+i;
    }
return subb;
}
int main(){
    int min, sec, c, wn, wm, time;
    lli a=0, b=0;
    cout<<184056184056<<endl;
    cout<<1840560184056<<endl;
    cout<<"Enter the 2 lagre numbers given above to get better results in time\n";
    cin>>a>>b;
    auto start = chrono::system_clock::now();
    cout<<"Result 1  is : "<<multi(a, b)<<endl;
    cout<<"Result 2 is : "<<subt(a, b)<<endl;
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = chrono::system_clock::to_time_t(end); 
    cout<<"Elapsed Time : "<<elapsed_seconds.count()<<"sec";   
    cout<<"\nNow try using multithreading :-)";
    return 0;
}
*/

//WITH THREADS

/*
#include<iostream>
#include<thread>
#include <chrono>
using namespace std;
typedef long long int lli;

lli sum, subb;
lli multi(lli add_a, lli add_b){
    for(int i=0; i<581840112; i++){
            sum=add_a+i*add_b+i;
    }
return sum;
}
lli subt(lli sub_a, lli sub_b){
    for(int i=0; i<581840112; i++){
            subb=sub_a+i-sub_b+i;
    }
return subb;
}
int main(){
    int min, sec, c, wn, wm, time;
    lli a=0, b=0;
    cout<<184056184056<<endl;
    cout<<1840560184056<<endl;
    cout<<"Enter the 2 lagre numbers given above to get better results in time\n";
    cin>>a>>b;
    auto start = chrono::system_clock::now();
    thread th1(multi, a, b);
    thread th2(subt, a, b);
    th1.join();
    th2.join();
    cout<<"Result 1 is : "<<sum<<endl;
    cout<<"Result 2 is : "<<subb<<endl;
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = chrono::system_clock::to_time_t(end); 
    cout<<"Elapsed Time : "<<elapsed_seconds.count()<<"sec";
    cout<<"\nMultithreading is way faster than single main thread :-)";
    return 0;
}
*/
