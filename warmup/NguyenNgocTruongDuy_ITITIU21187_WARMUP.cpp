//NguyenNgocTruongDuy_ITITIU21187_WARMUP_21_3_2022

#include <iostream>
#include <iomanip>																							

using namespace std;

int main ()
{
	int paycode,
		TotalHours,
		pieces;
	double pay,
		   HourlySalary,
		   PieceWage,
		   WeeklySalary,
		   GrossWeeklySales;

	cout << "Enter paycode\n"
		 << "Enter 1 for Manager, 2 for Hourly Worker \n"
		 << "3 for Commission Worker, and 4 for Piece Work. (0 to end): ";
	cin  >> paycode;


	while (paycode < 0 || paycode >=5)
	{
		cout << "You must enter 0 through 4\n";
		cout << "Enter 1 for Manager, 2 for Hourly Worker \n"
			 << "3 for Commission Worker, and 4 for Piece Work. (0 to end): ";
		cin  >> paycode;
	}

	
	
	cout << fixed << showpoint << setprecision(2);
		
		 switch (paycode) 
		 {
				 case 1:
				 cout << "Manager selected." << endl;
				 cout << "Enter weekly salary: ";
				 cin  >> WeeklySalary;
				 cout << endl;

				 pay = WeeklySalary;
				 cout << "The manager's pay is $ " << pay;
				 cout << endl;
				 break;	
								 
				 case 2:
				 cout << "Hourly worker selected." << endl;
				 cout << "Enter the hourly salary: ";
				 cin  >> HourlySalary;
				
				 cout << endl;
				 cout << "Enter the total hours worked: " << endl;
				 cin  >> TotalHours;
				
					  if ( TotalHours <= 40)
						   pay = HourlySalary * TotalHours;
						  
					  else
						   pay = (40.0 * HourlySalary) + (TotalHours - 40) * (HourlySalary * 1.5);
						  
				  
				 cout << endl;
				 cout << "Worker's pay is $ " << pay;
				
				 cout << endl;
				 break;
				
				 case 3:
				 cout << "Commission worker selected." << endl;
				 cout << "Enter gross weekly sales: ";
				 cin  >> GrossWeeklySales;
				
				 cout << endl;
				 pay = (GrossWeeklySales *.57) + 250;
				  
				 cout << "Commission worker's pay is $ " << pay << endl;
				 break;  
				
				 case 4:
				 cout << "Pieceworker selected." << endl;
				 cout << "Enter number of pieces: ";
				 cin  >> pieces;
				
				 cout << "Enter wage per piece: ";
				 cin >> PieceWage;
				
				 pay = pieces * PieceWage;
				
				 cout << "Pieceworker's pay is $ " << pay << endl;
				 break;
				
				 					
		  }	 

return 0;

}

