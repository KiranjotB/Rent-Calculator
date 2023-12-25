#include <iostream>
#include <iomanip>
using namespace std;

// Kiranjot K. Bhatia, cs162, 6/29/22
// This program is designed to help the user understand the amount of money
// they will have paid per month after 5 years and the total amount of money paid
// after 5 years for their rent based on the amounts needed and the expected yearly
// rental increase


int main()


{
	float total{ 0 }; //Adds the total for all 5 years
	float monthly_rent{ -1 };
	float security_deposit{ -1 };
	float pet_deposit{ -1 };
	float background_check_fee{ -1 };
	float application_fee{ -1 };
	float yearly_rental_increase{ -1 };
	float monthly_rent_aft_1_yr{ 0 };
	float monthly_rent_aft_5_yrs{ 0 };
	float monthly_rent_aft_2_yrs{ 0 };
	float money_year_2{ 0 };
	float money_year_3{ 0 };
	float money_year_4{ 0 };
	float money_year_5{ 0 };
	float monthly_rent_aft_3_yrs{ 0 };
	float monthly_rent_aft_4_yrs{ 0 };
	float tot_5_yrs{ 0 };

	char response = ' ';

	cout << fixed << setprecision(2) << endl;

	// Welcome the user and explain the program!
	cout << "Welcome to the rent calculator!" << endl;
	cout << "This program will help you figure out your expenses." << endl;
	cout << "It also aids overall rent cost for 2 different time periods," << endl;
	cout << "your monthly rent after 1 year and after 5 years given different deposits." << endl;

	// Get the information from the user!
	//while (monthly_rent < 0 || security_deposit < 0 || pet_deposit < 0 || background_check_fee < 0 || application_fee < 0 || yearly_rental_increase < 0) {
		do
		{
			cout << "Please enter in your monthly rent: $";
			cin >> monthly_rent; // reads the monthly rent
			//Echo what was entered
			cout << "You entered: $" << monthly_rent
				<< "\nIs this correct? (y/n)";
			cin >> response;

			while ('n' == response)
			{
				cout << "Please try again.";
				cin >> monthly_rent;
				cout << "You entered: $" << monthly_rent
					<< "\nIs this correct? (y/n)";
				cin >> response;
			}



			while (monthly_rent < 1) // It is incorrect.
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> monthly_rent;  // Let's user input a new number if the first was wrong
				cout << "You entered: $" << monthly_rent << endl;
				cout << "Is this correct? (y/n)";
				cin >> response;
			}


			cout << "Now please enter in your security deposit: $";
			cin >> security_deposit;  // reads the security deposit 
			//Echo what was entered
			cout << "You entered: $" << security_deposit
				<< "\nIs this correct. (y/n)";
			cin >> response;

			while ('n' == response)
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> security_deposit;
				cout << "You entered: $" << security_deposit
					<< "\nIs this correct? (y/n)";
				cin >> response;
			}



			while (security_deposit < 1) // It is incorrect.
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> security_deposit; // Let's user input a new number if the first was wrong
				cout << "You entered: $" << security_deposit << endl;
				cout << "Is this correct? (y/n)";
				cin >> response;

			}



			cout << "Now please enter in your pet deposit: $";
			cin >> pet_deposit;  // reads the pet deposit
			//Echo what was entered
			cout << "You entered: $" << pet_deposit
				<< "\nIs this correct? (y/n)";
			cin >> response;

			while ('n' == response)
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> pet_deposit;
				cout << "You entered: $" << pet_deposit
					<< "\nIs this correct? (y/n)";
				cin >> response;
			}



			while (pet_deposit < 1) // It is incorrect.
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> pet_deposit;  // Let's user input a new number if the first was wrong
				cout << "You entered: $" << pet_deposit << endl;
				cout << "Is this correct? (y/n)";
				cin >> response;
			}


			cout << "Now please enter in your background check fee: $";
			cin >> background_check_fee;  // reads the background check fee
			// Echo what was entered
			cout << "You entered: $" << background_check_fee
				<< "\nIs this correct? (y/n)";
			cin >> response;

			while ('n' == response)
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> background_check_fee;
				cout << "You entered: $" << background_check_fee
					<< "\nIs this correct? (y/n)";
				cin >> response;
			}


			while (background_check_fee < 1)  // It is incorrect.
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> background_check_fee;  // Let's user input a new number if the first was wrong
				cout << "You entered: $" << background_check_fee << endl;
				cout << "Is this correct? (y/n)";
				cin >> response;
			}


			cout << "Now please enter in your application fee: $";
			cin >> application_fee; // reads the application fee
			// Echo what was entered
			cout << "You entered: $" << application_fee
				<< "\nIs this correct? (y/n)";
			cin >> response;

			while ('n' == response)
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> application_fee;
				cout << "You entered: $" << application_fee
					<< "\nIs this correct? (y/n)";
				cin >> response;
			}


			while (application_fee < 1) // It is incorrect.
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> application_fee; // Let's user input a new number if the first was wrong
				cout << "You entered: $" << application_fee << endl;
				cout << "Is this correct? (y/n)";
				cin >> response;

			}



			cout << "Now please enter your expected yearly rental increase: $";
			cin >> yearly_rental_increase; // reads the yearly rental increase (as a percentage)
			// Echo what was entered
			cout << " You entered: $" << yearly_rental_increase
				<< "\nIs this correct? (y/n)";
			cin >> response;

			while ('n' == response)
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> yearly_rental_increase;
				cout << "You entered: $" << yearly_rental_increase
					<< "\nIs this correct? (y/n)";
				cin >> response;
			}


			while (yearly_rental_increase < 0.00) // It is incorrect.
			{
				cout << "Enter a valid input greater than 0: $";
				cin >> yearly_rental_increase; // Let's user input a new percentage if the first was wrong
				cout << "You entered: $" << yearly_rental_increase << endl;
				cout << "Is this correct? (y/n)";
				cin >> response;
			}

			cout << "Okay, great!";

			if (yearly_rental_increase > 0)  // It is correct
			{
				cout << "Your annual rental expense after 1 year is: $";
				monthly_rent_aft_1_yr = monthly_rent * 12;
				cout << monthly_rent_aft_1_yr << endl;
			}
			cout << "Okay, good!";

			if (yearly_rental_increase > 0) // It is correct.
			{
				cout << "Your annual rent after 5 years is: $";
				money_year_2 = monthly_rent_aft_1_yr / yearly_rental_increase;
				monthly_rent_aft_2_yrs = monthly_rent_aft_1_yr + money_year_2;

				money_year_3 = monthly_rent_aft_2_yrs / yearly_rental_increase;
				monthly_rent_aft_3_yrs = monthly_rent_aft_2_yrs + money_year_3;

				money_year_4 = monthly_rent_aft_3_yrs / yearly_rental_increase;
				monthly_rent_aft_4_yrs = monthly_rent_aft_3_yrs + money_year_4;


				money_year_5 = monthly_rent_aft_4_yrs / yearly_rental_increase;
				monthly_rent_aft_5_yrs = monthly_rent_aft_4_yrs + money_year_5;


				cout << monthly_rent_aft_5_yrs << endl;
			}

			//cout << "peace";

			if (monthly_rent_aft_5_yrs > 0) // It is correct
			{
				cout << "Your total rental amount paid after 5 years is: $";
				tot_5_yrs = monthly_rent_aft_1_yr + monthly_rent_aft_2_yrs + monthly_rent_aft_3_yrs + monthly_rent_aft_4_yrs + monthly_rent_aft_5_yrs;
				total = tot_5_yrs + security_deposit + pet_deposit + background_check_fee + application_fee;
				cout << total << endl;
			}

			cout << "Would you like to continue? (y/n)";
			cin >> response;
		} while (response == 'y');

	//}
	return 0;





}
