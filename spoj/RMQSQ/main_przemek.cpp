            #include <iostream>
            #include <algorithm>
             
            using namespace std;
             
            int Tmin[100000][17];
            int LOG[100000];
            int values[100000];
            int size;
            
            void ReadValues(){
            	for(int i = 0; i < size; ++i)
                    cin>>values[i];
            }
            
            void GenerateLOG(){
            	for(int i = 2; i <= size; ++i)
                    LOG[i] = LOG[i / 2] + 1;
            }
            
            void CreateTmin(){
            	for(int i = 0; i < size; ++i)
                    Tmin[i][0] = values[i];
                    
                for(int i = 1; (1 << i) <= size; ++i)
                    for(int j = 0; j <= size - (1 << i); ++j)
                        Tmin[j][i] = min(Tmin[j][i - 1], Tmin[j + (1 << (i - 1))][i - 1]);
            }
            
            int Query(int right, int left){
            	int k = LOG[left - right - 1];
            	return min(Tmin[right][k], Tmin[left - (1 << k) + 1][k]);
            }
             
            int main() {
                cin >> size;
                ReadValues();
             
                GenerateLOG();
             
                CreateTmin();
                        
                int right, left, query_amount;
                cin >> query_amount;
                for(int i = 0; i < query_amount; ++i){
                    cin >> right >> left;
                    cout << Query(right, left) << endl;
                }
                
            	return 0;
            }   
