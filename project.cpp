#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
char ch;


                      //NOTE: USER ID FOR ADMINISTRATOR: goku    PASSWORD: 54321//



class abc
{
	char y[100],f[100],m[100];
	int a;		
public:
void name()
{
	
	ofstream outFile;system("cls");
    outFile.open ("folder.txt",ios::app);
			cout<<"YOUR NAME:";
			cin>>y;
		    outFile<<endl<<"NAME:";
			outFile<<y;
			cout<<"YOUR AGE :";
			cin>>a;
			outFile<<endl<<"AGE :";
			outFile<<a;
			cout<<"FATHER's NAME' :";
			cin>>f;
			outFile<<endl<<"FATHER NAME :";
			outFile<<f;
			cout<<"MOTHER's name':";
			cin>>m;
			outFile<<endl<<"MOTHER NAME:";
			outFile<<m;
			outFile.close();
	    }
		    
};
class bcd:public abc
{
    public:
    	void menu()
   {
   	int p,s;
	
	KMP:
	cout<<"1.After 10th "<<endl<<"2.After 12th"<<endl<<"3.After graduation"<<endl<<"4.Lateral entry"<<endl;
	cout<<"RE-enter your choice correctly: s only"<<endl;
	cin>>p;
	switch(p)
	{
		case 1:
			{
								int d;
								PSP:
								cout<<"You are intrested in? \n"<<endl;
								cout<<"1.Engineering"<<endl<<"2.Management"<<endl<<"3.Design"<<endl<<"4.HotelManagement and Tourism"<<endl<<"5.Fashion design"<<endl<<"6.Achitecture"<<endl;
								cin>>d;
								switch(d)
								{
									case 1:
										{
											int c;
											PSPK:
									        cout<<"Your choice:"<<endl;
									        cout<<"1.Electronics and Communication Engineering"<<endl<<"2.Electrical Engineering"<<endl<<"3.Computer Science Engineering"<<endl<<"4.Mechanical Engineering"<<endl<<"5.Aeronautical Engineering"<<endl;
									        cin>>c;
									        switch(c)
									        {
									        	case 1:
									        		{
									        			other();
									        			break;
													}
												case 2:
												{
													other();
													break;
												}	
												case 3:
													{
														m();
														break;
													}
												case 4:
													{
														other();
														break;
													}
												case 5:
												{
												other();
												break;	
												}	
												case 6:
													{
														other();
														break;
													}
												default:
												{
													cout<<"RE-enter your choice correctly: "<<endl;
													goto PSPK;
												}
											}
										}
								case 2:
								{
								
										
										other();
										break;
																				
								}	
								case 3:
								{
				
										cout<<"Your choice:"<<endl;
										cout<<"1.fashion"<<endl;
										other();
										break;
										
										
								}
								case 4:
								{
								int h;
								AED:
								cout<<"Your choice:"<<endl;
								cout<<"1.diploma in food production"<<endl<<"2.diploma in bakery and confectionary"<<endl;
								cin>>h;
								switch(h)
								{
									case 1:
										{	
										    other();
											break;
										}
										case 2:
											{	other();
											    break;
											}
											default:
												{
													goto AED;
												}
								}	
								}
								case 5:
								{
								int f;
								MSR:
								cout<<"Your choice:"<<endl;
								cout<<"1.diploma in fashion design"<<endl<<"2.diploma in b-design  fashion"<<endl;
								cin>>f;
								switch(f)
								{
									case 1:
										{	other();
											break;
										}
									case 2:
									{	    other();
											break;
									}
									default:
									{
										goto MSR;
									}	
								}	
								}
								case 6:
								{
									int a;
									FOR:
									cout<<"Your choice:"<<endl;
									cout<<"1.Diploma in architectural assistantship"<<endl<<"2.Architectural assistant in b-design"<<endl;
									cin>>a;
									switch(a)
									{
										case 1:
											{	
											    other();
											    break;
											}
											case 2:
												{	other();
											        break;
												}
												default:
													{
														goto FOR;
													}
									}
									
								}
								default:
										{
											cout<<"RE-enter your choice correctly: "<<endl;
											goto PSP;
										}
							}
						
							
									
							    }
								
								
								
							    case 2:
							    	{
							    	int g;
							    	sai:
									cout<<"1.ENGINEERING"<<endl<<"2.MANAGEMENT"<<endl<<"3.APPLIED MEDICAL SCIENCES"<<endl<<"4.Computer Applications"<<endl<<"5.Journalism and Film-Production"<<endl<<"6.Zoology and Medical Library sciences"<<endl;
									cin>>g;
									switch(g)
									{
									case 1:

										{
											int c;
											really:
									        cout<<"Your choice:"<<endl;
									        cout<<"1.ECE"<<endl<<"2.EE"<<endl<<"3.CSE"<<endl<<"4.MEC"<<endl<<"5.AE"<<endl<<"6.CE"<<endl;
									        cin>>c;
									        switch(c)
									        {
									        	case 1:
									        		{
									        			other();
									        			break;
													}
												case 2:
												{
													other();
													break;
												}	
												case 3:
													{
														m();
														break;
													}
												case 4:
													{
														other();
														break;
													}
												case 5:
												{
												other();
												break;	
												}	
												case 6:
													{
													    other();
														break;
													}
												default:
												{
													cout<<"RE-enter your choice correctly: "<<endl;
													goto really;
												}
											}
										}
										case 2:
				           				{
								
										
										other();
										break;
																				
									}	
							      	case 3:
							    	{
					                                    int s;
					                                    rash:
														cout<<"1.Pharmaceutical Sciences"<<endl<<"2.Phisyotherapy"<<endl<<"3.Medical Laboratory Sciences"<<endl;
														cin>>s;
														switch(s)
														{ case 1:
															{	
															    other();
														        
														        break;
															}
															case 2:
																{	
																    other();
														            
														            break;
																}
															case 3:
															{
																	other();
														            
														             break;
																}
															default:
															{  
															   cout<<"RE-enter your choice correctly: "<<endl;
												            	goto rash;
														    }	
															
								}
							case 4:
							{ 
								int c;
								mars:
								cout<<"Your choice:"<<endl;
								cout<<"1.B.SC(informationtechnology)"<<endl<<"2.B.SC(COMputer science)"<<endl;
								cin>>c;
								switch(c)
								{
									case 1:
										{	other();
											
											break;
										}
									case 2:
									{	    other();
											
											break;
									}
									default:
									{
										goto mars;
								}
							}
						}
								case 5:
								{
								int f;
								mask:
								cout<<"Your choice:"<<endl;
								cout<<"1.BSC(film and tv production)"<<endl<<"2.BA(journalism and mass communication)"<<endl;
								cin>>f;
								switch(f)
								{
									case 1:
										{	other();
										
											break;
										}
									case 2:
									{	    other();
											
											break;
									}
									default:
									{
										goto mask;
									}	
								}	
								}
								case 6:
								{
									int a;
									ssl:
									cout<<"Choose one:"<<endl;
									cout<<"1.BSC(HONS )zoology"<<endl<<"2.B.SC(medical)"<<endl;
									cin>>a;
									switch(a)
									{
										case 1:
											{	
											    other();
											    
											    break;
											}
											case 2:
												{	other();
											       
											        break;
												}
												default:
													{
														goto ssl;
													}
									}
								}		
									}	
									}
							    	default:
									{
										cout<<"RE-enter your choice correctly: "<<endl;
										goto sai;
									}
								}
					case 3://after graduation
					{	
					            int x;
								grad:
								cout<<"You are intrested in"<<endl;
								cout<<"1.ENGINEERING"<<endl<<"2.MATHEMATICS"<<endl<<"3.CHEMISTRY"<<endl;
								cin>>x;
								switch(x)
								{
									case 1:
										{
											int c;
										    padma:
									        cout<<"Your choice:"<<endl;
									        cout<<"1.ECE"<<endl<<"2.EE"<<endl<<"3.CSE"<<endl<<"4.MEC"<<endl<<"5.CHE"<<endl<<"6.CE"<<endl<<"7.MOLECULAR BIOLOGY AND GENERIC ENGINEERING"<<endl;
									        cin>>c;
									        switch(c)
									        {
									        	case 1:
									        		{
									        			N();
									        			
									        			break;
													}
												case 2:
												{
													N();
													
													break;
												}	
												case 3:
													{
														N();
														
														break;
													}
												case 4:
													{
														N();
														
														break;
													}
												case 5:
												{
												N();
											
												break;	
												}	
												case 6:
													{
														N();
														
														break;
													}
												case 7:
												{
												     	N();
														
														break;
													
													}	
												default:
												{
													cout<<"RE-enter your choice correctly: "<<endl;
													goto padma;
												}
											}
											break;
										}
										case 2:
											{
												N();
									        
									        	break;
											}
										case 3:
											{
												N();
									        	
									        	break;
											}
											default:
												{
													cout<<"RE-enter your choice correctly: "<<endl;
													goto grad;
												}
										
										}
					}
					case 4://after lateral entry
						{
							int h;
							cout<<"Are you an Engineering graduate? "<<endl;
							mari:
							cout<<"1 for 'YES' / 2 for 'NO'"<<endl;
							cin>>h;
							switch(h)
							{
								case 1:
									{
									
									int l;
									gogo:
									cout<<"Your highest qualification: "<<endl;
									cout<<"1. Diploma or equivalent. "<<endl<<"2.Graduation"<<endl;
									cin>>l;
									switch(l)
									{
										case 1:
											{
												int b;
												pk:
												cout<<"Your choice: "<<endl;
												cout<<"1.ENGINEERING"<<endl<<"2.COMMERCE"<<endl<<"3.PHYSICAL EDCUATION"<<endl<<"4.FASHION DESIGN"<<endl<<"5.physiotherapy"<<endl;
												cin>>b;
												switch(b)
												{
													case 1:
													{	
											            int c;
											            real:
									                    cout<<"Your choice:\n"<<endl;
									                    cout<<"1.Electronics and communication Engineering"<<endl<<"2.Electrical Engineering"<<endl<<"3.Computer Science Engineering"<<endl<<"4.Mechanical Engineering"<<endl<<"5.Aeronautical Engineering"<<endl;
									                    cin>>c;
									                   switch(c)
									                    { 
									        	          case 1:
									        		      {
									        			    other();
									        		      
									        			    break;
									        			   }
									        			   case 2:
									        			   	{
									        			   		other();
									        		      	    
									        			        break;
															}
															case 3:
																{
																	m();
									        		      	       
									        			            break;
																}
																case 4:
																	{
																	    other();
									        		      	           
									        			                break;
																	}
																case 5:
																	{
																		other();
									        		                   
									        			                break;
																	}
																case 6:
																{
																	other();
									        		               	
									        			            break;
																}
																default:
																{
																	cout<<"RE-enter your choice correctly: "<<endl;
																	goto real;
																}	
															}
														
														}
															default:
																{
																	cout<<"RE-enter your choice correctly: "<<endl;
																	goto pk;
																}
													
												
														case 2://commerce
														{
															cout<<"You have opted the course:  B.COM"<<endl;
															other();
									        		        
									        			    break;
															
														}
														case 3://physical edcuation
															{
																cout<<"You have opted the course:  B.SC(health and physical edcutation)"<<endl;
																other();
									        		            
									        			        break;
																
															}
														case 4://fashion design
														{
															int h;
															fashion:
															cout<<"Your Courses :\n"<<endl;
															cout<<"1.B.SC(DESIGN-FASHION)"<<endl<<"2.B.DESIGN"<<endl;
															cin>>h;
															switch(h)
															{
																case 1:
																	{   
																	    other();
									        		                   
									        			                break;
																	}
																case 2:
															    	{
																	   other();
									        		                   
									        			                break;
																	}	
																	default:
																		{
																			cout<<"RE-enter your choice correctly: "<<endl;
																			goto fashion;
																		}
															}
													    	}
															case 5://physiotherapy
																{
																	cout<<"your couse is BACHELOR OF PHYSIOTHERAPY"<<endl;
																    other();
									        		               
									        			            break;
																}
																
												}
														}
														
													}
												}
												case 2:
													{
														int c;
														cout<<"Select preferred discipline: "<<endl;
														india:
														cout<<"1.COMPUTER APPLICATIONS AND IT"<<endl<<"2.HOTEL MANAGEMENT AND TOURISM"<<endl;
														cin>>c;
														switch(c)
														{
															case 1:
																{
																	int d;
																	cout<<"Choose: \n"<<endl;
																	lateral:
																	cout<<"1.Master of computer applications"<<endl<<"2.Master of computer applications(HONS)"<<endl<<"3.Master of Sciences(computer science)"<<endl;
																	cin>>d;
																	switch(d)
																	{
																		case 1:
																			{	
																			   other();
									        		                            
									        			                        break;
																			}
																		case 2:
																		{
																				other();
									        		                            
									        			                         break;
																		}
																		case 3:
																			{	
																			  other();
									        		                            
									        			                        break;
																			}
																		default:
																		{
																			cout<<"RE-enter your choice correctly: "<<endl;
																			goto lateral;
																			}	
																			
																	}
																}
																case 2:
																	{
																		cout<<"your couse is M.Sc(HOTEL MANAGEMENT)"<<endl;
																		other();
									        		                    
									        			                break;
																	}
																default:
																{
																	cout<<"RE-enter your choice correctly: "<<endl;
																	goto india;
										}	
														}
													}
											
											default:
												{
													cout<<"RE-enter your choice correctly: "<<endl;
													goto mari;
												}
										}
									
									}
								
									
										
										
									
						        }
						        	
			
								
				}
		
		
		void m()
		{
		            int b;
		            char c[100]="computerscience";
					computer:
					cout<<"Choose one: "<<endl;
					cout<<" 1.Computer-Science (Regular)"<<endl<<"2.Computer-Science (Honors)"<<ends;
					cin>>b;
					switch(b)
					{
					
						case 1:
							{
							
							int v;
						    MASS:
							cout<<"1.Attempted LPU NEST?"<<endl<<"2.lpu test is not written"<<endl;
							cin>>v;
				        	switch(v)
							{
							
							case 1:
								{
								
								int l,t;
								
								abc:
									ofstream outFile;system("cls");
									outFile.open("folder.txt",ios::app);
									outFile<<endl<<"Candidate Information :- : ";
									cout<<"Intermediate (or equivalent score ): ";
							     	cin>>t;
							     	outFile<<endl<<"Student +1 & +2 score: :";
							     	outFile<<t;
								    cout<<"LPU-Nest score: :";
								    cin>>l;
								    outFile<<endl<<"LPU-NEST score: ";
								    outFile<<l;
								    outFile<<endl<<"You have opted the course:  :";
									outFile<<c;
								    outFile.close();
								    
								if(((t>=900&&t<=1000)&&(l<=300))||((l>=200&&l<=300)&&(t>=700&&t<=1000)))
								{
									
							       int fee=89500; 
								    name();system("cls");
								    cout<<"Applied fee per semester :-89500"<<endl<<"Applicable fee  per semester with scholarship :-14500"<<endl;
								    ofstream outFile;system("cls");
								    outFile.open("folder.txt",ios::app);
								    outFile<<endl<<"Applied fee per semester :-:";
								    outFile<<fee;
								    outFile.close();
									cout<<endl<<"Intrested in any other course? :)"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
								}
								else if(((t>=800&&t<900)&&(l<=300))||((l>=170)&&(l<200)&&(t>=700&&t<=1000)))
								{   
								       int fee=114500;
								   
									name();system("cls");
									cout<<"Applied fee per semester :-114,500"<<endl<<"Applicable fee  per semester with scholarship :-39500"<<endl;
									ofstream outFile;system("cls");
								    outFile.open("folder.txt",ios::app);
								    outFile<<endl<<"Applied fee per semester :-: ";
								    outFile<<fee;
								    outFile.close();
									cout<<endl<<"Intrested in any other course? :)"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
								
								}
								else if(((t>=700&&t<800)&&(l<=300))||((l>120)&&(l<150)&&(t>=700&&t<=1000)))
								{   
								    int fee=139500;
								    name();system("cls");
									cout<<"Applicable fee (per sem) :- 139,500"<<endl<<"Applicable fee  per semester with scholarship :-64500"<<endl;
									ofstream outFile;system("cls");
								    outFile.open("folder.txt",ios::app);
								    outFile<<endl<<"Applied fee per semester :-:";
								    outFile<<fee;
								    outFile.close();
									cout<<"Intrested in any other course? :)"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
								}
								else if(t>1000||l>300)
								{
									cout<<"RE-enter your marks correctly"<<endl;
									goto abc;
								}
								else if((t<700&&l>120)||(t>700&&l<120))
								{
									cout<<"Awesome! You are qualified for admission procedure!!"<<endl;
									cout<<"you want to know about  other course"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
									
								}
								else 
								{
									cout<<" Sorry! You are not eligibile! Good luck! with scholarship";
									cout<<"you want to know about  other course"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
								
									
								}
								break;
							}
							case 2:
							{
								int r,j;
								VFX:
									ofstream outFile;system("cls");
									outFile.open("folder.txt",ios::app);
									outFile<<endl<<"Candidate Information :-   : ";
									cout<<"enter 10th marks must be in percentage form"<<endl;
							     	cin>>r;
							     	outFile<<endl<<"10th score:";
							     	outFile<<r;
								    cout<<"Intermediate (or equivalent score ): ";
								    cin>>j;
								    outFile<<endl<<"Student +1 & +2 score: :";
								    outFile<<j;
								    outFile<<endl<<"You have opted the course:  :";
									outFile<<c<<endl;
								    outFile.close();
								
								if(((r>=90&&r<100)&&(j>=700&&j<=1000))||((j>900&&j<1000)&&(r>=70&&r<=100)))
								{  
								    int fee=89500;
								    name();system("cls");
									cout<<"Applied fee per semester :-89,500"<<endl<<"Applicable fee  per semester with scholarship :-14500"<<endl;
									ofstream outFile;system("cls");
								    outFile.open("folder.txt",ios::app);
								    outFile<<endl<<"Applied fee per semester :-: ";
								    outFile<<fee;
								    outFile.close();
									cout<<"Intrested in any other course? :)"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
								}
								else if(((r>=80&&r<90)&&(j>=700&&j<=1000))||((j>800&&j<900)&&(r>=70&&r<=100)))
								{
									int fee=114500;
								    name();system("cls");
									cout<<"Applicable fee (per sem) :- 1,14,500"<<endl<<"Applied fee per semester :-39500"<<endl;
									ofstream outFile;system("cls");
								    outFile.open("folder.txt",ios::app);
								    outFile<<endl<<"Applied fee per semester :- : ";
								    outFile<<fee;
								    outFile.close();
									cout<<"Intrested in any other course? :)"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
								}
								else if(((r>=70&&r<80)&&(j>=700&&j<=1000))||((j>700&&j<800)&&(r>=70&&r<=100)))
								{ 
								    int fee=139500;
								    name();system("cls");
									cout<<"Applied fee per semester :-139,500"<<endl<<"Applicable fee  per semester with scholarship :-64,500"<<endl;
									ofstream outFile;system("cls");
								    outFile.open("folder.txt",ios::app);
								    outFile<<endl<<"Applied fee per semester :-: ";
								    outFile<<fee;
								    outFile.close();
									cout<<"Explore Course: "<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										menu();
									}
									else
									{
										exit(0);
									}
						       	}
								else if(r>100||j>1000)
								{
									cout<<"RE-enter your marks correctly"<<endl;
									goto VFX;
								}
								else if((r<70&&j>700)||(r>70&&j<700)||(r<70&&j<700))
								{
									cout<<"Sorry! You are not eligibile! Good luck!"<<endl;
									cout<<"Intrested in any other course? :)"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
								    cin>>ch;system("cls");
							           		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								           	else
									            {
										             exit(0);
								             	}
								              
								}
								else
								{
									cout<<"Sorry! You are not eligibile! Good luck!";
									cout<<"Intrested in any other course? :)"<<endl;
									cout<<"Y for continue, 44 for EXIT  "<<ends;
									cin>>ch;system("cls");
									if(ch=='Y'||ch=='y')
									{
										 menu();
									}
									else
									{
										exit(0);
									}
								}
									
								break;
						   	}
						   	default:
						   		{
						   			cout<<"RE-enter your choice correctly: "<<endl;
						   			goto MASS;
						   			
								   }
						   }
					
						case 2://honors//
						   		{
						   			int v;
						   			cout<<"1.Attempted LPU NEST?"<<endl<<"2.lpu test is not written"<<endl;
						   			cin>>v;
						   			switch(v)
						   			{
									   case 1:
									   {
									   	int l,t;
									   	CAD:
									   		ofstream outFile;system("cls");
									        outFile.open("folder.txt",ios::app);
									        outFile<<endl<<"Candidate Information :-   : ";
						         			cout<<"Intermediate (or equivalent score ):  ";
							            	cin>>t;
							     	        outFile<<endl<<"Student +1 & +2 score: :";
							            	outFile<<t;
								            cout<<"LPU-Nest score: :";
								            cin>>l;
								            outFile<<endl<<"LPU-NEST score: ";
								            outFile<<l;
								            outFile<<endl<<"You have opted the course:  :";
								           	outFile<<c;
								            outFile.close();
									   	
									   		if(((t>900)&&(t<1000)&&(l<=300))||((l>250)&&(l<=300)&&(t>=700&&t<=1000)))
									   		{
									   			int fee=89500;
									   			name();system("cls");
						                        cout<<"Applicable fee (per sem) :- 89,500"<<endl<<"Applicable fee  per semester with scholarship :-14,500"<<endl;
						                        ofstream outFile;system("cls");
								                outFile.open("folder.txt",ios::app);
								                outFile<<endl<<"Applied fee per semester :-: ";
								                outFile<<fee;
								                outFile.close();
						                        cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
						                        
						                        
						                        
											}
											else if(((t>800)&&(t<900)&&(l<=300))||((l>200)&&(l<250)&&(l<300)&&(t>=700&&t<=1000)))
											{  
											   int fee=114500;
											   name();system("cls");
											   cout<<"Applied fee per semester :-114,500"<<endl<<"Applicable fee  per semester with scholarship :-39,500"<<endl;
											   ofstream outFile;system("cls");
								               outFile.open("folder.txt",ios::app);
								               outFile<<endl<<"Applied fee per semester :- : ";
								               outFile<<fee;
								               outFile.close();
											   cout<<"Explore Course: "<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
											   
											}
											else if(((t>700)&&(t<800)&&(l<=300))||((l>150)&&(l<200)&&(t>=700&&t<=1000)))
											{
												int fee=139500;
											    name();system("cls");
												cout<<"Applied fee per semester :-139,500"<<endl<<"your fee per sem with scholarship is64,500"<<endl;
												ofstream outFile;system("cls");
								                outFile.open("folder.txt",ios::app);
								                outFile<<endl<<"Applied fee per semester :- : ";
								                outFile<<fee;
								                outFile.close();
												cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
												
											}
											else if(t>1000||l>300)
											{
												cout<<"RE-enter your marks correctly"<<endl;
												goto CAD;
											}
											else if((t<700&&l>120)||(t>700&&l>300))
											{
												cout<<"you are not eligible for admission in lpu"<<endl;
												cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
											}
											else
											{
												cout<<"sorry you are not eligible for admission in lpu"<<endl;
												cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
												
											}
											break;
									   }
									   case 2:
									   {
									   	int r,j;
									   	SIVA:
									   		ofstream outFile;system("cls");
								           	outFile.open("folder.txt",ios::app);
								           	outFile<<endl<<"Candidate Information :-   : ";
								           	cout<<"Enter 10th Score (strictly percentage):  ";
							                cin>>r;
							               	outFile<<endl<<"10th score:";
							   	            outFile<<r;
							                cout<<"Intermediate (or equivalent score ):  ";
							                cin>>j;
			     			                outFile<<endl<<"Student +1 & +2 score: :";
							                outFile<<j;
							                outFile<<endl<<"You have opted the course:  :";
									        outFile<<c;
								            outFile.close();
									   	
									   	    if(((r>=90)&&(r<100)&&(j>=700&&j<=1000))||((j>900)&&(j<1000)&&(r>=70&&r<=100)))
									     	 {  
											    int fee=89500;      
										        name();system("cls");
									   		    cout<<"Applied fee per semester :-89,500"<<endl<<"Applicable fee  per semester with scholarship :-14,500"<<endl;
									   		    ofstream outFile;system("cls");
								                outFile.open("folder.txt",ios::app);
								                outFile<<endl<<"Applied fee per semester :- : ";
								                outFile<<fee;
								                outFile.close();
									   		    cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
									   		    
										}
										else if(((r>=80&&r<90)&&(j>=700&&j<=1000))||((j>800&&j<900)&&(r>=70&&r<=100)))
										{      
									            int fee=114500;	
										        name();system("cls");
											    cout<<"Applied fee per semester :-1,14,500"<<endl<<"Applicable fee  per semester with scholarship :-39,500"<<endl;
											    ofstream outFile;system("cls");
								                outFile.open("folder.txt",ios::app);
								                outFile<<endl<<"Applied fee per semester :- : ";
								                outFile<<fee;
								                outFile.close();
											    cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
											    
										}
										else if(((r>=70&&r<80)&&(j>=700&&j<=1000))||((j>=700&&j<800)&&(r>=70&&r<=100)))
										{ 
										        int fee=139500;
										        name();system("cls");
											    cout<<"Applied fee per semester :-1,39,500"<<endl<<"Applicable fee  per semester with scholarship :-64,500"<<endl;
											    ofstream outFile;system("cls");
								                outFile.open("folder.txt",ios::app);
								                outFile<<endl<<"Applied fee per semester :-: ";
								                outFile<<fee;
								                outFile.close();
											    cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
											    
										}
										else if((r<70&&j>700)||(r>70&&j<700)||(r<70&&j<700))
										{
											system("cls");cout<<"you are not eligible for admission in lpu"<<endl;
											cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
										}
										else if(r>100||j>1000)
										{
											cout<<"RE-enter your marks correctly"<<endl;
											goto SIVA;
										}
										
										else
										{
											system("cls");
											cout<<"sorry you are not eligible for admission in lpu"<<endl;
											cout<<"Intrested in any other course? :)"<<endl;
								              	cout<<"Y for continue, 44 for EXIT  "<<ends;
								             	cin>>ch;system("cls");system("cls");
							             		if(ch=='Y'||ch=='y')
									            {
										             menu();
									            }
								             	else
									            {
										             exit(0);
								             	}
										
										}
										break;
									   	
									   }
									   default:
									   {
									   	cout<<"RE-enter your choice correctly: "<<endl;
									   	exit(0);
									   	
									   }	
									}
								}
							}
							default:
								{
									cout<<"RE-enter your choice correctly: "<<endl;
									goto computer;
					
								}
					
					
					}
		}
				
	
		void other()
		{
			
			int v;
			CSE:
			cout<<"__Attempted LPU NEST?"<<endl<<"1 for 'yes' and 2 for 'NO'"<<ends;
			cin>>v;
			switch(v)
			{
				case 1:
					{
						int t,l;
						
						MADHU:
						ofstream outFile;system("cls");system("cls");
						outFile.open("folder.txt",ios::app);
						outFile<<endl<<"Candidate Information :-   : ";
						cout<<"Intermediate (or equivalent score ):  ";
				     	cin>>t;
		     	     	outFile<<endl<<"Student +1 & +2 score: :";
				     	outFile<<t;
					    cout<<"LPU-Nest score: : ";
					    cin>>l;
					    outFile<<endl<<"LPU-NEST score: ";
					    outFile<<l;
					    outFile.close();				
				     	if(((t>=900)&&(t<=1000)&&(l<=300))||((l>=200)&&(l<=300)&&(t>=700&&t<=1000)))
						{
							int fee=75000;
							name();system("cls");system("cls");
							cout<<" so Applied fee per semester :-75000"<<endl<<"Applicable fee  per semester with scholarship :-15,000"<<endl;
							ofstream outFile;system("cls");
							outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :- : ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
							cout<<"Y for continue, 44 for EXIT  "<<ends;
    		             	cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
							
		
						}
						else if(((t>=800)&&(t<900)&&(l<=300))||((l>200)&&(l<250)&&(t>=700&&t<=1000)))
						
						{
							int fee=100000;
							name();system("cls");system("cls");
							cout<<"Applied fee per semester :-100,000"<<endl<<"Applicable fee  per semester with scholarship :-50,000"<<endl;
							ofstream outFile;system("cls");
							outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :- : ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
							cout<<"Y for continue, 44 for EXIT  "<<ends;
    		             	cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
								              	
			
						}
						else if(((t>=700)&&(t<800)&&(l<=300))||((l>150)&&(l<200)&&(t>=700&&t<=1000)))
						{
							int fee=125000;
							name();system("cls");system("cls");
							cout<<"Applicable fee :- 125,000"<<endl<<"Applicable fee  per semester with scholarship :-75,000"<<endl;
							ofstream outFile;system("cls");
							outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
							cout<<"Y for continue, 44 for EXIT  "<<ends;
    		             	cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
								              
						}
						else if(t>1000||l>300)
						{
							cout<<"RE-enter your marks correctly"<<endl;
							goto MADHU;
						}
						else if((t<700&&l>120)||(t>700&&l>300))
						{
							system("cls");
							cout<<"Awesome! You are qualified for admission procedure!!"<<endl;
							cout<<"Intrested in any other course? :)"<<endl;
							cout<<"Y for continue, 44 for EXIT  "<<ends;
    		             	cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
							
						}
						else
						{system("cls");
							system("cls");cout<<"Sorry! You are not eligible for admission! Good Luck!"<<endl;
							cout<<"Intrested in any other course? :)"<<endl;
							cout<<"Y for continue, 44 for EXIT  "<<ends;
    		             	cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
								              	
						}
						break;
					}
				case 2:
				{
					int r,j;
					RAO:
						ofstream outFile;system("cls");system("cls");
				     	outFile.open("folder.txt",ios::app);
				     	outFile<<endl<<"Candidate Information :-   : ";
		            	cout<<"Enter 10th Score (strictly percentage):  ";
			            cin>>r;
		            	outFile<<endl<<"10th score:";
			            outFile<<r;
				        cout<<"Intermediate (or equivalent score ):  ";
			            cin>>j;
			            outFile<<endl<<"Student +1 & +2 score: :";
			            outFile<<j;
				        outFile.close();
					
					if(((r>=90)&&(r<=100)&&(j>700&&j<=1000))||((j>=900)&&(j<=1000)&&(r>=70&&r<=100)))
					{
						int fee=75000;
						name();system("cls");system("cls");
						cout<<"Applied fee per semester :-75000"<<endl<<"Applicable fee  per semester with scholarship :-15,000 "<<endl;
						ofstream outFile;system("cls");
						outFile.open("folder.txt",ios::app);
						outFile<<endl<<"Applied fee per semester :-: ";
					    outFile<<fee;
					    outFile.close();
						cout<<"Intrested in any other course? :)"<<endl;
						cout<<"Y for continue, 44 for EXIT  "<<ends;
    		            cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
								              
					}
					else if(((r>=80)&&(r<90)&&(j>700&&j<=1000))||((j>=800)&&(j<900)&&(r>=70&&r<=100)))
					{
						int fee=100000;
						name();system("cls");system("cls");
						cout<<"Applicable fee :- 100,000"<<endl<<"Applicable fee  per semester with scholarship :-50,000";
						ofstream outFile;system("cls");
						outFile.open("folder.txt",ios::app);
						outFile<<endl<<"Applied fee per semester :- : ";
					    outFile<<fee;
					    outFile.close();
						cout<<"Intrested in any other course? :)"<<endl;
						cout<<"Y for continue, 44 for EXIT  "<<ends;
    		            cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
					
	
					}
					else if(((r>=70)&&(r<80)&&(j>700&&j<=1000))||((j>=700)&&(j<=800)&&(r>=70&&r<=100)))
					{
						int fee=125000;
						name();system("cls");system("cls");
						cout<<"Applicable fee :- 125,000"<<endl<<"Applicable fee  per semester with scholarship :-75,000";
						ofstream outFile;system("cls");
						outFile.open("folder.txt",ios::app);
						outFile<<endl<<"Applied fee per semester :-: ";
					    outFile<<fee;
					    outFile.close();
						cout<<"Intrested in any other course? :)"<<endl;
						cout<<"Y for continue, 44 for EXIT  "<<ends;
    		            cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
					}
					else if(r>100||j>1000)
					{
						cout<<"RE-enter your marks correctly"<<endl;
						goto RAO;
					}
					else if((r<70&&j>700)||(r>70&&j<700)||(r<70&&j<700))
					{system("cls");
						cout<<"Awesome! You are qualified for admission procedure!!"<<endl;
						cout<<"Intrested in any other course? :)"<<endl;
						cout<<"Y for continue, 44 for EXIT  "<<ends;
    		            cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
							
					}
					else
					{
						name();system("cls");system("cls");
						cout<<"Sorry! you are not eligible: "<<endl;
					    cout<<"Intrested in any other course? :)"<<endl;
						cout<<"Y for continue, 44 for EXIT  "<<ends;
    		            cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
					}
					break;
				}	
				default:
					{
						cout<<"RE-enter your choice correctly: "<<endl;
						goto CSE;
					}
			}
		}
	void N()
	{
		int o;
	    cout<<"__LPU STUDENT??"<<endl;
	    cout<<"1 for 'YES' / 2 for 'NO'"<<endl;
	    cin>>o;
		switch(o)
		case 1:
		{
		   int l;
		   siva:
		   	cout<<"Choose your choise for Post-Graduation: "<<endl;
		   cout<<"1.M.TECH(cse||ECE)"<<endl<<"2.Ph.D(cse||MEC||ECE||EE||CE||CHE||MOLecular biology)"<<endl;
		   cin>>l;
		    switch(l)
		    {
			case 1:
			{
				
		    int n;
			ram:
			cout<<"__Attempted LPU NEST?"<<endl<<"1 for 'yes' and 2 for 'NO'"<<ends;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						float g,u;
						
						
						hug:
							char c[100]="M.tech";
							ofstream outFile;system("cls");system("cls");
							outFile.open("folder.txt",ios::app);
							outFile<<endl<<"Candidate Information :-   : ";
					    	cout<<"GATE SCORE (percentage only) : ";
						    cin>>g;
						    outFile<<endl<<"Your GATE score: ";
							outFile<<g;
							cout<<"LPU-NEST score (percentage only) :  ";
						    cin>>u;
			                outFile<<endl<<"LPU-NEST score: ";
		    			    outFile<<u;
			                outFile<<endl<<"You have opted the course:  :";
						    outFile<<c;
				            outFile.close();
						if((g>=90.0)&&(g<=100.0)||(u>=90.0)&&(u<=100))
						{
							int fee=80000;
							name();system("cls");system("cls");
							cout<<"Applicable fee :- 80,000"<<endl<<"Applicable fee  per semester with scholarship :-30,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
						cout<<"Intrested in any other course? :)"<<endl;
						cout<<"Y for continue, 44 for EXIT  "<<ends;
    		            cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if((g>=80.0)&&(g<90)||(u>80.0)&&(u<90.0))
						
						{
							int fee=100000;
							name();system("cls");system("cls");
							cout<<"Applicable fee :- 100,000"<<endl<<"Applicable fee  per semester with scholarship :-50,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
						    cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
						     }
						}
						else if((g>=70.0)&&(g<80.0)||(u>70.0)&&(u<80.0))
						{
							int fee=125000;
							name();system("cls");system("cls");
							cout<<"Applicable fee :- 125,000"<<endl<<"Applicable fee  per semester with scholarship :-75,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if(g>100||u>100||g<0||u<0)
						{
							cout<<"RE-enter your marks correctly"<<endl;
							goto hug;
						}
						else
						{
							system("cls");
							system("cls");cout<<"Sorry! You are not eligible for admission! Good Luck!"<<endl;
							cout<<"Intrested in any other course? :)";
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						break;
					}
				case 2:
				{
					float w,y;
					char c[100]="M.Tech";
					mro:
						ofstream outFile;system("cls");
						outFile.open("folder.txt",ios::app);system("cls");
						outFile<<endl<<"Candidate Information :-   : ";
					   	cout<<"Enter engineering marks (percentage only)";
					    cin>>w;
					    outFile<<endl<<"Your Engineering marks/ %age : ";
						outFile<<w;
						cout<<"GATE SCORE (percentage only) : ";
					    cin>>y;
			            outFile<<endl<<"Your GATE score: ";
		    		    outFile<<y;
			            outFile<<endl<<"You have opted the course:  :";
					    outFile<<c;
				        outFile.close();
				        if((w>=90.0)&&(w<=100.0)||(y>=90.0)&&(y<=100)&&(w>70))
						{
							int fee=80000;
							name();system("cls");system("cls");
							cout<<" Applied fee per semester :-80000"<<endl;
							cout<<"Applicable fee :- 80,000"<<endl<<"Applicable fee  per semester with scholarship :-30,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :- : ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if((w>=80.0)&&(w<90)||(y>80.0)&&(y<90.0)&&(w>70))
						
						{
							int fee=100000;
							name();system("cls");system("cls");
							cout<<"Applicable fee :- 100,000"<<endl<<"Applicable fee  per semester with scholarship :-50,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :- :";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if((w>=70.0)&&(w<80.0)||(y>70.0)&&(y<80.0)&&(w>70))
						{
							int fee=125000;
							name();system("cls");system("cls");
							cout<<"Applicable fee :- 125,000"<<endl<<"Applicable fee  per semester with scholarship :-75,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if(w<70&&y>70)
						{
							 cout<<"Awesome! You are qualified for admission procedure!!"<<endl;
							 cout<<"Intrested in any other course? :)"<<endl;
					     	cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if(w>100||y>100&&w<0||y<0)
						{
							cout<<"RE-enter your marks correctly"<<endl;
							goto hug;
						}
						else
						{
							system("cls");cout<<"Sorry! You are not eligible for admission! Good Luck!"<<endl;
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
				
					break;
				}	
				default:
					{
						cout<<"RE-enter your choice correctly: "<<endl;
						goto ram;
					}
			}	
		}
		case 2:
			{
		    	int o;
			    cout<<"Are you an engneering graduate? "<<endl;
			    cout<<"1 for 'YES / 2 for 'NO'"<<endl;
			    cin>>o;
			switch(o)
			{
				case 1:
				{
				
				int i;
		    	car:
		     	cout<<"__Attempted LPU NEST?"<<endl<<"1 for 'yes' and 2 for 'NO'"<<ends;
			    cin>>i;
			    switch(i)
			    {
				case 1:
					{
						float z,j;
						char c[100]="Ph.D";
						
						gun:
						    ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Candidate Information :-   : ";
					    	cout<<"ENTER YOUR GATE SCORE(percentage only) ";
						    cin>>z;
						    outFile<<endl<<"GATE SCORE:";
							outFile<<z;
							cout<<"LPU-NEST score(percentage only): ";
						    cin>>j;
			                outFile<<endl<<"LPU NEST SCORE:";
		    			    outFile<<j;
			                outFile<<endl<<"You opted the course :";
						    outFile<<c;
				            outFile.close();				
						if((z>=90.0)&&(z<=100.0)||(j>=90.0)&&(j<=100))
						{
							int fee=80000;
							name();system("cls");
							cout<<"Applicable fee :- 80,000"<<endl<<"Applicable fee  per semester with scholarship :-30,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :- : ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if((z>=80.0)&&(z<90)||(j>80.0)&&(j<90.0))
						
						{
							int fee=50000;
							name();system("cls");
							cout<<"Applied fee per semester :-100,000"<<endl;
							cout<<"Applicable fee :- 100,000"<<endl<<"Applicable fee  per semester with scholarship :-50,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if((z>=70.0)&&(z<80.0)||(j>70.0)&&(j<80.0))
						{
							int fee=125000;
							name();system("cls");
							cout<<"Applicable fee :- 125,000"<<endl<<"Applicable fee  per semester with scholarship :-75,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();system("cls");
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
					
						}
						else if(z>100||j>100&&z<0||j<0)
						{
							cout<<"RE-enter your marks correctly: "<<endl;
							goto gun;
						}
						else
						{
							system("cls");
							system("cls");cout<<"Sorry! You are not eligible for admission! Good Luck!"<<endl;
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;system("cls");
    		                cin>>ch;system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
				
						}
						break;
					}
				case 2:
				{
					float f,d;
					char c[100]="Ph.d";
					mar:
						ofstream outFile;system("cls");
						outFile.open("folder.txt",ios::app);
						outFile<<"STUDENT INFORMATION : ";
					   	cout<<"Enter Engineering marks (should be in Percentage): ";
					    cin>>f;
					    outFile<<endl<<"You have entered, Engineering marks: ";
						outFile<<f;
						cout<<"Input your GATE score percentage: ";
					    cin>>d;
			            outFile<<endl<<"You have entered, Gate score:";
		    		    outFile<<d;
			            outFile<<endl<<"Student course option :";
					    outFile<<c;system("cls");
				        outFile.close();
						if((f>=90.0)&&(f<=100.0)&&(f>60)||(d>=90.0)&&(d<=100)&&(f>60))
						{
							int fee=80000;
							name();system("cls");
							cout<<"Applicable fee :- 80,000"<<endl<<"Applicable fee  per semester with scholarship :-30,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)";
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
					
						}
						else if((f>=80.0)&&(f<90)&&(f>60)||(d>80.0)&&(d<90.0)&&(f>60))
						
						{
							int fee=100000;
							name();system("cls");
							cout<<"Applied fee per semester :-100,000"<<endl;
							cout<<"Applicable fee :- 100,000"<<endl<<"Applicable fee  per semester with scholarship :-50,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :- : ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
							
						}
						else if((f>=70.0)&&(f<80.0)&&(f>60)||(d>70.0)&&(d<80.0)&&(f>60))
						{
							int fee=125000;
							name();system("cls");
							cout<<"Applicable fee :- 125,000"<<endl;
							cout<<"Applicable fee :- 125,000"<<endl<<"Applicable fee  per semester with scholarship :-75,000";
					      	ofstream outFile;system("cls");
						    outFile.open("folder.txt",ios::app);
						    outFile<<endl<<"Applied fee per semester :-: ";
					        outFile<<fee;
					        outFile.close();
							cout<<"Intrested in any other course? :)"<<endl;
						    cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
							
						}
						else if(f<70&&d>70)
						{
							system("cls");
							cout<<"Sorry! You are not eligible for the admission in LPU! Good luck!"<<endl;
							cout<<"Intrested in any other course? :)"<<endl;
					      	cout<<"Y for continue, 44 for EXIT  "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
						}
						else if(f>100||d>100&&f<0||d<0)
						{
							cout<<"Enter Valid Marks: "<<ends;
							goto mar;
						}
						else
						{
							system("cls");
							cout<<"Sorry! You are not eligible for admission! Good Luck!"<<endl<<endl;
							cout<<"Intrested in any another course? :)"<<endl;
						    cout<<" Y for continue, 44 for EXIT "<<ends;
    		                cin>>ch;system("cls");system("cls");
    		             	if(ch=='Y'||ch=='y')
    		             	{
    		             		menu();
							 }
							 else
							 {
							 	exit(0);
							 }
							
						}
				
					break;
				}	
				default:
					{
						cout<<"Choose correct choice: "<<endl;
						goto car;
					}
			}	
		default:
			{
				cout<<"Choose correct choice:"<<endl;
				goto car;
			}
		}
	}

	}
}
default:
	{
		cout<<"Choose correct choice: "<<endl;
		goto siva;
	}
}
}
};
int main()
{
	cout<<"\n\n\t\t\t\t\t LOVELY PROFESSIONAL UNIVERSITY";
	cout<<"\n\n\t\t\t\t\t SCHOLARSHIP MANAGEMENT SYSTEM \n\n ";
	cout<<"\n\t--------------------------------------------------------------------------------\n";
	int a,n;
	char s1[100],s2[100],s3[4]="go",s4[5]="goku",s5[6]="goa",s6[7]="123",s7[7]="564",s8[8]="464",s;
	cout<<"\n\n\t\t1. ADMINISTRATOR\n\t\t2. SIGN UP\n\t\t";
	cin>>n;
	switch(n)
	{
		case 1:
			USER:
			{
			system("cls");				
			cout<<"Enter the User id :";
			cin>>s1;
			if(strcmp(s1,s3)==0||strcmp(s1,s4)==0||strcmp(s1,s5)==0)
			{
				PASS:
				cout<<"Passowrd: ";
		        fflush(stdin);
	           	char pwd[5];
		        int i=0;
		        while(i<5)
	          	{
			      pwd[i]=getch();
			      cout<<"%";
			      ++i;
		        }
	          	if (strcmp(pwd,"54321")==0)
		        {
			      system("cls");
			      cout<<"\n\t\t\tWELCOME TO SCHOLARSHIP MANAGEMENT SYSTEM\n";
			      goto z;
		        }
		        else
		        {
			      cout<<"\n\t\tUsername/password match not found in directory!!";
			      goto PASS;
		    	}
			}
				else
				{
					cout<<"ENTER CORRECT USER ID : "<<endl;
					goto USER;
				}

		}
		case 2:
			{
				cout<<"USER ID: "<<endl;
				cin>>s1;
				cout<<"PASSWORD: "<<endl;
				cin>>s2;
				goto z;		
			}
	}
	z:
		system("cls");
	cout<<"Choose to proceed : \n";
	cout<<"\t1.Get admitted\n\t2.Leave\n\t\t\t\t";
	cin>>a;
	switch(a)
	{
		case 1:
			bcd obj1;
			obj1.menu();
			break;
		case 2:
			exit(0);
		default:
			cout<<"Value undefined";
			goto z;
	}
}
