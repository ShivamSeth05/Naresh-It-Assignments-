/* Stationary Store Management System */

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
//Declaration OF All Function..

//+++++++++++FOR SUPPLIER++++++++++++++++++++

void manage_supplier(); //supplier Menu
void add_supplier();//Insert supplier Info
void list_supplier();//Listing supplier Info
void update_supplier();//Updating supplier
void delete_supplier();//deleting supplier

//++++++++++++++++++++++++++++++++++++++++++++

//+++++++++++++++++FOR ITEMS+++++++++++++++++++

void manage_item(); //item Menu
void add_item();//Insert item Info
void list_item();//Listing item Info
void update_item();//Updating item
void delete_item();//deleting item

//++++++++++++++++++++++++++++++++++++++++++++

//++++++++Purchase Product++++++++++++++++++

void purchase_menu();//Purchase Menu
void purchase_new(); //Purchase New Item
void purchae_record();//Purchase Record
void purchase_exist();//Purchase Exist Item

//++++++++++++++++++++++++++++++++++++++++++

//+++++++++++++Sale Product++++++++++++++++

void sale_menu();//Sale Menu
void sale_record();//Sale Record
void sale_product();//Sale Items

//+++++++++++++++++++++++++++++++++++++++++

//+++++++++Report Menu+++++++++++++++++++++++

void report_menu();//Report Menu
void sale_report();//Report on Sale
void purchase_report();//Report on Purchase
void supplier_report();//Report on Supplier

//+++++++++++++++++++++++++++++++++++++++
//++++++++++++Other Function+++++++++++++++++
char* GetDateTime();//For Getting System Date
void welcome();//Display Wellcome Message 
void alert();//Alear For Items have Lower Quntity
//+++++++++++++++++++++++++++++++++++++++++
//.................................

//<<<<<<<<<<<<<<<<<<Daclaration of Structure>>>>>>>>>>>>>>>>>>>

//<<<<<<<<<<<<<<<<<<<<<<<For Items Info>>>>>>>>>>>>>

struct ItemsInfo
{
	int intProductID;
	char chrProductName[50];
	char chrDescrition[100];
	float fltPriceToPurchse;
	float fltProceToSold;
	int intQuantity;
	int intSuplireID;
};
//<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<For supplier Info>>>>>>>>>>>>>>>>>>>
struct supplierInfo
{
	int intsupplierID;
	char chrsupplierName[50];
	char chrsupplierAddress[100];
	char lintContact[12];
};
//<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<PurchaseProduct>>>>>>>>>>>>>>>>>>>

struct PurchaseProduct
{
	char Date[50];
	int ProductID;
	int SupplireID;
	float Price;
	int Quntity;
	float Ammount;
};

//<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>

//<<<<<<<<<<<<<<<<<<<<PurchaseProduct>>>>>>>>>>>>>>>>>>>

struct SaleProduct
{
	char Date[50];
	int ProductID;
	char CustomerName[50];
	char MobileNo[15];
	float Price;
	int Quntity;
	float Ammount;
};

//<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>

//######################GLOBLE DECLARATION##################################
char Date[50];
char* Datepart(char* date);
//##########################################################################
int main()
{
	textcolor(WHITE);
	textbackground(RED);
	clrscr();
	alert();
	getch();
	flushall();
	textcolor(YELLOW);
	textbackground(MAGENTA);
	MainMenu();
	getch();
	return 0;
}
//MAIN MENU........

int MainMenu()
{
	int choice, flv = 0;
	clrscr();
	welcome();
	printf(":::::::::::::::::::::::::::: Main Menu :::::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("1 For Supplier.");
	gotoxy(8, 13);
	printf("2 For Items.");
	gotoxy(8, 14);
	printf("3 For Purchase Product.");
	gotoxy(8, 15);
	printf("4 For Sale Product.");
	gotoxy(8, 16);
	printf("5 For Report.");
	gotoxy(8, 17);
	printf("6 For Exit.");
	gotoxy(8, 19);
	printf("Enter Your Choice : ");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 19);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 19);
				printf("Enter Valid Choice : ");

			}

		} while (flv != 1);

		switch (choice)
		{
		case 1:
			manage_supplier();
			break;

		case 2:
			manage_item();
			break;

		case 3:
			purchase_menu();
			break;
		case 4:
			sale_menu();
			break;
		case 5:
			report_menu();
			break;
		case 6:
			exit();
			break;
		default:
			gotoxy(8, 19);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice > 6 || choice < 1);

	return 0;
}

//...........................Geting Currunt DateTime............................

char* GetDateTime()
{
	time_t rawtime;
	struct tm *timeinfo;
	clrscr();
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	return  asctime(timeinfo);
}

//.............................................................................

//................................Datepart.....................................

char* Datepart(char* date)
{
	int i, j = 0, length;
	char *str;
	length = strlen(date);
	for (i = 4; i < length; i++, j++)
	{
		str[j] = date[i];
	}

	str[j] = '\0';
	return str;
}
//.............................................................................

//.....................................Alert....................................

void alert()
{
	int x = 13, flag = 0;
	struct ItemsInfo item;
	FILE *cfile;
	clrscr();


	gotoxy(8, 4);

	printf("******************************************************************\n");
	gotoxy(8, 5);
	printf("*");


	gotoxy(35, 5);
	printf("Alert");
	gotoxy(73, 5);
	printf("*");
	gotoxy(8, 6);

	printf("******************************************************************\n");

	gotoxy(8, 7);
	printf("------------------------------------------------------------------");
	gotoxy(8, 8);
	printf("                 Given Items Has Lower Quantity");


	cfile = fopen("item.DAT", "rb");
	//welcome();
	gotoxy(8,10);
	printf("::::::::::::LIST OF ITEMS DON'T HAVE MIN QUANTITY:::::::::::::::::");


	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record Found");
	}
	else
	{
		gotoxy(20, x-2);
		printf(" %-3s | %-20s | %-3s ","PID", "NAME", "Qun");
		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile) != 0)
		{
			if (item.intQuantity < 15)
			{
				gotoxy(20, x);
				x++;
			flag = 1;
				printf(" %-3d | %-20.20s | %-3d ", item.intProductID, item.chrProductName, item.intQuantity);
			}
		}

		if (flag == 0)
		{
			gotoxy(20, 20);
			printf("All Items has good Quantity.");
		}
		else
		{
			sound(50);
			delay(500);
			nosound();
		}
		printf("\n");
		fclose(cfile);
	}

	gotoxy(40,25);
	printf("Press Any Key To Continue...");

}
//..............................................................................

//..........................Print Welcome MSG....................................

void welcome()
{
	gotoxy(8, 4);

	printf("******************************************************************\n");
	gotoxy(8, 5);
	printf("*");


	gotoxy(20, 5);
	printf("Welcome to Stationary Store Management System");

	gotoxy(73, 5);
	printf("*");
	gotoxy(8, 6);

	printf("******************************************************************\n");

	gotoxy(8, 7);
	printf("------------------------------------------------------------------");
	gotoxy(8, 9);
}

//.............................................................................
//...............................START SUPPLIER..................................
//...............................................................................


//Defination for manage_supplier().................

void manage_supplier()
{
	int choice, flv = 0;
	clrscr();
	welcome();
	printf(":::::::::::::::::::::::::::: Supplier Menu ::::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("1.Supplier List.");
	gotoxy(8, 13);
	printf("2.Add New Supplier.");
	gotoxy(8, 14);
	printf("3.Update Supplier Information");
	gotoxy(8, 15);
	printf("4.Delete Supplier");
	gotoxy(8, 16);
	printf("5.Main Menu");
	gotoxy(8, 17);
	printf("6.Exit");
	gotoxy(8, 19);

	printf("Enter Your Choice : ");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 19);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 19);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);

		switch (choice)
		{
		case 1:
			clrscr();
			list_supplier();
			break;
		case 2:
			clrscr();
			add_supplier();
			break;
		case 3:
			clrscr();
			update_supplier();
			break;
		case 4:
			clrscr();
			delete_supplier();
			break;

		case 5:
			clrscr();
			MainMenu();
			break;

		case 6:
			exit();

		default:
			gotoxy(8, 19);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 19);
			printf("Invalid Choice.Please Enter Valide Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice<1 || choice>6);

	gotoxy(8, 24);
	printf("7.Main Menu 8.Back 9.Exit");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 25);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 25);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);
		switch (choice)
		{

		case 7:
			clrscr();
			MainMenu();
			break;
		case 8:
			clrscr();
			manage_supplier();
			break;
		case 9:
			exit();
		default:
			gotoxy(8, 25);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 25);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice<7 || choice >9);
	choice = 0;
	flushall();
}

//.................................

//MEthod To Add Supplire																																																							 nation for void add_supplier();

void add_supplier()
{
	FILE *cfile;
	struct supplierInfo supplier;
	int i = 0, flag = 0;

	cfile = fopen("supplier.DAT", "r");

	if (cfile == NULL)
	{
		cfile = fopen("supplier.DAT", "ab+");
		supplier.intsupplierID = 1;
	}
	else
	{
		cfile = fopen("supplier.DAT", "ab+");

		while (fread(&supplier, sizeof(struct supplierInfo), 1, cfile) != 0)
		{
			supplier.intsupplierID++;
		}
	}

	welcome();
	printf(":::::::::::::::::::::NEW SUPPLIER ENTERY::::::::::::::::::::::::::");

	gotoxy(8, 12);

	flushall();
	printf("Enter The Supplier Name : ");
	gets(supplier.chrsupplierName);
	gotoxy(8, 13);
	flushall();
	printf("Entet The Supplier Address : ");
	gets(supplier.chrsupplierAddress);
	gotoxy(8, 14);

	printf("Enter The Supplier Contact No : ");
	do
	{
		i = 0;
		flushall();
		gets(supplier.lintContact);

		while (supplier.lintContact[i] != '\0')
		{
			if (!isdigit(supplier.lintContact[i]) || strlen(supplier.lintContact) < 10 || strlen(supplier.lintContact) > 10)
			{
				flag = 1;
				gotoxy(8, 14);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
				gotoxy(8, 14);
				printf("Enter Valid Contact No : ");
				break;
			}
			else
			{
				flag = 0;
			}
			i++;
		}

	} while (flag == 1);

	fwrite(&supplier, sizeof(struct supplierInfo), 1, cfile);
	fclose(cfile);
	gotoxy(8, 20);

	printf("Record Added Successfully.");
}

//..................................................

//Defination for list_supplier()..............................

void list_supplier()
{
	FILE *cfile;
	struct supplierInfo supplier;
	int x = 13;

	cfile = fopen("supplier.DAT", "rb");
	welcome();
	printf(":::::::::::::::::::::::LIST OF SUPPLIER:::::::::::::::::::::::::::");
	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record Found");
	}
	else
	{
		gotoxy(9, x - 2);
		printf(" %-3s | %-15s | %-25s | %-10s ", "ID", "NAME", "ADDRESS", "CONTACT NO");
		while (fread(&supplier, sizeof(struct supplierInfo), 1, cfile) != 0)
		{
			gotoxy(9, x);
			printf(" %-3d | %-15.15s | %-25.25s | %-10s ", supplier.intsupplierID, supplier.chrsupplierName, supplier.chrsupplierAddress, supplier.lintContact);
			x++;
		}

		printf("\n");
		fclose(cfile);
	}
}

//.......................................................................

//Defination for updating supplier.......................................

void update_supplier()
{
	int Temp = 0, flag = 0, flag1 = 0, i, flv = 0;
	struct supplierInfo supplier;
	FILE *cfile, *cfile_TMP;
	cfile_TMP = fopen("TMP.DAT", "wb");
	flushall();
	cfile = fopen("supplier.DAT", "rb");
	welcome();
	printf(":::::::::::::::::::UPDATE SUPPLIER INFORMATION::::::::::::::::::::::::");
	gotoxy(8, 12);

	if (cfile == NULL)
	{
		gotoxy(15, 15);

		printf("No Record For Update...");
	}
	else
	{

		printf("Enter The Supplier ID Wich You Want to Update : ");

		do
		{
			flushall();
			flv = scanf("%d", &Temp);
			if (flv != 1)
			{
				gotoxy(8, 12);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 12);
				printf("Please Enter Valid Supplier ID : ");

			}

		} while (flv != 1);


		while (fread(&supplier, sizeof(struct supplierInfo), 1, cfile))
		{
			if (supplier.intsupplierID == Temp)
			{
				flag = 1;
				flushall();
				gotoxy(8, 14);
				printf("Enter The Nupplier Name : <%s>: ", supplier.chrsupplierName);
				gets(supplier.chrsupplierName);

				flushall();
				gotoxy(8, 15);
				printf("Entet The Supplier Address : <%s>: ", supplier.chrsupplierAddress);
				gets(supplier.chrsupplierAddress);

				flushall();
				gotoxy(8, 16);
				printf("Enter The Supplier Contact NO : <%s>: ", supplier.lintContact);
				do
				{
					i = 0;
					flushall();
					gets(supplier.lintContact);

					while (supplier.lintContact[i] != '\0')
					{
						if (!isdigit(supplier.lintContact[i]) || strlen(supplier.lintContact) < 10 || strlen(supplier.lintContact) > 10)
						{
							flag1 = 1;
							gotoxy(8, 16);
							printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
							gotoxy(8, 16);
							printf("Enter Valid Contact No : ");
							break;
						}
						else
						{
							flag1 = 0;
						}
						i++;
					}

				} while (flag1 == 1);

				fwrite(&supplier, sizeof(struct supplierInfo), 1, cfile_TMP);
			}
			else
			{
				fwrite(&supplier, sizeof(struct supplierInfo), 1, cfile_TMP);
			}
		}
	}

	fclose(cfile);
	fclose(cfile_TMP);

	remove("supplier.DAT");
	rename("TMP.DAT", "supplier.DAT");
	gotoxy(8, 18);
	if (flag)
	{

		printf("Record Updated Successfully.\n");
	}
	else
	{

		printf("No Record For Update.\n");
	}

}

//Defination for Deleting supplier......

void delete_supplier()
{
	int Temp = 0, flag = 0, flv = 0;
	struct supplierInfo supplier;
	FILE *cfile, *cfile_TMP;
	cfile_TMP = fopen("TMP.DAT", "wb");
	flushall();
	cfile = fopen("supplier.DAT", "rb");

	welcome();
	printf(":::::::::::::::::::DELETE SUPPLIER ENTERY::::::::::::::::::::::::");
	gotoxy(8, 12);
	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record For Delete...");
	}
	else
	{

		printf("Enter The Supplier ID Wich You Want to Delete : ");
		do
		{
			flushall();
			flv = scanf("%d", &Temp);
			if (flv != 1)
			{
				gotoxy(8, 12);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 12);
				printf("Please Enter Valid Supplier ID : ");

			}

		} while (flv != 1);

		while (fread(&supplier, sizeof(struct supplierInfo), 1, cfile))
		{
			if (supplier.intsupplierID != Temp)
			{
				fwrite(&supplier, sizeof(struct supplierInfo), 1, cfile_TMP);
			}
			else
			{
				flag = 1;
			}
		}
	}

	fclose(cfile);
	fclose(cfile_TMP);

	remove("supplier.DAT");
	rename("TMP.DAT", "supplier.DAT");
	gotoxy(8, 18);
	if (flag)
	{
		printf("Record Deleted Successfully.");
	}
	else
	{
		printf("No Record For Delete.");
	}
}

//.............................................................................................
//...................................................END SUPPLIER..............................
//.............................................................................................

//.............................................................................................
//...................................................START ITEMS...............................
//.............................................................................................

//Defination for manage_item().................

void manage_item()
{
	int choice, flv;
	clrscr();
	welcome();
	printf("::::::::::::::::::::::::: ITEM MENU ::::::::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("1.List Of Item");
	gotoxy(8, 13);
	printf("2.Add New Item");
	gotoxy(8, 14);
	printf("3.Update Item Information");
	gotoxy(8, 15);
	printf("4.Delete Item");
	gotoxy(8, 16);
	printf("5.Main Menu");
	gotoxy(8, 17);
	printf("6.Exit");
	gotoxy(8, 19);
	printf("Enter Your Choice : ");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 19);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 19);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);

		switch (choice)
		{
		case 1:
			clrscr();
			list_item();
			break;
		case 2:
			clrscr();
			add_item();
			break;
		case 3:
			clrscr();
			update_item();
			break;
		case 4:
			clrscr();
			delete_item();
			break;

		case 5:
			clrscr();
			MainMenu();
			break;

		case 6:
			exit();

		default:
			gotoxy(8, 19);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 19);
			printf("Invalid Choice.Please Enter Valide Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice<1 || choice>6);
	gotoxy(8, 24);
	printf("7.Main Men 8.Back 9.Exit");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 25);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 25);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);
		switch (choice)
		{

		case 7:
			clrscr();
			MainMenu();
			break;
		case 8:
			clrscr();
			manage_item();
			break;
		case 9:
			exit();
		default:
			gotoxy(8, 25);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 25);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice<7 || choice >9);
	choice = 0;
	flushall();
}

//.................................

//MEthod To Add Item																																																							 nation for void add_item();

void add_item()
{
	int  flag = 1, flv = 0;

	struct ItemsInfo item;
	struct supplierInfo supplier;

	FILE *cfile, *sfile;

	cfile = fopen("item.DAT", "r");

	if (cfile == NULL)
	{
		cfile = fopen("item.DAT", "ab+");
		item.intProductID = 1;
	}
	else
	{
		cfile = fopen("item.DAT", "ab+");

		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile) != 0)
		{
			item.intProductID++;
		}
	}
	welcome();
	printf("::::::::::::::::::::::::::NEW ITEM ENTERY:::::::::::::::::::::::::");
	gotoxy(8, 12);
	flushall();
	printf("Enter The Product Name : ");
	gets(item.chrProductName);

	gotoxy(8, 13);
	flushall();
	printf("Entet The Descrition About Product : ");
	gets(item.chrDescrition);

	gotoxy(8, 14);
	printf("Enter The Product Purchase Price : ");
	do
	{
		flushall();
		flv = scanf("%f", &item.fltPriceToPurchse);
		if (flv != 1)
		{
			gotoxy(8, 14);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 14);
			printf("Enter Valid Purchase Price : ");
		}

	} while (flv != 1);


	gotoxy(8, 15);
	printf("Enter The Product Selling Price : ");
	do
	{
		flushall();
		flv = scanf("%f", &item.fltProceToSold);

		if (flv != 1)
		{
			gotoxy(8, 15);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 15);
			printf("Enter Valid Selling Price : ");
		}

	} while (flv != 1);


	gotoxy(8, 16);
	flushall();
	printf("Enter The Quantity Of Product : ");
	do
	{
		flushall();
		flv = scanf("%d", &item.intQuantity);

		if (flv != 1)
		{
			gotoxy(8, 16);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 16);
			printf("Enter Valid Quantity : ");
		}

	} while (flv != 1);

	gotoxy(8, 17);
	printf("Enter The Supplire ID (Enter 0 if Don't Have) : ");
	do
	{

		do
		{
			flushall();
			flv = scanf("%d", &item.intSuplireID);
			if (flv != 1)
			{
				gotoxy(8, 17);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 17);
				printf("Please Enter Valid Supplier ID : ");

			}

		} while (flv != 1);

		if (item.intSuplireID != 0)
		{

			sfile = fopen("supplier.DAT", "r");

			if (sfile == NULL)
			{
				item.intSuplireID = 0;
			}
			else
			{
				while (fread(&supplier, sizeof(struct supplierInfo), 1, sfile) != 0)
				{

					if (supplier.intsupplierID == item.intSuplireID)
					{
						flag = 1;
						break;
					}
					else
					{
						flag = 0;
					}
				}
			}
			if (!flag)
			{
				gotoxy(8, 17);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
				gotoxy(8, 17);
				printf("Suplier ID Not Found.Enter Valid ID : ");
			}
		}
		else
		{
			flag = 1;
		}
	} while (flag == 0);


	fwrite(&item, sizeof(struct ItemsInfo), 1, cfile);
	fclose(cfile);
	fclose(sfile);

	gotoxy(8, 20);

	printf("Record Added Successfully...");
}

//..................................................

//Defination for list_item()........................

void list_item()
{
	int x = 13;

	struct ItemsInfo item;

	FILE *cfile;
	cfile = fopen("item.DAT", "rb");
	welcome();
	printf("::::::::::::::::::::::::::LIST OF ITEMS:::::::::::::::::::::::::::");


	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record Found");
	}
	else
	{
		gotoxy(5, x - 2);
		printf("%-3s | %-15s | %-18s | %-6s | %-6s | %-3s | %3s", "ID", "NAME", "Desc", "P_Price", "S_Price", "Qun", "SID");
		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile) != 0)
		{
			gotoxy(5, x);
			x++;
			printf("%-3d | %-15.15s | %-18.18s | %-7.2f | %-7.2f | %-3d | %-3d ", item.intProductID, item.chrProductName, item.chrDescrition, item.fltPriceToPurchse, item.fltProceToSold, item.intQuantity, item.intSuplireID);
		}

		printf("\n");
		fclose(cfile);


	}
}

//...................................................................

//Defination for updating item.......................................

void update_item()
{
	int Temp = 0, flag = 0, flv = 0;
	struct ItemsInfo item;
	struct supplierInfo supplier;
	FILE *cfile, *cfile_TMP, *sfile;

	cfile_TMP = fopen("TMP.DAT", "wb");
	flushall();
	cfile = fopen("item.DAT", "rb");
	welcome();
	printf(":::::::::::::::::::UPDATE ITEM INFORMATION::::::::::::::::::::::::");
	gotoxy(8, 12);

	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record For Update...");
	}
	else
	{

		printf("Enter The Product ID Wich You Want to Update : ");
		do
		{
			flushall();
			flv = scanf("%d", &Temp);
			if (flv != 1)
			{
				gotoxy(8, 12);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 12);
				printf("Please Enter Valid Product ID : ");

			}

		} while (flv != 1);

		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile))
		{
			if (item.intProductID == Temp)
			{

				gotoxy(8, 14);
				flushall();
				printf("Enter The Product Name <%s>: ", item.chrProductName);
				gets(item.chrProductName);

				gotoxy(8, 15);
				flushall();
				printf("Entet The Descrition About Product <%s>: ", item.chrDescrition);
				gets(item.chrDescrition);


				gotoxy(8, 16);
				printf("Enter The Product Purchase Price <%f>: ", item.fltPriceToPurchse);
				do
				{
					flushall();
					flv = scanf("%f", &item.fltPriceToPurchse);
					if (flv != 1)
					{
						gotoxy(8, 16);
						printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
						gotoxy(8, 16);
						printf("Enter Valid Purchase Price : ");
					}

				} while (flv != 1);

				gotoxy(8, 17);
				printf("Enter The Selling Price <%f>: ", item.fltProceToSold);
				do
				{
					flushall();
					flv = scanf("%f", &item.fltProceToSold);

					if (flv != 1)
					{
						gotoxy(8, 17);
						printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
						gotoxy(8, 17);
						printf("Enter Valid Selling Price : ");
					}

				} while (flv != 1);


				gotoxy(8, 18);
				printf("Enter The Quantity Of Product <%d>: ", item.intQuantity);
				do
				{
					flushall();
					flv = scanf("%d", &item.intQuantity);

					if (flv != 1)
					{
						gotoxy(8, 18);
						printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
						gotoxy(8, 18);
						printf("Enter Valid Quantity : ");
					}

				} while (flv != 1);


				gotoxy(8, 19);
				printf("Enter The Supplire ID <%d><Dont have enter 0>: ", item.intSuplireID);
				do
				{
					do
					{
						flushall();
						flv = scanf("%d", &item.intSuplireID);
						if (flv != 1)
						{
							gotoxy(8, 19);
							printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

							gotoxy(8, 19);
							printf("Please Enter Valid Supplier ID : ");

						}

					} while (flv != 1);
					if (item.intSuplireID != 0)
					{

						sfile = fopen("supplier.DAT", "r");

						if (sfile == NULL)
						{
							item.intSuplireID = 0;
						}
						else
						{
							while (fread(&supplier, sizeof(struct supplierInfo), 1, sfile) != 0)
							{

								if (supplier.intsupplierID == item.intSuplireID)
								{
									flag = 1;
									break;
								}
								else
								{
									flag = 0;
								}
							}
						}
						if (!flag)
						{
							gotoxy(8, 19);
							printf("Suplier ID Not Found..Enter Valid ID : ");
						}
					}
					else
					{
						flag = 1;
					}
				} while (flag == 0);



				fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);

				flag = 1;
			}
			else
			{
				fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);
			}
		}
	}

	fclose(cfile);
	fclose(cfile_TMP);

	remove("item.DAT");
	rename("TMP.DAT", "item.DAT");
	gotoxy(8, 21);

	if (flag)
	{
		printf("Record Updated Successfully.");
	}
	else
	{
		printf("No Record For Update.");
	}

}

//Defination for Deleting item......

void delete_item()
{
	int Temp = 0, flag = 0, flv = 0;
	struct ItemsInfo item;
	FILE *cfile, *cfile_TMP;
	cfile_TMP = fopen("TMP.DAT", "wb");
	flushall();
	cfile = fopen("item.DAT", "rb");
	welcome();
	printf(":::::::::::::::::::::DELETE ITEM ENTERY::::::::::::::::::::::::::");
	gotoxy(8, 12);
	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record For Update...");
	}
	else
	{


		printf("Enter The Product ID Wich You Want to Delete : ");
		do
		{
			flushall();
			flv = scanf("%d", &Temp);
			if (flv != 1)
			{
				gotoxy(8, 12);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 12);
				printf("Please Enter Valid Product ID : ");

			}

		} while (flv != 1);

		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile))
		{
			if (item.intProductID != Temp)
			{
				fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);
			}
			else
			{
				flag = 1;
			}
		}
	}

	fclose(cfile);
	fclose(cfile_TMP);

	remove("item.DAT");
	rename("TMP.DAT", "item.DAT");
	gotoxy(8, 18);
	if (flag)
	{
		printf("Record Deleted Successfully.");
	}
	else
	{
		printf("No Record For Delete.");
	}
}

///......................................................................................
//............................................END ITEMS...................................
//.......................................................................................

//.......................................................................................
//.............................................Purchase Product..........................
//.......................................................................................

//...............................Purchase Menu..........................................
void purchase_menu()
{
	int choice, flv = 0;
	clrscr();
	welcome();
	printf("::::::::::::::::::::::::: PURCHASE MENU :::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("1.Purchase New Item.");
	gotoxy(8, 13);
	printf("2.Purchase Existing Item.");
	gotoxy(8, 14);
	printf("3.Purchase Record.");
	gotoxy(8, 15);
	printf("4.Main Menu");
	gotoxy(8, 16);
	printf("5.Exit");
	gotoxy(8, 18);
	printf("Enter Your Choice : ");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 18);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 18);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);

		switch (choice)
		{
		case 1:
			clrscr();
			purchase_new();
			break;
		case 2:
			clrscr();
			purchase_exist();
			break;
		case 3:
			clrscr();
			purchae_record();
			break;
		case 4:
			clrscr();
			MainMenu();
			break;
		case 5:
			clrscr();
			exit();
			break;
		default:
			gotoxy(8, 18);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ");
			gotoxy(8, 18);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			flushall();
			choice = 0;
		}
	} while (choice<1 || choice>5);

	gotoxy(8, 24);

	printf("7.Main Menu 8.Back 9.Exit");


	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 25);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 25);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);
		switch (choice)
		{

		case 7:
			clrscr();
			MainMenu();
			break;
		case 8:
			clrscr();
			purchase_menu();
			break;
		case 9:
			exit();
		default:
			gotoxy(8, 25);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 25);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice<7 || choice >9);


}
///...................................................................................

//..............................Purchase New Item.....................................

void purchase_new()
{
	int flag = 1, flv = 0;

	struct ItemsInfo item;
	struct supplierInfo supplier;
	struct PurchaseProduct  purchase;

	FILE *cfile, *sfile, *pfile;

	cfile = fopen("item.DAT", "r");

	if (cfile == NULL)
	{
		cfile = fopen("item.DAT", "ab+");
		item.intProductID = 1;
	}
	else
	{
		cfile = fopen("item.DAT", "ab+");

		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile) != 0)
		{
			item.intProductID++;
		}
	}
	welcome();
	printf(":::::::::::::::::::PURCHASE NEW PRODUCT::::::::::::::::::::::::");
	gotoxy(8, 12);

	flushall();
	printf("Enter The Product Name : ");
	gets(item.chrProductName);

	gotoxy(8, 13);
	flushall();
	printf("Entet The Descrition About Product : ");
	gets(item.chrDescrition);

	gotoxy(8, 14);
	flushall();
	printf("Enter The Product Purchase Price : ");
	do
	{
		flushall();
		flv = scanf("%f", &item.fltPriceToPurchse);
		if (flv != 1)
		{
			gotoxy(8, 14);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 14);
			printf("Enter Valid Purchase Price : ");
		}

	} while (flv != 1);

	gotoxy(8, 15);
	printf("Enter The Product Selling Price : ");
	do
	{
		flushall();
		flv = scanf("%f", &item.fltProceToSold);

		if (flv != 1)
		{
			gotoxy(8, 15);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 15);
			printf("Enter Valid Selling Price : ");
		}

	} while (flv != 1);


	gotoxy(8, 16);
	flushall();
	printf("Enter The Quantity Of Product : ");
	do
	{
		flushall();
		flv = scanf("%d", &item.intQuantity);

		if (flv != 1)
		{
			gotoxy(8, 16);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 16);
			printf("Enter Valid Quantity : ");
		}

	} while (flv != 1);

	gotoxy(8, 17);
	printf("Enter The Supplire ID (Enter 0 if Don't Have) : ");
	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &item.intSuplireID);
			if (flv != 1)
			{
				gotoxy(8, 17);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 17);
				printf("Please Enter Valid Supplier ID : ");

			}

		} while (flv != 1);
		if (item.intSuplireID != 0)
		{

			sfile = fopen("supplier.DAT", "r");

			if (sfile == NULL)
			{
				item.intSuplireID = 0;
			}
			else
			{
				while (fread(&supplier, sizeof(struct supplierInfo), 1, sfile) != 0)
				{

					if (supplier.intsupplierID == item.intSuplireID)
					{
						flag = 1;
						break;
					}
					else
					{
						flag = 0;
					}
				}
			}
			if (!flag)
			{
				gotoxy(8, 17);
				printf("Suplier ID Not Found.Enter Valid ID : ");
			}
		}
		else
		{
			flag = 1;
		}
	} while (flag == 0);

	fwrite(&item, sizeof(struct ItemsInfo), 1, cfile);
	fclose(cfile);
	fclose(sfile);

	pfile = fopen("Purchase.DAT", "ab+");
	strcpy(purchase.Date, GetDateTime());
	purchase.ProductID = item.intProductID;
	purchase.SupplireID = supplier.intsupplierID;
	purchase.Quntity = item.intQuantity;
	purchase.Price = item.fltPriceToPurchse;
	purchase.Ammount = (float)item.intQuantity * purchase.Price;

	fflush(stdin);

	fwrite(&purchase, sizeof(struct PurchaseProduct), 1, pfile);
	fclose(pfile);

	clrscr();
	welcome();
	printf("::::::::::::::::::::::::PURCHASE INFORMATION:::::::::::::::::::::");
	gotoxy(8, 12);
	printf("Date : %s", purchase.Date);
	gotoxy(8, 13);
	printf("Product ID : %d", purchase.ProductID);
	gotoxy(8, 14);
	printf("Product Name : %s ", item.chrProductName);
	gotoxy(8, 15);
	printf("Supplier ID : %d", purchase.SupplireID);
	gotoxy(8, 16);
	printf("Quntity : %d", purchase.Quntity);
	gotoxy(8, 17);
	printf("Price : %f", purchase.Price);
	gotoxy(8, 18);
	printf("Ammount : %f", purchase.Ammount);
	gotoxy(8, 20);
	printf("Item Purchased Successfully .");

}

//......................................................................................................

//............................................Purchase Exist............................................
void purchase_exist()
{
	int Temp = 0, flag = 0, Quntity = 0, flv = 0;
	struct ItemsInfo item;
	struct supplierInfo supplier;
	struct PurchaseProduct  purchase;

	FILE *cfile, *cfile_TMP, *sfile;

	cfile_TMP = fopen("TMP.DAT", "wb");
	flushall();
	cfile = fopen("item.DAT", "rb");
	welcome();
	printf(":::::::::::::::::::PURCHASE EXISTING ITEM::::::::::::::::::::::");
	gotoxy(8, 12);
	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record For Update...");
	}
	else
	{
		printf("Enter The Product ID Wich You Want to Buy : ");
		do
		{
			flushall();
			do
			{
				flushall();
				flv = scanf("%d", &Temp);
				if (flv != 1)
				{
					gotoxy(8, 12);
					printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

					gotoxy(8, 12);
					printf("Please Enter Valid Product ID : ");

				}

			} while (flv != 1);

			if (flv != 1)
			{
				gotoxy(8, 12);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
				gotoxy(8, 12);
				printf("Enter Valid Product ID : ");
			}

		} while (flv != 1);

		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile))
		{
			if (item.intProductID == Temp)
			{
				flushall();

				gotoxy(8, 14);
				printf("Product Name : %s", item.chrProductName);
				gotoxy(8, 15);
				printf("Descrition About Product : %s", item.chrDescrition);
				gotoxy(8, 16);
				printf("Purchase Price : %f", item.fltPriceToPurchse);
				gotoxy(8, 17);
				printf("Selling Price : %f", item.fltProceToSold);
				gotoxy(8, 18);
				printf("Quantity Of Product : %d", item.intQuantity);
				gotoxy(8, 19);
				printf("Supplire ID : %d", item.intSuplireID);
				flushall();
				gotoxy(8, 20);

				printf("Enter Quantity That You Want To Purchase (Numrice Only) : ");
				do
				{
					flushall();
					flv = scanf("%d", &Quntity);

					if (flv != 1)
					{
						gotoxy(8, 20);
						printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
						gotoxy(8, 20);
						printf("Enter Valid Quantity : ");
					}

				} while (flv != 1);

				item.intQuantity += Quntity;

				fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);
				flag = 1;

			}
			else
			{
				fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);
			}
		}
	}

	fclose(cfile);
	fclose(cfile_TMP);

	remove("item.DAT");
	rename("TMP.DAT", "item.DAT");

	if (flag)
	{
		cfile = fopen("Purchase.DAT", "ab+");
		strcpy(purchase.Date, GetDateTime());
		purchase.ProductID = Temp;
		purchase.SupplireID = item.intSuplireID;
		purchase.Quntity = Quntity;
		purchase.Price = item.fltPriceToPurchse;
		purchase.Ammount = (float)Quntity * purchase.Price;

		fflush(stdin);

		fwrite(&purchase, sizeof(struct PurchaseProduct), 1, cfile);
		fclose(cfile);

		clrscr();

		welcome();
		printf("::::::::::::::::::::PURCHASE INFORMATION:::::::::::::::::::::::");
		gotoxy(8, 12);

		printf("Date : %s", purchase.Date);
		gotoxy(8, 14);
		printf("Product ID : %d", purchase.ProductID);
		gotoxy(8, 15);
		printf("Product Name : %s", item.chrProductName);
		gotoxy(8, 16);
		printf("Supplier ID : %d", purchase.SupplireID);
		gotoxy(8, 17);
		printf("Quntity : %d", purchase.Quntity);
		gotoxy(8, 18);
		printf("Price : %f", purchase.Price);
		gotoxy(8, 18);
		printf("Ammount : %f", purchase.Ammount);

		gotoxy(8, 20);
		printf("Item Purchased Successfully.\n");
	}
	else
	{
		gotoxy(15, 15);
		printf("No Product For Buy.\n");
	}


}
//............................................................................................

//.........................................purchase_record....................................
void purchae_record()
{
	int x = 14;
	struct PurchaseProduct  purchase;
	FILE *cfile;
	cfile = fopen("Purchase.DAT", "rb");
	welcome();
	printf(":::::::::::::::::::::::LIST OF PURCHASE:::::::::::::::::::::::::::");
	gotoxy(8, 12);
	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record Found");
	}
	else
	{
		gotoxy(0, 12);
		printf(" %-20s | %-3s | %7s | %-3s | %-7s ", "Date", "PID", "Price", "Qun", "Ammount");

		while (fread(&purchase, sizeof(struct PurchaseProduct), 1, cfile) != 0)
		{
		     //
			gotoxy(8, x);
			printf(" %-20.20s | %-3d | %7.2f | %-3d | %f ", purchase.Date, purchase.ProductID, purchase.Price, purchase.Quntity, purchase.Ammount);
			x++;
			flushall();
			/*printf("\n\n");
			printf("Date : %10s", purchase.Date);
			printf("\nProduct ID : %3d", purchase.ProductID);
			printf("\nSupplier ID : %3d", purchase.SupplireID);
			printf("\nPrice : %5.2f", purchase.Price);
			printf("\nQuantity : %3d", purchase.Quntity);
			printf("\nAmmount : %5.f", purchase.Ammount);
			getch();*/
		}

		printf("\n");
		fclose(cfile);
	}
}

////.......................................................................................
////........................................End Purchase Product.........................
////.......................................................................................


////........................................................................................
////......................................Sale Product......................................
////........................................................................................

///......................................sale_menu.........................................

void sale_menu()
{
	int choice, flv;
	clrscr();
	flushall();
	welcome();
	printf("::::::::::::::::::::::::::: SALE MENU::::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("1.Sale Item.");
	gotoxy(8, 13);
	printf("2.Sale Record");
	gotoxy(8, 14);
	printf("3.Main Menu");
	gotoxy(8, 15);
	printf("4.Exit");
	gotoxy(8, 16);
	printf("Enter Your Choice : ");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 16);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 16);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);

		switch (choice)
		{
		case 1:
			clrscr();
			sale_product();
			break;
		case 2:
			clrscr();
			sale_record();
			break;
		case 3:
			clrscr();
			MainMenu();
			break;
		case 4:
			clrscr();
			exit();
			break;
		default:
			gotoxy(8, 16);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ");
			gotoxy(8, 16);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			flushall();
			choice = 0;
		}
	} while (choice<1 || choice>4);

	gotoxy(8, 24);
	printf("7.Main Menu 8.Back 9.Exit");

	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 25);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 25);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);
		switch (choice)
		{

		case 7:
			clrscr();
			MainMenu();
			break;
		case 8:
			clrscr();
			sale_menu();
			break;
		case 9:
			exit();
		default:
			gotoxy(8, 25);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ");
			gotoxy(8, 25);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice<7 || choice >9);


}
//....................................................................................

//.............................sale_product...........................................

void sale_product()
{
	int Temp = 0, flag = 0, flv = 0, flag1 = 0, Quntity = 0, i = 0, choice = 0;
	struct ItemsInfo item;
	struct SaleProduct sale;
	FILE *cfile, *cfile_TMP, *sfile;

	cfile_TMP = fopen("TMP.DAT", "wb");
	flushall();
	cfile = fopen("item.DAT", "rb");

	welcome();
	printf("::::::::::::::::::::::::SALE ITEM::::::::::::::::::::::::::::::");
	gotoxy(8, 12);

	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record For Update...");
	}
	else
	{

		printf("Enter The Product ID Wich You Want to Sale : ");
		do
		{
			flushall();
			flv = scanf("%d", &Temp);
			if (flv != 1)
			{
				gotoxy(8, 12);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 12);
				printf("Please Enter Valid Product ID : ");

			}

		} while (flv != 1);

		while (fread(&item, sizeof(struct ItemsInfo), 1, cfile))
		{
			if (item.intProductID == Temp)
			{
				flushall();
				gotoxy(8, 14);
				printf("Product Name : %s", item.chrProductName);
				gotoxy(8, 16);
				printf("Descrition About Product : %s", item.chrDescrition);
				gotoxy(8, 17);
				printf("Selling Price : %f", item.fltProceToSold);
				gotoxy(8, 18);
				printf("Quantity Of Product : %d", item.intQuantity);
				gotoxy(8, 19);
				printf("Supplire ID : %d", item.intSuplireID);

				if (item.intQuantity < 1)
				{
					gotoxy(8, 21);
					printf("Product No Avilable in Stock");
					fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);
					flag = -1;
				}
				else
				{
					flushall();
					gotoxy(8, 21);

					printf("Enter Ammount That You Want To Sale (Numrice Only) : ");


					do
					{
						flushall();
						flv = scanf("%d", &Quntity);
						if (flv != 1)
						{
							gotoxy(8, 21);
							printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

							gotoxy(8, 21);
							printf("Please Enter Valid Quantity : ");

						}

					} while (flv != 1);

					if (Quntity > item.intQuantity)
					{
						gotoxy(8, 22);

						printf("Only %d Items in Stock.Enter 1 For Continue Sale OR 2  For Sale Menu.", item.intQuantity);
						do
						{
							flushall();
							scanf("%d", &choice);
							switch (choice)
							{
							case 1:

								Quntity = item.intQuantity;

								flag1 = 1;
								break;
							case 2:
								continue;
							default:
								gotoxy(8, 23);
								printf("Invaid Choice.Please Enter Only Valid Numeric Value : ");
							}

						} while (choice > 2 || choice < 1);
					}
					else
					{
						flag1 = 1;
					}


					if (flag1)
					{
						item.intQuantity -= Quntity;

						fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);
						flag = 1;

						flushall();
						gotoxy(8, 22);
						printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
						gotoxy(8, 22);

						printf("Enter Customer Name : ");

						do{

							i = 0;
							flushall();
							gets(sale.CustomerName);
							while (sale.CustomerName[i] != '\0')
							{
								if (!isalpha(sale.CustomerName[i]))
								{
									flag1 = 1;
									gotoxy(8, 22);

									printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
									gotoxy(8, 22);

									printf("Enter Valid Customer Name : ");
									break;
								}
								else
								{
									flag1 = 0;
								}
								i++;
							}

						} while (flag1 == 1);

						flushall();
						gotoxy(8, 23);
						printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
						gotoxy(8, 23);
						printf("Mobile NO : ");
						flag1 = 0;
						i = 0;
						do
						{
							i = 0;
							flushall();
							gets(sale.MobileNo);

							while (sale.MobileNo[i] != '\0')
							{
								if (!isdigit(sale.MobileNo[i]) || strlen(sale.MobileNo) < 10 || strlen(sale.MobileNo) > 10)
								{
									flag1 = 1;
									gotoxy(8, 23);

									printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
									gotoxy(8, 23);

									printf("Enter Valid Contact No : ");
									break;
								}
								else
								{
									flag1 = 0;
								}
								i++;
							}

						} while (flag1 == 1);

						sfile = fopen("sale.DAT", "ab+");
						strcpy(sale.Date, GetDateTime());
						sale.ProductID = Temp;
						sale.Quntity = Quntity;
						sale.Price = item.fltPriceToPurchse;
						sale.Ammount = (float)Quntity * sale.Price;

						fflush(stdin);

						fwrite(&sale, sizeof(struct SaleProduct), 1, sfile);
						fclose(sfile);

						clrscr();
						welcome();
						printf("::::::::::::::::::::SALE INFORMATION::::::::::::::::::::::::::");
						gotoxy(8, 12);

						printf("Date : %s", sale.Date);
						gotoxy(8, 14);
						printf("Product ID : %d", sale.ProductID);
						gotoxy(8, 15);
						printf("Product Name : %s", item.chrProductName);
						gotoxy(8, 16);
						printf("Customer Name : %s", sale.CustomerName);
						gotoxy(8, 17);
						printf("Mobile No : %s", sale.MobileNo);
						gotoxy(8, 18);
						printf("Quntity : %d", sale.Quntity);
						gotoxy(8, 19);
						printf("Price : %f", sale.Price);
						gotoxy(8, 20);
						printf("Ammount : %f", sale.Ammount);
						gotoxy(8, 22);
						printf("Item Purchased Successfully.");
					}
				}
			}
			else
			{
				fwrite(&item, sizeof(struct ItemsInfo), 1, cfile_TMP);
			}
		}
	}

	fclose(cfile);
	fclose(cfile_TMP);

	remove("item.DAT");
	rename("TMP.DAT", "item.DAT");

	if (choice == 2)
	{
		sale_menu();
	}
	if (!flag)
	{
		gotoxy(15, 15);

		printf("No Product For Sale.");
	}

}

//......................................................................................
//.......................................sale_record....................................

void sale_record()
{

	struct SaleProduct sale;
	int x = 14;
	char *str;
	FILE *cfile;
	cfile = fopen("sale.DAT", "rb");
	welcome();
	printf(":::::::::::::::::::::::::SALE RECORD:::::::::::::::::::::::::::");

	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record Found");
	}
	else
	{
		gotoxy(2, 12);
		printf("%-20s | %-3s | %-12s | %10s | %-6s | %-3s | %-6s ", "Date", "PID", "Cust_Name", "Mobile_No", "Price", "Qun", "Ammount");

		while (fread(&sale, sizeof(struct SaleProduct), 1, cfile) != 0)
		{
			str = Datepart(sale.Date);
			gotoxy(2, x);
			printf("%-20.20s | %-3d | %-12.12s | %-10s | %6.2f | %-3d | %6.2f", str, sale.ProductID, sale.CustomerName, sale.MobileNo, sale.Price, sale.Quntity, sale.Ammount);
			x++;

			/*flushall();
			printf("\n\n");
			printf("Date : %10s", sale.Date);
			printf("\nProduct ID : %3d", sale.ProductID);
			printf("\nCustomer Name : %10s", sale.CustomerName);
			printf("\nMobile No : %10s", sale.MobileNo);
			printf("\nPrice : %3f", sale.Price);
			printf("\nQuantity : %5d", sale.Quntity);
			printf("\nAmmount : %5.f", sale.Ammount);
			getch();*/
		}

		printf("\n");
		fclose(cfile);
	}
}
//......................................................................................

//.....................................................................................
//.....................................................................................
//.....................................................................................

//.....................................................................................
//.........................................Report Menu.................................
//.....................................................................................

//.........................................report menu.................................

void report_menu()
{
	int choice, flv = 0;
	clrscr();
	welcome();

	printf(":::::::::::::::::::::::::::: REPORT MENU :::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("1.Sale Report.");
	gotoxy(8, 13);
	printf("2.Purchase Report.");
	gotoxy(8, 14);
	printf("3.Supplier Report.");
	gotoxy(8, 15);
	printf("4.Main Menu");
	gotoxy(8, 16);
	printf("5.Exit");
	gotoxy(8, 18);
	printf("Enter Your Choice : ");

	do
	{

		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 18);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 18);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);

		switch (choice)
		{
		case 1:
			clrscr();
			sale_report();
			break;
		case 2:
			clrscr();
			purchase_report();
			break;
		case 3:
			clrscr();
			supplier_report();
			break;
		case 4:
			clrscr();
			MainMenu();
			break;
		case 5:
			clrscr();
			exit();
			break;
		default:
			gotoxy(8, 18);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 18);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			flushall();
			choice = 0;
		}
	} while (choice<1 || choice>4);

	gotoxy(8, 24);

	printf("7.Main Menu 8.Back 9.Exit");


	do
	{
		do
		{
			flushall();
			flv = scanf("%d", &choice);
			if (flv != 1)
			{
				gotoxy(8, 25);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

				gotoxy(8, 25);
				printf("Invalid Choice.Please Enter Valid Numeric Number : ");

			}

		} while (flv != 1);
		switch (choice)
		{

		case 7:
			clrscr();
			MainMenu();
			break;
		case 8:
			clrscr();
			report_menu();
			break;
		case 9:
			exit();
		default:
			gotoxy(8, 25);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 25);
			printf("Invalid Choice.Please Enter Valid Numeric Number : ");
			choice = 0;
			flushall();
		}
	} while (choice<7 || choice >9);


}
//
//
////.....................................................................................
//
//
////.................sale_report....................................................
//
void sale_report()
{
	FILE *cfile, *sfile;
	char mon[3], month[3], year[4],*str;
	int date, j, i, flag1 = 0, flag = 0, x = 14;
	struct SaleProduct sale;
	struct ItemsInfo item;
	float profit = 0;

	welcome();

	printf(":::::::::::::::::::::::::::: SALE REPORT :::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("Enter The Month <Mmm Format eg.Jan> : ");
	do
	{
		flushall();
		gets(month);

		if (strlen(month) != 3 || !isupper(month[0]) || isupper(month[1]) || isupper(month[2]) || !isalpha(month[0]) || !isalpha(month[1]) || !isalpha(month[2]))
		{
			gotoxy(8, 12);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 12);
			flag = 0;
			printf("Please Enter Valid Month : ");
		}
		else
		{
			flag = 1;
		}

	} while (flag == 0);

	gotoxy(8, 14);
	printf("Enter The Year : <YYYY Format eg.2015> : ");

	do
	{
		flushall();
		gets(year);

		if (strlen(year) != 4 || !isdigit(year[0]) || !isdigit(year[1]) || !isdigit(year[2]) || !isdigit(year[3]))
		{
			gotoxy(8, 14);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 14);
			flag = 0;
			printf("Please Enter Valid Year : ");
		}
		else
		{
			flag = 1;
		}
	} while (flag == 0);



	cfile = fopen("sale.DAT", "rb");

	if (cfile == NULL)
	{
		gotoxy(15, 15);

		printf("No Record Found");
	}
	else
	{
		clrscr();
		welcome();
		printf("::::::::::::::::::::::::::::SALE REPORT:::::::::::::::::::::::::::", month, year);
		gotoxy(2, 12);
		printf("%-20s | %-3s | %-12s | %10s | %-6s | %-3s | %-6s ", "Date", "PID", "Cust_Name", "Mobile_No", "Price", "Qun", "Ammount");
		while (fread(&sale, sizeof(struct SaleProduct), 1, cfile) != 0)
		{
			if (strstr(sale.Date, month) && strstr(sale.Date, year))
			{
				str = Datepart(sale.Date);
				gotoxy(2, x);
				printf("%-20.20s | %-3d | %-12.12s | %-10s | %6.2f | %-3d | %6.2f",str, sale.ProductID, sale.CustomerName, sale.MobileNo, sale.Price, sale.Quntity, sale.Ammount);
				x++;
				/*flushall();
				printf("\n\n");
				printf("Date : %10s", sale.Date);
				printf("\nProduct ID : %3d", sale.ProductID);
				printf("\nCustomer Name : %10s", sale.CustomerName);
				printf("\nMobile No : %10s", sale.MobileNo);
				printf("\nPrice : %3f", sale.Price);
				printf("\nQuantity : %5d", sale.Quntity);
				printf("\nAmmount : %5.f", sale.Ammount);
				getch();*/
				flag1 += 1;

				sfile = fopen("item.DAT", "rb");

				while (fread(&item, sizeof(struct ItemsInfo), 1, sfile) != 0)
				{
					if (sale.ProductID == item.intProductID)
					{
						profit += ((item.fltProceToSold - item.fltPriceToPurchse)*sale.Quntity);
					}
				}
				close(sfile);
			}
		}

		printf("\n\t\t\t\t");
		if (flag1 == 0)
		{
			printf("No Record Found");
		}
		else
		{
			gotoxy(15, x + 2);
			printf("Total Profit/Loss : %f", profit);
		}

		printf("\n");
		fclose(cfile);
	}
}

//.....................................................................................

////.................purchase_report....................................................
//
void purchase_report()
{
	FILE *cfile;
	char mon[3], month[3], year[4];
	int date, j, i, flag1 = 0, flag = 0, x = 14;
	struct PurchaseProduct  purchase;

	welcome();

	printf("::::::::::::::::::::::::: PURCHASE REPORT ::::::::::::::::::::::::");
	gotoxy(8, 12);
	printf("Enter The Month <Mmm Format eg.Jan> : ");
	do
	{
		flushall();
		gets(month);

		if (strlen(month) != 3 || !isupper(month[0]) || isupper(month[1]) || isupper(month[2]) || !isalpha(month[0]) || !isalpha(month[1]) || !isalpha(month[2]))
		{
			gotoxy(8, 12);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 12);
			flag = 0;
			printf("Please Enter Valid Month : ");
		}
		else
		{
			flag = 1;
		}

	} while (flag == 0);

	gotoxy(8, 14);
	printf("Enter The Year : <YYYY Format eg.2015> : ");

	do
	{
		flushall();
		gets(year);

		if (strlen(year) != 4 || !isdigit(year[0]) || !isdigit(year[1]) || !isdigit(year[2]) || !isdigit(year[3]))
		{
			gotoxy(8, 14);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
			gotoxy(8, 14);
			flag = 0;
			printf("Please Enter Valid Year : ");
		}
		else
		{
			flag = 1;
		}
	} while (flag == 0);

	cfile = fopen("purchase.DAT", "rb");

	if (cfile == NULL)
	{
		gotoxy(15, 15);
		printf("No Record Found");
	}
	else
	{
		clrscr();
		welcome();
		printf("::::::::::::::::::::::::PURCHASE REPORT ::::::::::::::::::::::::::");

		gotoxy(8, 12);
		printf(" %-20s | %-3s | %7s | %-3s | %-7s ", "Date", "PID", "Price", "Qun", "Ammount");

		while (fread(&purchase, sizeof(struct PurchaseProduct), 1, cfile) != 0)
		{
			if (strstr(purchase.Date, month) && strstr(purchase.Date, year))
			{
				gotoxy(8, x);
				printf(" %-20.20s | %-3d | %7.2f | %-3d | %f ", purchase.Date, purchase.ProductID, purchase.Price, purchase.Quntity, purchase.Ammount);
				x++;
				/*flushall();
				printf("\n\n");
				printf("Date : %10s", purchase.Date);
				printf("\nProduct ID : %3d", purchase.ProductID);
				printf("\nSupplier ID : %3d", purchase.SupplireID);
				printf("\nPrice : %5.2f", purchase.Price);
				printf("\nQuantity : %3d", purchase.Quntity);
				printf("\nAmmount : %5.f", purchase.Ammount);
				getch();*/
				flag1 += 1;
			}
		}


		if (flag1 == 0)
		{
			gotoxy(15, 15);
			printf("No Record Found");
		}

		printf("\n");
		fclose(cfile);
	}
}

//.....................................................................................

////.................supplier_report....................................................
//
void supplier_report()
{
	FILE *cfile, *ifile;
	char mon[3], month[3], year[4];
	int date, j, i, flag1 = 0, flag2 = 0, x = 19, flv = 0;
	struct supplierInfo  supplier;
	struct ItemsInfo item;

	welcome();
	printf("::::::::::::::::::::SUPPLIER INFORMATION::::::::::::::::::::::::::");
	gotoxy(8, 12);

	printf("Enter Supplier ID : ");
	do
	{
		flushall();
		flv = scanf("%d", &flag1);
		if (flv != 1)
		{
			gotoxy(8, 12);
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

			gotoxy(8, 12);
			printf("Please Enter Valid Supplier ID : ");

		}

	} while (flv != 1);


	cfile = fopen("supplier.DAT", "rb");

	while (fread(&supplier, sizeof(struct supplierInfo), 1, cfile) != 0)
	{

		if (supplier.intsupplierID == flag1)
		{
			clrscr();
			welcome();
			printf("::::::::::::::::::::SUPPLIER INFORMATION::::::::::::::::::::::::::");
			gotoxy(8, 11);
			printf("Supplier ID : %d", supplier.intsupplierID);
			gotoxy(8, 12);
			printf("Supplier Name : %s", supplier.chrsupplierName);
			gotoxy(8, 13);
			printf("Location : %s", supplier.chrsupplierAddress);
			gotoxy(8, 14);
			printf("Contact No : %s", supplier.lintContact);
			gotoxy(8, 15);
			printf(":::::::::::::::::::ITEM SUPPLY BY SUPPLIER::::::::::::::::::::::::");

			ifile = fopen("item.DAT", "rb");

			if (cfile == NULL)
			{
				gotoxy(15, 15);
				printf("No Record Found");
			}
			else
			{
				gotoxy(3, 17);
				printf(" %-3s | %-15.15s | %-18s | %-7s | %-7s | %-3s | %3s", "ID", "NAME", "Desc", "P_Price", "S_Price", "Qun", "SID");

				while (fread(&item, sizeof(struct ItemsInfo), 1, ifile) != 0)
				{
					if (item.intSuplireID == supplier.intsupplierID)
					{
						gotoxy(3, x);
						printf(" %-3d | %-15.15s | %-18.18s | %-7.2f | %-7.2f | %-3d | %-3d ", item.intProductID, item.chrProductName, item.chrDescrition, item.fltPriceToPurchse, item.fltProceToSold, item.intQuantity, item.intSuplireID);
						x++;
					}
				}

				printf("\n");
				fclose(ifile);

				flag2 = 0;
				break;
			}
		}
		else
		{
			flag2 = 1;
		}
	}

	if (flag2)
	{
		gotoxy(15, 15);
		printf("No Record Found");
	}
	fclose(cfile);
}
//.....................................................................................
//.....................................................................................
//.....................................................................................
//.....................................................................................
