//                             ***********Auto TextFile Encrypter & Decrypter Program.***********
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

// Global Variable/Constant.
const int password=957465283245;	// This is the password which will be used to encrypt & decrypt a TextFile.

//            X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X

// Main Function.
int main()
{
	char Press;

cout<<"\n\t\t\t\t =========================================================="<<endl;
cout<<"\t\t\t\t ||*** Welcome to Auto TextFile Encrypter & Decrypter ***||";
cout<<"\n\t\t\t\t =========================================================="<<endl;
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
    fstream fps, fpt;
    system("CLS");
    cout<<"\n\t\t\t\t\t Auto Textfile Encrypter";
    cout<<"\n\t\t\t\t\t =======================";
    cout<<"\n\n\tEnter the address/location of Textfile with its extension (e.g: E:\\xyz.txt): ";
    gets(fileName);
    fps.open(fileName, fstream::in);
    if(!fps)
    {
        cout<<"\nError Occurred, Opening the Source File (to Read)!";
        getch(); exit(0);
    }
    fpt.open("tmp.txt", fstream::out);
    if(!fpt)
    {
        cout<<"\nError Occurred, Opening/Creating the tmp File!";
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
        cout<<"\nError Occurred, Opening the Source File (to write)!";
        getch(); exit(0);
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
        cout<<"\nError Occurred, Opening the tmp File!";
        getch(); exit(0);
    }
    while(fpt>>noskipws>>ch)
        fps<<ch;
    fps.close();
    fpt.close();
    cout<<"\nFile '"<<fileName<<"' \aEncrypted Successfully!\a";
    cout<<endl;
    cout<<"\n\n Press \"Enter\" to Finish.....";
    getch(); exit(0);
}

// Function to Decrypt a Textfile.
void textfile_decrypter(void)
{
    char fileName[30], ch;
    fstream fps, fpt;
    system("CLS");
    cout<<"\n\t\t\t\t\t Auto Textfile Decrypter";
    cout<<"\n\t\t\t\t\t =======================";
    cout<<"\n\n\tEnter the address/location of Textfile with its extension (e.g: E:\\xyz.txt): ";
    gets(fileName);
    fps.open(fileName, fstream::out);
    if(!fps)
    {
        cout<<"\nError Occurred while Opening the Source File!";
        getch(); exit(0);
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
        cout<<"\nError Occurred while Opening/Creating tmp File! \n\n Note:- You need the \"tmp.txt\" file of the file you want to Decrypt. If you have deleted the tmp file then copy & paste your the Encrypted file and rename the copy version as \"tmp\" and Run the \"Auto TextFile Encrypter & Decrypter\" again.";
        getch(); exit(0);
    }
    while(fpt>>noskipws>>ch)
    {
        ch = ch-password;
        fps<<ch;
    }
    fps.close();
    fpt.close();
    cout<<"\nFile '"<<fileName<<"' \aDecrypted Successfully!\a";
    cout<<endl;
    cout<<"\n\n Press \"Enter\" to Finish.....";
    getch(); exit(0);
}

/*            X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X
              X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X-------X                        */
