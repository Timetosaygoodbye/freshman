#include <iostream>  
using namespace std;  
//дя 
int M[20][20];  
int main(){  
    int n, r1, c1, r2, c2, k;   
    cin >> n ;    
    if ( n%2 == 1){  
        r1 = n/2;  
        c1 = n/2;     
        k = n;  
    }else{  
        r1 = n/2 - 1;  
        c1 = n/2 - 1;  
        k = n-1;  
    }  
    r2 = r1 + 1;      
    c2 = c1;  
      
    int r, c;  
    int count;    
    for (int i =1; i<=k; i++){  
          
        count = i*i;  
        if (i%2 == 1){  
            int offset = i/2;  
            r = r1-offset;  
            c = c1+offset;  
            M[r][c] = i*i;                
                          
  
            for (int j=0; j< i+1; j++){  
                if (j == 0){  
                    r = r;     
                    c = c + 1;    
                }else{  
                    r = r + 1;         
                    c = c;            
                }  
                M[r][c] = (++count);                  
            }   
                      
          
            while (count<(i+1)*(i+1)){  
                r = r;        
                c = c - 1;    
                M[r][c] = (++count);                  
            }             
        }else{  
            int offset = i/2 - 1;  
              
            r = r2+offset;  
            c = c2-offset;  
            M[r][c] = i*i;  
              
      
            for (int j=0; j<i+1; j++){  
                if (j == 0){  
                    r = r;    
                    c = c - 1;    
                } else{  
                    r = r - 1;     
                    c = c;    
                }   
                M[r][c] = (++count);  
            }   
              
              
            while (count<(i+1)*(i+1)){  
                r = r;        
                c = c + 1;    
                M[r][c] = (++count);                  
            }     
        }  
    }     
      
    for (int i=0; i<n; i++){  
        for (int j=0; j<n; j++){  
            if (j == n-1){  
                cout<<M[i][j];  
            }else{  
                cout<<M[i][j]<<" ";  
            }  
        }             
        cout<<endl;  
    }  
 
    return 0;  
}  
