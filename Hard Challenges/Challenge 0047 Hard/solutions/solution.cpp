#include <stdint.h>

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

typedef uint64_t ui64;

static const ui64 MAX_FACT = 20;
static ui64 FACT[ MAX_FACT + 1 ];

string f( ui64 n, ui64 p )
{
	if( n <= MAX_FACT && FACT[ n ] > p ) {
		string res = string( "abcdefghijklmnopqrstuvwxyz", n );
		for( int i = 0; i < n && p != 0; i++ ) {
			ui64 perms = FACT[ n - i - 1 ];
			
			ui64 d = p / perms;
			p = p % perms;
			
			swap( res[ i ], res[ i + d ] );
			sort( &res[ i + 1 ], &res[ n ] );
		}
		return res;
	}
	else {
		return "Out of bounds";
	}
}

int main( ) {
	for( ui64 i = 0, cur = 1; i <= MAX_FACT; cur *= ++i ) {
		FACT[ i ] = cur;
	}
	while( cin ) {
		ui64 n, p;
		
		cin >> n >> p;
		if( ( n == 0 && p == 0 ) || !cin ) break;
		
		cout << "f(" << n << ", " << p << ") = \"" << f( n, p  - 1 ) << '"' << endl;
	}
	
	return 0;
}