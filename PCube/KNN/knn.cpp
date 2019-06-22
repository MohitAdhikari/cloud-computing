#include<bits/stdc++.h>
using namespace std;
typedef struct knn
{
    float data[4];
    string str;
}knn;

int main(){
    knn dataset[150];
    string line,iris[3]={"Iris-setosa","Iris-versicolor","Iris-virginica"};
    int i=0,k,temp,j,min,class1,class2,class3;
    float dist,sum,a[150][2],total=0,correct=0;
    vector <float> v;
    srand(time(0));
    
    ifstream fin;
    fin.open("iris.data");
    
    //cin>>k;

    //read the dataset into structure
    while(fin){
        getline(fin,line);
        if(line.length()==0)
            break;
        dataset[i].data[0]=stof(line.substr(0,3));
        dataset[i].data[1]=stof(line.substr(4,3));
        dataset[i].data[2]=stof(line.substr(8,3));
        dataset[i].data[3]=stof(line.substr(12,3));
        dataset[i].str=line.substr(16);
        //cout<<dataset[i].str<<" "<<i<<endl;
        i++;
    }

    //shuffle the dataset
    for(j=0;j<i;j++){
        temp=rand()%150;
        swap(dataset[temp].data[0],dataset[j].data[0]);
        swap(dataset[temp].data[1],dataset[j].data[1]);
        swap(dataset[temp].data[2],dataset[j].data[2]);
        swap(dataset[temp].data[3],dataset[j].data[3]);
        swap(dataset[temp].str,dataset[j].str);
    }

    //calculate distance with all test points
    for(int kgroup=1;kgroup<=13;kgroup++){
        total=0;
        correct=0;
        for(int j=104;j<=149;j++){
            class1=0;
            class2=0;
            class3=0;
            total++;
            for(i=0;i<104;i++){
                sum=0;
                sum+=pow((dataset[i].data[0]-dataset[j].data[0]),2);
                sum+=pow((dataset[i].data[1]-dataset[j].data[1]),2);
                sum+=pow((dataset[i].data[2]-dataset[j].data[2]),2);
                sum+=pow((dataset[i].data[3]-dataset[j].data[3]),2);
                dist=sqrt(sum);
                a[i][0]=i;
                a[i][1]=dist;
            }
            for(i=0;i<13;i++){
                min=i;
                for(k=i+1;k<104;k++){
                    if(a[min][1]>a[k][1]){
                        min=k;
                    }
                }
                swap(a[min][0],a[i][0]);
                swap(a[min][1],a[i][1]);
            }
            for(i=0;i<kgroup;i++){
                if(dataset[int(a[i][0])].str==iris[0])
                    class1++;
                else if(dataset[int(a[i][0])].str==iris[1])
                    class2++;
                else if(dataset[int(a[i][0])].str==iris[2])
                    class3++;
            }  
            if(class1>=class2&&class1>=class3){
                if(dataset[j].str==iris[0])
                    correct++;
            }
            else if(class2>=class1&&class2>=class3){
                if(dataset[j].str==iris[1])
                    correct++;
            }
            else if(class3>=class2&&class3>=class1){
                if(dataset[j].str==iris[2])
                    correct++;
            }
        }
        sum=(correct/total)*100;
        cout<<"Accuracy when k="<<kgroup<<":"<<sum<<endl;
    }
    
    /* for(i=0;i<13;i++){
        cout<<a[i][0]<<" "<<a[i][1]<<endl;
    } */
    
    return 0;
}