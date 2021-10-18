// sap xep mang tang dan

main()
{
	int num[10];
	int i, j, gantam;
	int n;
	
	printf("\nNhap vao so luong phan tu cua day so: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		printf("\nNhap 1 so bat ki: ");
		scanf("%d", &num[i]);
		}
	for(i = 0; i < n - 1; i++)
	 {   
		for(j = i + 1; j < n; j++)
		 {
		    if(num[i] > num[j])
			  {
			      gantam = num[i];
				  num[i] = num[j];
				  num[j] = gantam; 	
		      }
         }
     }
	 
	printf("\nDay so sap xep tang dan la : ");
	for(i = 0; i < n; i++)
	{
	    printf("%d ", num[i]);
	}	     
	return 0;
	}
