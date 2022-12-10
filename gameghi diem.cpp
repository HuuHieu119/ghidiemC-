
#include<iostream>
using namespace std;
main(){
	string name1, name2, name3, name4;
	cout << " Nhap ten nguoi choi thu nhat : " << endl;
	cin >> name1;
	cout << " Nhap ten nguoi choi thu hai : " << endl;
	cin >> name2;
	cout << " Nhap ten nguoi choi thu ba : " << endl;
	cin >> name3;
	cout << " Nhap ten nguoi choi thu tu : " << endl;
	cin >> name4;
	
    int aray1[100], aray2[100], aray3[100], aray4[100];
    
    
    int sGame;
    int diem1, diem2 , diem3 , diem4;
    int sum1 = 0, sum2 = 0 , sum3 = 0, sum4= 0;
    int chon;
    
    cout <<"============ BAN VUI LONG CHON THE LOAI ==============" << endl;
    cout << "1: CHOI THEO SO DIEM  " << endl;
    cout << "2: CHOI THEO SO VAN  " << endl;
    cin >> chon;
    switch(chon){
    	case 1:{
		
		
    		cout << " nhap so diem ban muon choi " ;
    		int diem;
    		cin >> diem; 
    		bool c = true;
    		while (c){
    		
    			
    	
    			for(int i = 0; i < 100; i++){
    				cout<<" NHAP VAO DIEM CUA GAME THU "<< sGame + 1 << endl;
    				
    				
    			cout << " Nhap diem cua nguoi choi " << name1 << endl;
 				cin >> aray1[i];
 			
			 	cout << "nhap diem cua nguoi choi " << name2 << endl;
 				cin >> aray2[i];
 				
 				cout << " Nhap diem cua nguoi choi " << name3 << endl;
 				cin >> aray3[i];
 				
 				cout << " Nhap didem cua nguoi choi "<< name4 << endl;
 				cin >> aray4[i];
    				
				
    			for (int j = i; j <= i ; j++){
		             sum1 += aray1[j];
		             
		             sum2 += aray2[j];
		             
		             sum3 += aray3[j];
		             
		             sum4 += aray4[j];
		             
					 }
					 
					
					 
				
				
		    if (sum1 == diem || sum2 == diem || sum3 == diem || sum4 == diem){
		    	c = false ;
		    	 
		    	break;
		    	
			}
		
			sGame++;
		}
		
		}
			
			
			int max = sum1;
			if(sum2 > sum1){max = sum2;}
			if(sum3 > max){max = sum3;}
			if(sum4 > max){max = sum4;}
			
		    if(max == sum1){cout << name1 << "--WIN--";}
		    if(max == sum2){cout << name2 << "--WIN--";}
		    if(max == sum3){cout << name3 << "--WIN--";}
		    if(max == sum4){cout << name4 << "--WIN--";}
		    break;
		}
		   case 2:
		 	int van;
		 	cout << " Nhap so van ban muon choi ";
		 	cin >> van;
		 
		 		for(int i = 0; i < van; i++){
		 		
		 		cout << " NHAP DIEM CUA CAC VAN : " << sGame + 1 << endl;
		 		
				cout << " Nhap diem cua " << name1 << endl;
 				cin >> aray1[i];
 			
			 	cout << "nhap diem cua  " << name2 << endl;
 				cin >> aray2[i];
 				
 				cout << " Nhap diem cua  " << name3 << endl;
 				cin >> aray3[i];
 				
 				cout << " Nhap diem cua  "<< name4 << endl;
 				cin >> aray4[i];
    				sGame ++;
				}
				
    			for (int i = 0; i < van ; i++){
		             sum1 += aray1[i];
		             
		             sum2 += aray2[i];
		             
		             sum3 += aray3[i];
		             
		             sum4 += aray4[i];
					 
					 }
		             
		            
		         
		         
				 int max = sum1;
			if(sum2 > sum1){max = sum2;}
			if(sum3 > max){max = sum3;}
			if(sum4 > max){max = sum4;}
			
		    if(max == sum1){cout << name1 << "--WIN--";} 
		    if(max == sum2){cout << name2 << "--WIN--";}
		    if(max == sum3){cout << name3 << "--WIN--";}
		    if(max == sum4){cout << name4 << "--WIN--";}
		    break;
		 		
			 }
		
			 
		}
		 	
		    
		
	

		    
	
			
			
				
		    	
				
				
				
		             
			
				
    		
    		
			

	
	
		



