#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include<unistd.h>

char * InstallAppOfChoice(char commandneeded[], char showntext[]) {
    char responsegiven[10];
    printf("%s", showntext);
        fgets(responsegiven,sizeof(responsegiven),stdin);
    responsegiven[strcspn(responsegiven, "\n")] = 0; 
    responsegiven[0] = toupper(responsegiven[0]);
    
    // if they chose no
    if (strcmp(responsegiven,"Q") == 0)
    {
    return "Not Installed";
    }
    
    // install stuff
    else if (strcmp(responsegiven,"Y") == 0)
        {
    system(commandneeded);
    return "Installed";
    }
    
   return "What";
    }

int installSoftware() {
    // Choice data
    char Choice[30];
    char OptionalOther[30];
    char Optional[30];
    char Discord[30];
    char Librewolf[30];
    char KeepFox[30];
    char Steam[30];
    char Amberol[30];
    char Wine[30];
    char Bottles[30];
    char Parabolic[30];
    char Lutris[30];
    
    printf("Do You Wish To Install And Optimize Software Or [Q] to Quit Or [Y]: ");
    
    // Get input
    fgets(Choice,sizeof(Choice),stdin);
    Choice[strcspn(Choice, "\n")] = 0; 
    Choice[0] = toupper(Choice[0]);
    
    // if they chose no
    if (strcmp(Choice,"Q") == 0)
    {
        exit(0);
    }
    
    // remove snap stuff
    else if (strcmp(Choice,"Y") == 0)
    {
        system("snap disable firefox && snap remove --purge firefox");
        
        sleep(1);
        
        system("sudo apt install firefox");
sleep(1)
        
        printf("Would you like to install all software or select manually? [A] for all [M] for manual selection.");
        
        // get input again
        fgets(OptionalOther,sizeof(OptionalOther),stdin);
OptionalOther[strcspn(OptionalOther, "\n")] = 0;
            OptionalOther[0] = toupper(OptionalOther[0]);
            
            // instantly install all stuff
            if (strcmp(OptionalOther,"A") == 0)
            {
                printf("Installing Useful Software[Discord,Amberol,Parabolic,Bottles,Lutris,Wine,Steam]");
        
        sleep(1);
        
        system("flatpak install com.discordapp.Discord -y && flatpak install flathub io.bassi.Amberol -y && flatpak install org.nickvision.tubeconverter -y && flatpak install com.usebottles.bottles -y && flatpak install flathub net.lutris.Lutris -y && sudo apt install wine -y && flatpak install com.valvesoftware.Steam -y && flatpak override --user --filesystem=/path/to/your/Steam/Library com.valvesoftware.Steam && flatpak install flathub io.gitlab.librewolf-community -y");
        
        sleep(1);
        
                }
                
                // if they chose MANUAL choice
                else if (strcmp(OptionalOther,"M") == 0)
                {
                 printf("Would You Like To Install Discord? [Y/N]")
                     
                             fgets(Discord,sizeof(Discord),stdin);
Discord[strcspn(Discord, "\n")] = 0;
            Discord[0] = toupper(Discord[0]);
            
            // instantly install all stuff
            if (strcmp(Discord,"Y") == 0)
            {
                system("flatpak install com.discordapp.Discord -y")
            sleep(1)
            }
else if (strcmp(Discord,"N") == 0)
{
    print("Discord Not Installed.")
}

                    printf("Would You Like To Install Amberol? [Y/N]")         

                                                     fgets(Discord,sizeof(Amberol),stdin);
Amberol[strcspn(Amberol, "\n")] = 0;
            Amberol[0] = toupper(Amberol[0]);
            
            // instantly install all stuff
            if (strcmp(Amberol,"Y") == 0)
            {
                system("flatpak install flathub io.bassi.Amberol -y")
            sleep(1)
            }
else if (strcmp(Amberol,"N") == 0)
{
    print("Amberol Not Installed.")
}

                                      printf("Would You Like To Install Parabolic? [Y/N]")         

                                                     fgets(Parabolic,sizeof(),stdin);
Parabolic[strcspn(Parabolic, "\n")] = 0;
            Parabolic[0] = toupper(Parabolic[0]);
            
            // instantly install all stuff
            if (strcmp(Parabolic,"Y") == 0)
            {
                system("flatpak install org.nickvision.tubeconverter -y")
            sleep(1)
            }
else if (strcmp(Parabolic,"N") == 0)
{
    print("Parabolic Not Installed.")
}  

                                                          printf("Would You Like To Install Bottles? [Y/N]")         

                                                     fgets(Bottles,sizeof(),stdin);
Bottles[strcspn(Bottles, "\n")] = 0;
            Bottles[0] = toupper(Bottles[0]);
            
            // instantly install all stuff    
            if (strcmp(Bottles,"Y") == 0)
            {
                system("flatpak install com.usebottles.bottles -y")
            sleep(1)
            }
else if (strcmp(Bottles,"N") == 0)
{
    print("Bottles Not Installed.")
}  

                                                                 printf("Would You Like To Install Lutris? [Y/N]")         

                                                     fgets(Lutris,sizeof(),stdin);
Lutris[strcspn(Lutris, "\n")] = 0;
            Lutris[0] = toupper(Lutris[0]);
            
            // instantly install all stuff    
            if (strcmp(Lutris,"Y") == 0)
            {
                system("flatpak install flathub net.lutris.Lutris -y")
            sleep(1)
            }
else if (strcmp(Lutris,"N") == 0)
{
    print("Lutris Not Installed.")
}           

                                                                                     printf("Would You Like To Install Wine? [Y/N]")         

                                                     fgets(Wine,sizeof(),stdin);
Wine[strcspn(Wine, "\n")] = 0;
            Wine[0] = toupper(Wine[0]);
            
            // instantly install all stuff    
            if (strcmp(Wine,"Y") == 0)
            {
                system("sudo apt install wine")
            sleep(1)
            }
else if (strcmp(Wine,"N") == 0)
{
    print("Wine Not Installed.")
}    

                                                                                                         printf("Would You Like To Install Steam? [Y/N]")         

                                                     fgets(Steam,sizeof(),stdin);
Steam[strcspn(Steam, "\n")] = 0;
            Steam[0] = toupper(Steam[0]);
            
            // instantly install all stuff    
            if (strcmp(Steam,"Y") == 0)
            {
                system("flatpak install com.valvesoftware.Steam -y && flatpak override --user --filesystem=/path/to/your/Steam/Library com.valvesoftware.Steam")
            sleep(1)
            }
else if (strcmp(Steam,"N") == 0)
{
    print("Steam Not Installed.")
}    
            }
            
        printf("Would You Like To Install The Optional Apps&Games[Luanti,VSCodium,Upscaler]: ");
        
        // get choice here
        fgets(Optional,sizeof(Optional),stdin);
        Optional[strcspn(Optional, "\n")] = 0; 
        Optional[0] = toupper(Optional[0]);
        
        // if they say yes do this
        if (strcmp(Optional,"Y") == 0)
        {
            printf("Installing... \n");
            
            sleep(0.1);
            
            system("flatpak install flathub com.vscodium.codium -y && flatpak install io.gitlab.theevilskeleton.Upscaler -y && flatpak install flathub org.luanti.luanti -y");
        }
        
        
    }
    
  
    
    
    return 0;

}


// full desnapper
int main() {
    char Desnap[30];
    

    printf("Do You Want To Desnap Ubuntu [Y,N]: ");
    
    // yes or no
    fgets(Desnap,sizeof(Desnap),stdin);
    Desnap[strcspn(Desnap, "\n")] = 0; 
    Desnap[0] = toupper(Desnap[0]);
    
    
// if yes desnap
    if (strcmp(Desnap,"Y") == 0)
    {

        printf("Removing Snaps...\n");
        
        sleep(1);
        //system("sudo snap remove $(snap list | awk '!/^Name|^core|^snapd/ {print $1}') && sudo apt purge snapd gnome-software-plugin-snap");
        
        printf("Installing Flathub\n");
        
        system("sudo apt update && sudo apt install flatpak gnome-software-plugin-flatpak -y && flatpak remote-add --if-not-exists --system flathub https://dl.flathub.org/repo/flathub.flatpakrepo && sudo apt install --install-suggests gnome-software -y");
        
        sleep(1);
        
        printf("Done!\n");
        
        installSoftware();
        
        

    }
    
    // what if they say no
    else if (strcmp(Desnap,"N") == 0)
    {
        // just only install software
        installSoftware();
       
                
    }
    


    return 0;



}


