    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    void main() {

        system("title Ativador Windows Shacall 18/06/22 ");


 int opcao;
 int VarLoop = 1;

        //Para usar acentos
        setlocale(LC_ALL, "");

        while (VarLoop == 1) {

        system("cls");
        printf("\n  [1] Windows 10 Home");
        printf("\n  [2] Windows 10 Home N");
        printf("\n  [3] Windows 10 Pro");
        printf("\n  [4] Windows 10 Pro N");
        printf("\n  [5] Windows 10 Enterprise");
        printf("\n  [6] Windows 10 Enterprise N");
        printf("\n  [7] Windows 10 Education");
        printf("\n  [8] Windows 10 Education N");
        printf("\n  [9] Remover Key Atual Windows");
        printf("\n  [10] Verificar Ativação Windows");
        printf("\n   ");
        printf("\n   CREDITOS   Shacall 18/06/22 ");

        printf("\n   ");
        printf("\n   ");
        scanf("%d", &opcao);


        switch(opcao)
        {
        case 1:
            printf("\n  Ativando...");
            system("slmgr //B /ipk TX9XD-98N7V-6WMQ6-BX7FG-H8Q99");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 2:
            printf("\n  Ativando...");
            system("slmgr //B /ipk 3KHY7-WNT83-DGQKR-F7HPR-844BM");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 3:
            printf("\n  Ativando...");
            system("slmgr //B /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 4:
            printf("\n  Ativando...");
            system("slmgr //B /ipk MH37W-N47XK-V7XM9-C7227-GCQG9");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 5:
            printf("\n  Ativando...");
            system("slmgr //B /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 6:
            printf("\n  Ativando...");
            system("slmgr //B /ipk DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 7:
            printf("\n  Ativando...");
            system("slmgr //B /ipk  NW6C2-QMPVW-D7KKK-3GKT6-VCFB2");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 8:
            printf("\n  Ativando...");
            system("slmgr //B /ipk 2WH4N-8QGBV-H22JP-CT43Q-MDWWJ");
            system("slmgr //B /skms kms8.msguides.com");
            system("slmgr //B /ato");
            printf("\n");
            printf("VERIFIQUE SE O WINDOW FOI ATIVADO");
            system("timeout /T 3 /NOBREAK > nul");

            break;

            case 9:
            printf("\n  Removendo...");
            system("slmgr /upk");

            break;

            case 10:
            printf("\n  Verificando...");
            system("slmgr /xpr");

            break;
            default:
                printf("\nOpção inválida!");
                break;


Sleep(2500);
return 0;


        }

    }

}
