#include<iostream>
using namespace std;
class heap{
    public:
    int arr[101];
    int size;
    heap(){
        this->size=0;
        arr[size]=-1;
    }
    void insertintoheap(int data){
        // Insert the value at the end
        size=size+1;
        int index=size;
        arr[index]=data;
        // put the element to the right position 
        while(index>1){
            // index>1 kyuki ki root ka parent exist nhi karta 
            int parentindex=index/2;
            if(arr[parentindex]<arr[index]){
                swap(arr[parentindex],arr[index]);
                index=parentindex;
            }
            else{
                break;
            }
        }


    }
    int deletefromheap(){
        // replace the root element with the last element 

    arr[1]=arr[size]; 
    int ans=arr[1];
    // removing the last element from the the array by
    size--;
   int  index=1;
   int largest=index;
   int leftchild=2*index;
   int rightchild=2*index+1;
   while(index<size){
    if(leftchild<size&&arr[largest]<arr[leftchild]){
      largest=leftchild;
         
    }
     else if(rightchild<size&&arr[largest]<arr[rightchild]){
       largest=rightchild;
         
    }
    // matlab right position par he 
    else if(largest==index){
        break;
    }
    else{
        swap(arr[largest],arr[index]);
        index=largest;
    }
   
   }
    return ans;



    }

};
void heapify(int arr[],int n,int i){
    int index=i;
    int leftchild=2*i;
    int rightchild=2*i+1;
    int largest=index;
     if(leftchild<=n&&arr[largest]<arr[leftchild]){
      largest=leftchild;
         
    }
     if(rightchild<=n&&arr[largest]<arr[rightchild]){
       largest=rightchild;
         
    }
    if(largest!=index){
        // left ya right child me se koi>current node se 
        swap(arr[largest],arr[index]);
        index=largest;
        heapify(arr,n,index);

    }
}
void bulidheap(int arr[],int n){
    for(int i=n/2;i>0;i--){
         cout<<"correction done  for element"<<arr[i]<<endl;
heapify(arr,n,i);
  
   for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";

   }
   cout<<endl;
    }
}
void heapsort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}
int main ()
{
    heap h;
    // h.arr[0]=-1;
    // h.arr[1]=100;
    // h.arr[2]=50 ;
    // h.arr[3]=60 ;
    // h.arr[4]=40;
    // h.arr[5]=45;
    // h.size=5;
    h.insertintoheap(100);
    h.insertintoheap(20);
    h.insertintoheap(50);
    h.insertintoheap(60);
    h.insertintoheap(30);
    h.insertintoheap(10);
    h.insertintoheap(55);
    h.insertintoheap(40);
    h.insertintoheap(45);
    h.insertintoheap(126);

    // for (int i = 0; i <= h.size; i++)
    // {
    //     cout << h.arr[i] << " ";
    // }
    // cout<<endl;
//     // h.insertintoheap(110);
//     //  for(int i=0;i<=h.size;i++){
//     //     cout<<h.arr[i]<<" ";
//     // }
    int arr[]={-1,10,20,30,40,50,60,70};
      int n=7;
       for(int i=0;i<=7;i++){
        cout<<arr[i]<<" ";
    }
//  n yha size nhi no of array element darsha rha 
   bulidheap(arr,n);
   cout<<endl;
     for(int i=0;i<=7;i++){
        cout<<arr[i]<<" ";
    }
//     // cout<<endl;
//     heapsort(arr,n);
//       for(int i=0;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


 return 0;
}