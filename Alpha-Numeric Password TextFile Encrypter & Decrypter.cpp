//                             ***********Alpha-Numeric Password TextFile Encrypter & Decrypter Program.***********
// Header Files
#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

// Function Declarations.
void textfile_encrypter(void);
void textfile_decrypter(void);
long long P_A_A_I_C_R(void);

//            X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X

// Main Function.
int main()
{
	char Press;

cout<<"\n\t\t\t\t ============================================================================"<<endl;
cout<<"\t\t\t\t ||*** Welcome to Alpha-Numeric Password TextFile Encrypter & Decrypter ***||";
cout<<"\n\t\t\t\t ============================================================================"<<endl;
cout<<"\n\t What do you want to do with your TextFile, Encrypt or Decrypt (E/D)....?? ";
Press=getch();

if (Press=='E' ||Press=='e')
	{
	textfile_encrypter();
	}
else if (Press=='D' ||Press=='d')
	{
	textfile_decrypter();
	}
else
	exit(0);

getch();
return 0;
}

//            X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X

//                                     *******Function Definitions.*******

// Function to Encrypt a Textfile.
void textfile_encrypter(void)
{
    char fileName[30], ch;
    long long password=0;
    fstream fps, fpt;
    system("CLS");
    cout<<"\n\t\t\t\t\t Alpha-Numeric Password Textfile Encrypter";
    cout<<"\n\t\t\t\t\t =========================================";
    cout<<"\n\n\tEnter the address/location of Textfile with its extension (e.g: E:\\xyz.txt): ";
    gets(fileName);
    password=P_A_A_I_C_R();
    system("CLS");
    cout<<"\n\t\t\t\t\t Alpha-Numeric Password Textfile Encrypter";
    cout<<"\n\t\t\t\t\t ========================================="<<endl<<endl<<endl;
    cout<<"\n ====================================================================================== ";
    fps.open(fileName, fstream::in);
    if(!fps)
    {
        cout<<"\n  Error Occurred, Opening the Source File (to Read)!";
        getch(); exit(0);
    }
    fpt.open("tmp.txt", fstream::out);
    if(!fpt)
    {
        cout<<"\n  Error Occurred, Opening/Creating the tmp File!";
        getch(); exit(0);
    }
    while(fps>>noskipws>>ch)
    {
        ch = ch+password;
        fpt<<ch;
    }
    fps.close();
    fpt.close();
    fps.open(fileName, fstream::out);
    if(!fps)
    {
        cout<<"\n  Error Occurred, Opening the Source File (to write)!";
        getch(); exit(0);
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
        cout<<"\n  Error Occurred, Opening the tmp File!";
        getch(); exit(0);
    }
    while(fpt>>noskipws>>ch)
        fps<<ch;
    fps.close();
    fpt.close();
    cout<<"\nFile '"<<fileName<<"' Encrypted Successfully!";
    cout<<endl;
    cout<<"\n\n Press \"Enter' to Finish\".....";
    getch(); exit(0);
}

// Function to Decrypt a Textfile.
void textfile_decrypter(void)
{
    char fileName[30], ch;
    long long password=0;
    fstream fps, fpt;
    system("CLS");
    cout<<"\n\t\t\t\t\t Alpha-Numeric Password Textfile Decrypter";
    cout<<"\n\t\t\t\t\t =========================================";
    cout<<"\n\n\tEnter the address/location of Textfile with its extension (e.g: E:\\xyz.txt): ";
    gets(fileName);
    password=P_A_A_I_C_R();
    system("CLS");
    cout<<"\n\t\t\t\t\t Alpha-Numeric Password Textfile Decrypter";
    cout<<"\n\t\t\t\t\t ========================================="<<endl<<endl<<endl;
    cout<<"\n ====================================================================================== ";
    fps.open(fileName, fstream::out);
    if(!fps)
    {
        cout<<"\n  Error Occurred while Opening the Source File!";
        getch(); exit(0);
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
        cout<<"\nError Occurred while Opening/Creating tmp File! \n\n Note:- You need the \"tmp.txt\" file of the file you want to Decrypt. If you have deleted the tmp file then copy & paste your the Encrypted file and rename the copy version as \"tmp\" and Run the \"Alpha-Numeric Password TextFile Encrypter & Decrypter\" again.";
        getch(); exit(0);
    }
    while(fpt>>noskipws>>ch)
    {
		ch = ch-password;
        fps<<ch;
    }
    fps.close();
    fpt.close();
    cout<<"\nFile '"<<fileName<<"' Decrypted Successfully!";
    cout<<endl;
    cout<<"\n\n Press \"Enter\" to Finish.....";
    getch(); exit(0);
}

// Alpha_Numeric Password Accepter & Integer Code Returner.
long long P_A_A_I_C_R(void)
{
	short int temp_range, actual_range;
	long long password;
	
cout<<"\n\t Enter the exact range of your Alpha-Numeric Password :- ";
cin>>temp_range;

actual_range= (temp_range-1);

// Receiving Character/String Data.
	char alpha_numeric_password[actual_range]={0};
cout<<"\n\t Enter your Alpha-Numeric Password to Encrypt/Decrypt TextFile (No need to press \"Enter\" key after entering password):- ";
	int a;
for(a=0 ; a<=actual_range ; a++)
	alpha_numeric_password[a]=getche();
cout<<"\n\n\t Password range Ended! & Password Saved!..........";
getch(); system("CLS");

cout<<"\n\n\t  C.C.A.A.N.P Code :	  ";


// Conversion of Character/String Data into Integer Data.
	int b;
for(b=0 ; b<=actual_range ; b++)
	cout<<int(alpha_numeric_password[b]);

cout<<"\n\n\t Copy the above C.C.A.A.N.P Code and Paste here : 	 ";
cin>>password;

	return password;
}

/*            X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X
              X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X                        */
