#include <iostream>
#include <vector>
using namespace std;















int main(){

    int pinos;
    int altura;
    cin>>pinos;
    cin>>altura;

    vector<int> vetor1(pinos+1,0);

    int contador = 0;
    for (int i = 0; i < pinos; i++)
    {
        cin>>vetor1[i];
    }



    for (int i = 0; i < pinos; i++)
    {
            while (vetor1[i]!=altura)
            {
                contador++;
                if (vetor1[i]<altura)
                {
                    vetor1[i]+=1;
                    vetor1[i+1]+=1;
                }
                else if(vetor1[i]>altura)
                {
                    vetor1[i]-=1;
                    vetor1[i+1]-=1;
                }
                
                
            }
            
    }
    

    

    cout<<contador;

    



}