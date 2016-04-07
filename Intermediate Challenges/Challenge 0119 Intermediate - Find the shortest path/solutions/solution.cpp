/**************************
 * Author: Casper Winsnes
 *
 * Description: Reads an integer N followed by NxN chars, 
 * then calculates the distance from S to E in that map.
 * Special characters are:
 *  S: the start node
 *  E: the end node
 *  W: inpenetrable wall
 *
 * Note: requires at least C++11 to compile.
 *
 * Last modified: Sun 20 Mar, 2016.
 * 
 **************************/
#include <iostream>
#include <sstream>
#include <queue>
#include <vector>
#include <limits>
#include <unordered_map>

/**
 * Simple graph structure.
 * neighbours maps the edges from each node to its neighbours.
 */
struct graph {
  std::unordered_map<std::string, std::vector<std::string> > neighbours;

  /**
   * Finds the distance from start to end using a BFS search.
   *
   * @returns the distance from start to end, in number of nodes, or 
   * std::numeric_limits<int>::max() if no path could be found.
   */
  int bfs(std::string start, std::string end) {
    std::queue<std::string> Q;
    std::unordered_map<std::string, int> distance;
    std::unordered_map<std::string, std::string> parent;

    for(auto it = neighbours.begin(); it != neighbours.end(); ++it) {
      distance.emplace(it->first, std::numeric_limits<int>::max());
      parent.emplace(it->first, "");
    }

    Q.emplace(start);
    distance[start] = 0;

    while(!Q.empty()) {
      std::string current = Q.front();
      Q.pop();

      for(std::string neighbour : neighbours[current]) {
        if(distance[neighbour] == std::numeric_limits<int>::max()) {
          distance[neighbour] = distance[current] + 1;
          parent[neighbour] = current;
          Q.push(neighbour);
        }
      }
    }

    return distance[end];
  }
};

/**
 * Utility function to create ids from a position.
 */
std::string get_id(int x, int y) {
  std::stringstream id;
  id << "r" << x << "c" << y;
  return id.str();
}

/**
 * Reads the required input and calculates the distance from S to E in the map using BFS.
 */
int main() {
  int N;
  std::cin >> N;
  char current;
  graph g;
  std::string start;
  std::string end;

  for(int i=0; i<N; ++i) {
    for(int j=0; j<N; ++j) {
      std::cin >> current;
      std::string id = get_id(i,j);

      switch(current) {
        case 'W':
          //By not creating any edges from walls to neighbours we make sure that
          //any path into a wall is a dead end.
          continue;
        case 'S':
          start = id;
          break;
        case 'E':
          end = id;
          break;
      }

      g.neighbours.emplace(id, std::vector<std::string>());
      if(i > 0) {
        g.neighbours[id].emplace_back(get_id(i-1, j));
      }
      if(i < N-1) {
        g.neighbours[id].emplace_back(get_id(i+1, j));
      }
      if(j > 0) {
        g.neighbours[id].emplace_back(get_id(i, j-1));
      }
      if(j < N-1) {
        g.neighbours[id].emplace_back(get_id(i, j+1));
      }
    }
  }

  int dist = g.bfs(start, end);
  if(dist < std::numeric_limits<int>::max()) {
    std::cout << "True," << dist << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }

}
