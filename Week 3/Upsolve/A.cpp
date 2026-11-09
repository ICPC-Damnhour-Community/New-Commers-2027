int n,h;
cin>>h>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    if(sum>=h){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
