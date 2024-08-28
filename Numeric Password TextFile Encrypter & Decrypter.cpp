//                             ***********Numeric Password TextFile Encrypter & Decrypter Program.***********
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
long long pass_accept(void);

//            X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X

// Main Function.
int main()
{
	char Press;

cout<<"\n\t\t\t\t ======================================================================"<<endl;
cout<<"\t\t\t\t ||*** Welcome to Numeric Password TextFile Encrypter & Decrypter ***||";
cout<<"\n\t\t\t\t ======================================================================"<<endl;
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
    cout<<"\n\t\t\t\t\t Numeric Password Textfile Encrypter";
    cout<<"\n\t\t\t\t\t ===================================";
    cout<<"\n\n\tEnter the address/location of Textfile with its extension (e.g: E:\\xyz.txt): ";
    gets(fileName);
    password=pass_accept();
    system("CLS");
    cout<<"\n\t\t\t\t\t Numeric Password Textfile Encrypter";
    cout<<"\n\t\t\t\t\t ==================================="<<endl<<endl<<endl;
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
    cout<<"\n\t\t\t\t\t Numeric Password Textfile Decrypter";
    cout<<"\n\t\t\t\t\t ===================================";
    cout<<"\n\n\tEnter the address/location of Textfile with its extension (e.g: E:\\xyz.txt): ";
    gets(fileName);
    password=pass_accept();
    system("CLS");
    cout<<"\n\t\t\t\t\t Numeric Password Textfile Decrypter";
    cout<<"\n\t\t\t\t\t ==================================="<<endl<<endl<<endl;
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

// Numeric Password Accepter & Returner.
long long pass_accept(void)
{
	long long password, password_1,password_2;

cout<<"\n\n\t Enter your Numeric Password to Encrypt/Decrypt TextFile: ";
cin>>password_1;
system("CLS");
cout<<"\n\t Confirm your Numeric Password to Encrypt/Decrypt TextFile: ";
cin>>password_2;
system("CLS");
	if(password_1==password_2)
	{
		password=password_1;
		return password;
	}
	else
	{
		cout<<"\n\n\t Your Entered Passwords didn't Matched!...........";
		getch(); exit(0);
	}
	
}

/*            X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X
              X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X                        */
