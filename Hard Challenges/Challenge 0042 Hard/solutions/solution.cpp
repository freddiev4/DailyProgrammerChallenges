#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <set>
#include <utility>
#include <vector>

/*
Solution: Challenge #0042 [HARD].

Build: g++ -o solution solution.cpp

Assumptions:
    - Node ids are >= 0
    - Node ids are consecutive
    - Nodes have atleast one edge

Time Complexity: O(|E| + |V|)
Space Complexity: O(|V|)

Description:
    This solution assigns a single parent to each connected component
of the input graph. Initially all nodes are their own parent as no
edges exist. When an edge is added, the parent is computed for both
nodes. If they are different, one of the nodes is picked as the new
parent and the other is assigned as a child to it. This can be done
efficiently using a disjoint-set with path compression. The solution
can be easily adapted to remove the above assumptions by mapping user
node ids to an internal consecutive id space.
*/

using namespace std;

typedef pair< unsigned, unsigned > edge;

typedef unsigned node;
typedef vector< node > node_list;

typedef set< node > node_set;
typedef map< node, node_set > node_map;

bool read_edge( edge& out )
{
    cin.ignore( numeric_limits< streamsize >::max( ), '(' );
    if( !cin) return false;
    cin >> out.first;

    cin.ignore( numeric_limits< streamsize >::max( ), ',' );
    if( !cin ) return false;
    cin >> out.second;    

    return true;
}

node parent( node_list& v, node n )
{
    if( n >= v.size( ) ) {
        for( unsigned i = v.size( ); i <= n; i++ ) {
            v.push_back( i );
        }
    }
    if( v[ n ] == n ) return n;
    v[ n ] = parent( v, v[ n ] );

    return v[ n ];
}
void add_edge( node_list& v, edge e )
{
    node fp = parent( v, e.first );
    node sp = parent( v, e.second );
    
    if( fp != sp ) v[ max( fp, sp ) ] = v[ min( fp, sp ) ];
}

int main( )
{
    node_list v;
    edge e;
    while( read_edge( e ) ) {
        add_edge( v, e );
    }
    node_map groups;
    for( unsigned i = 0; i < v.size( ); i++ ) {
        groups[ parent( v, i ) ].insert( i );
    }

    for( node_map::iterator g = groups.begin( ); g != groups.end( ); g++ ) {
        node_set& group = g->second;
        for( node_set::iterator n = group.begin( ); n != group.end( ); n++ ) {
            if( n != group.begin( ) ) cout << ' ';
            cout << *n;
        }
        cout << endl;
    }

    return 0;
}
