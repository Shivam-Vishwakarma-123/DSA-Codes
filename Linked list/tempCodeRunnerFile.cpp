int main ()
{
    Node*first=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*fourth=new Node(40);
    Node*fivth=new Node(50);

  first->next=second;
  second->next=third;
    third->next=fourth;
    fourth->next=fivth   ;
  cout<<"printingLL"<<endl;
  print(first);

 return 0;
}