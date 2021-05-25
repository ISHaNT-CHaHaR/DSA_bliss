#include<iostream>
#include<list>

using namespace std;

class Graph{
        int V;

        list<int> *adj;

    public: 

        Graph(int V);
        
        void addEdge(int v, int w);

        void removeEdge(int v, int w);

        void BFS(int s); /// print BFS from this source

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
                adj[v].remove(w);

        }

        void Graph::BFS(int S){
            bool *visited = new bool[V];
                for(int i = 0; i<V;i++){
                    visited[i] = false;
                }

                list<int> queue;

                visited[S] = true; 
                queue.push_back(S);

                list<int>::iterator i;

                while(!queue.empty()){

                    S = queue.front();/// print firts variable and dequeue the queue. 
                    cout<<S<<" ";
                    queue.pop_front();

                            for(i= adj[S].begin() ; i!= adj[S].end(); i++){
                                if(!visited[*i]){  /// check if the variable is visited. 
                                        visited[*i] = true; // IF not visited, mark visited and add it to the queue.
                                        queue.push_back(*i);
                                }
                            }            
                  }
                  cout<<endl;

                    
        }


        int main(){

            Graph g(4);

            g.addEdge(0,1);
            g.addEdge(0,2);
            g.addEdge(2,3);
          
            
           

           cout<<"BFS : ";
           g.BFS(0);



            g.removeEdge(2,3);

            g.BFS(0);
        





            return 0;
        }