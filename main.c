#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include<unistd.h>



int installSoftware() {
    char Choice[30];
    char Optional[30];
    printf("Do You Wish To Install And Optimize Software Or [Q] to Quit Or [Y]: ");
    fgets(Choice,sizeof(Choice),stdin);
    Choice[strcspn(Choice, "\n")] = 0; 
    Choice[0] = toupper(Choice[0]);
    if (strcmp(Choice,"Q") == 0)
    {
        exit(0);
    }
    
    else if (strcmp(Choice,"Y") == 0)
    {
        printf("Installing Useful Software[Discord,Amberol,Parabolic,Bottles,Lutris,Wine,Steam]");
        sleep(1);
        system("snap disable firefox && snap remove --purge firefox");
        sleep(1);
        system("flatpak install com.discordapp.Discord -y && flatpak install flathub io.bassi.Amberol -y && flatpak install org.nickvision.tubeconverter -y && flatpak install com.usebottles.bottles -y && flatpak install flathub net.lutris.Lutris -y && sudo apt install wine -y && flatpak install com.valvesoftware.Steam -y && flatpak override --user --filesystem=/path/to/your/Steam/Library com.valvesoftware.Steam && flatpak install flathub io.gitlab.librewolf-community -y");
        sleep(1);
        printf("Would You Like To Install The Optional Apps&Games[Luanti,VSCodium,Upscaler]: ");
        fgets(Optional,sizeof(Optional),stdin);
        Optional[strcspn(Optional, "\n")] = 0; 
        Optional[0] = toupper(Optional[0]);
        if (strcmp(Optional,"Y") == 0)
        {
            printf("Installing... \n");
            sleep(0.1);
            system("flatpak install flathub com.vscodium.codium -y && flatpak install io.gitlab.theevilskeleton.Upscaler -y && flatpak install flathub org.luanti.luanti -y");
        }
        
        
    }
    
  
    
    
    return 0;

}



int main() {
    char Desnap[30];
    

    printf("Do You Want To Desnap Ubuntu [Y,N]: ");
    fgets(Desnap,sizeof(Desnap),stdin);
    Desnap[strcspn(Desnap, "\n")] = 0; 
    Desnap[0] = toupper(Desnap[0]);
    
    

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
    else if (strcmp(Desnap,"N") == 0)
    {
        installSoftware();
       
                
    }
    


    return 0;



}


