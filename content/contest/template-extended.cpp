#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


#pragma GCC target("avx2")
#pragma GCC optimization("Ofast")
#pragma GCC optimization("unroll-loops")

using namespace __gnu_pbds;

#define cx real()
#define cy imag()
#define precision(x) setprecision(x)<<fixed
#define time chrono::high_resolution_clock().now().time_since_epoch().count()
#ifndef DEBUG
#define DEBUG false
#endif
#define dbg if(DEBUG)

typedef complex<long double> cplx;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef vt<bool> vb;
typedef vt<vb> vvb;
typedef vt<char> vc;
typedef vt<vc> vvc;
typedef vt<string> vs;
typedef vt<vs> vvs;
typedef vt<ld> vld;
typedef vt<vld> vvld;
typedef vt<cplx> vcplx;
typedef vt<vcplx> vvcplx;

template<typename T>
using ordset=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

template<typename T1,typename T2>
ostream& operator<<(ostream &os,pair<T1,T2>& VAR){
	os<<"("<<VAR.e1<<","<<VAR.e2<<")";
	return os;
}

template<typename T>
ostream& operator<<(ostream& os,vt<T>& VAR){
	os<<"[";
	for(int i=0;i<size(VAR)-1;i++)
		os<<VAR[i]<<",";
	if(size(VAR))
		os<<VAR.back();
	os<<"]";
	return os;
}

template<typename T>
istream& operator>>(istream& is,complex<T>& VAR){
	T value;
	is>>value;
	VAR.real(value);
	is>>value;
	VAR.imag(value);
	return is;
}
