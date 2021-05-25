#include<iostream>
#include<list>

using namespace std;

class Graph{  
        int V;  /// Graph to constructed with V number of nodes

        list<int> *adj; // Adjacency list for representation of graph

    public: 

        Graph(int V);
        
        void addEdge(int v, int w);

        void removeEdge(int v, int w);

        float ClusteringCo(int Target);

        void removeLinks(int Source);

};

        Graph :: Graph(int V){
            this->V = V;
            adj = new list<int>[V]; 
        }

        void Graph :: addEdge(int v, int w){
            adj[v].push_back(w);  /// add W to V's list
        }

        void Graph :: removeEdge(int v, int w){
                // list<int> :: iterator i;
                // list<int> :: iterator j;
                // list<int> rqueue;
              
                // for(i = adj[v].begin(); i!= adj[v].end();i++){
                //     rqueue.push_back(*i);
                        
                //     if(w == rqueue.back()){
                //         adj[v].remove(w);
                        
                //     }
                // }
                adj[v].remove(w);   /// REmove W from V's list

        }

        void Graph :: removeLinks(int Source){ /// Remove links between neighbous of Source vertex
            removeEdge(2,3);
            removeEdge(2,4);
            removeEdge(2,5);

            removeEdge(3,4);
            removeEdge(3,5);

            removeEdge(4,5);

        }

        float Graph :: ClusteringCo(int Target){  //// Calculating CLustering Co-efficients
            return 1;

        }
      


        int main(){

            Graph g(6);  /// POpulating a sample Graph

            g.addEdge(1,2);
            g.addEdge(1,3);
            g.addEdge(1,4);
            g.addEdge(1,5);

            g.addEdge(2,3);
            g.addEdge(2,4);
            g.addEdge(2,5);

            g.addEdge(3,4);
            g.addEdge(3,5);

            g.addEdge(4,5);

          
            float CC = g.ClusteringCo(1);  /// Calculating CLustering 


            if(CC > 0){   
                // MAke it zero.
                g.removeLinks(1);  //// Remove Links between neighbours of Target's vertex IF CLustering Coefficient is > 0. 
            }

            return 0;
        }