#include<stdio.h>

int main(){
	
	int n,a;
	
	
	printf("welcome to McDonalds\n");
	
	printf("order list below:\n");
	printf("1. veg-burger\n");
	printf("2. Non-veg-burger\n");
	
	printf("enter your choice :");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("1 McAloo Tikki\n");
			printf("2 McVeggle\n");
			printf("3 Masala grill veg\n");
			printf("4 McSpicy Paneer\n");
			printf("5 Veg Maharaja Mac\n");
			
			printf("which item do you prefer with various option  :");
			scanf("%d",&a);
			
			switch(a){
				case 1:
						printf("1 McAloo Tikki with coca-cola\n");
						printf("2 McAloo Tikki with french fried with tomato ketchup sachet\n");
						printf("3 McAloo Tikki with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("McAloo Tikki with coca-cola\n");
							printf("Total price = 99\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 99Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("McAloo Tikki with french fried with tomato ketchup sachet\n");
							printf("Total price = 199\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 199Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("McAloo Tikki with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 299\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 299Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
				
				case 2 :
						printf("1 McVeggle  with coca-cola\n");
						printf("2 McVeggle  with veg Pizza McPuff with french fried with tomato ketchup sachet\n");
						printf("3 McVeggle  with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("McVeggle  with coca-cola\n");
							printf("Total price = 399\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 399Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("McVeggle  with veg Pizza McPuff with french fried with tomato ketchup sachet\n");
							printf("Total price = 649\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 649Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("McVeggle  with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 599\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 599Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
					
				case 3 :
						printf("1 Masala grill veg with coca-cola\n");
						printf("2 Masala grill veg with french fried with tomato ketchup sachet\n");
						printf("3 Masala grill veg with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("Masala grill veg  with coca-cola\n");
							printf("Total price = 249\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 249Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("Masala grill veg  with french fried with tomato ketchup sachet\n");
							printf("Total price = 499\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 499Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("Masala grill veg with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 699\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 699Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
					
				case 4 :
						printf("1 McSpicy Paneer with coca-cola\n");
						printf("2 McSpicy Paneer with veg Pizza McPuff with french fried with tomato ketchup sachet\n");
						printf("3 McSpicy Paneer with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("McSpicy Paneer with coca-cola\n");
							printf("Total price = 399\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 399Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("McSpicy Paneer with veg Pizza McPuff with french fried with tomato ketchup sachet\n");
							printf("Total price = 699\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 699Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("McSpicy Paneer with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 799\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 799Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
					
				case 5 :
						printf("1 Veg Maharaja Mac with coca-cola\n");
						printf("2 Veg Maharaja Mac with french fried with tomato ketchup sachet\n");
						printf("3 Veg Maharaja Mac with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("Veg Maharaja Mac with coca-cola\n");
							printf("Total price = 599\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 599Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("Veg Maharaja Mac with french fried with tomato ketchup sachet\n");
							printf("Total price = 699\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 699Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("Veg Maharaja Mac with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 999\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 999Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
			}
			break;	
		case 2:
			printf("1 Chicken McGrill\n");
			printf("2 Masala Grill Chicken\n");
			printf("3 Mc chicken\n");
			printf("4 McSpicy Chicken\n");
			printf("5 Chicken Maharaja Mac\n");
			
				printf("which item do you prefer with various option  :");
				scanf("%d",&a);
			
			switch(a){
				case 1:
						printf("1 Chicken McGrill with coca-cola\n");
						printf("2 Chicken McGrill with french fried with tomato ketchup sachet\n");
						printf("3 Chicken McGrill with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("Chicken McGrill with coca-cola\n");
							printf("Total price = 149\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 149Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("Chicken McGrill with french fried with tomato ketchup sachet\n");
							printf("Total price = 249\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 249Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("Chicken McGrill with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 399\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 399Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
				
				case 2 :
						printf("1 Masala Grill Chicken  with coca-cola\n");
						printf("2 Masala Grill Chicken  with Non-veg Pizza McPuff with french fried with tomato ketchup sachet\n");
						printf("3 Masala Grill Chicken  with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("Masala Grill Chicken  with coca-cola\n");
							printf("Total price = 199\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 199Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("Masala Grill Chicken  with Non-veg Pizza McPuff with french fried with tomato ketchup sachet\n");
							printf("Total price = 349\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 349Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("Masala Grill Chicken  with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 449\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 449Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
					
				case 3 :
						printf("1 Mc chicken with coca-cola\n");
						printf("2 Mc chicken with french fried with tomato ketchup sachet\n");
						printf("3 Mc chicken with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("Mc chicken  with coca-cola\n");
							printf("Total price = 299\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 299Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("Mc chicken  with french fried with tomato ketchup sachet\n");
							printf("Total price = 399\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 399Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("Mc chicken with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 599\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 599Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
					
				case 4 :
						printf("1 McSpicy Chicken with coca-cola\n");
						printf("2 McSpicy Chicken with non-veg Pizza McPuff with french fried with tomato ketchup sachet\n");
						printf("3 McSpicy Chicken with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("McSpicy Chicken with coca-cola\n");
							printf("Total price = 349\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 349Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("McSpicy Chicken with non-veg Pizza McPuff with french fried with tomato ketchup sachet\n");
							printf("Total price = 599\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 599Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("McSpicy Chicken with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 799\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 799Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
					
				case 5 :
						printf("1 Chicken Maharaja Mac with coca-cola\n");
						printf("2 Chicken Maharaja Mac with french fried with tomato ketchup sachet\n");
						printf("3 Chicken Maharaja Mac with coca-cola with french fried with tomato ketchup sachet\n");
						
						printf("what do you prefer:");
						scanf("%d",&a);
					
					switch(a){
						case 1:
							printf("Chicken Maharaja Mac with coca-cola\n");
							printf("Total price = 699\n");

							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 699Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 2:
							printf("Chicken Maharaja Mac with french fried with tomato ketchup sachet\n");
							printf("Total price = 749\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 749Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
						case 3:
							printf("Chicken Maharaja Mac with coca-cola with french fried with tomato ketchup sachet\n");
							printf("Total price = 1099\n");
							
							printf("1 yes\n");
							printf("2 No\n");
							printf("answer yes or No to confirm your order enter numbe yes=1 ,No=2:");
							scanf("%d",&a);
		
							switch(a){
								case 1:
									printf("confirm your order\n");
									printf("payment :\n");
									
									printf("online\n");
									printf("offline\n");
									printf("payment know :");
									scanf("%d",&a);
									switch(a){
										case 1:
											printf("your payment 1099Rs success\n");
											printf("have good day\n");
									}
									break;
								case 2:
									printf("cancel your order\n");
									printf("have good day\n");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
	
	return 0;
}
