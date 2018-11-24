//implementasi ADT.h

#include "ADT.h"
#include <stdio.h>

Player Pemain;
JAM RealTime;
TabPesanan Pesanan;
 Ruang Ruangan1;
 Ruang Ruangan2;
 Ruang Ruangan3;
 MATRIKS Tampilan;
 RuangDapur Dapur;
 Kata command;
 Queue Antrian;
 Stack Makanan;
 Stack Tangan;
 Graph Denah;
 BinTree Resep;



void ExitMessage(boolean SaveGame){
    if (SaveGame) SaveFile();
    printf("Kelas K-1\n\n");
    printf("Credits to : Warteg Bahari\n");
    printf("Bimo Adityarahman Wiraputra/13517004\n");
    printf("Ricky Yuliawan Pohan/13517025\n");
    printf("Ahmad Rizqee Nurhani/13517058\n");
    printf("Naufal Aditya Dirgandhavi/13517064\n");
    printf("Ahmad Rizal Alifio/13517076\n\n");
    printf("Thank you for playing!\n");
}

//ntar bakal dipake di command exit sama exitnya main menu, dia bakal nampilin message kalo keluar game dan bakalan ngesave kalo savegamenya true

void TampilanProgramUtama(){
    Kata command;
    printf("\n┌────────────────┬───────────────┬───────────────┬────────────┐\n");
    printf("|");
    OutputKata(Pemain.nama);
    printf("\t\t │ Money: %d\t │ Life: %d\t │Time: %d     │\n", Pemain.money, Pemain.life, Pemain.time);
    printf("├────────────────┼───┬───┬───┬───┼───┬───┬───┬───┼────────────┤\n");
    printf("│Waiting Cust    │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │Food Stack  │\n", MatriksToChar(ElmtMatriks(Tampilan, 1,1)), MatriksToChar(ElmtMatriks(Tampilan,1,2)), MatriksToChar(ElmtMatriks(Tampilan,1,3)), MatriksToChar(ElmtMatriks(Tampilan,1,4)), MatriksToChar(ElmtMatriks(Tampilan,1,5)), MatriksToChar(ElmtMatriks(Tampilan,1,6)), MatriksToChar(ElmtMatriks(Tampilan,1,7)), MatriksToChar(ElmtMatriks(Tampilan,1,8)));
    printf("│                ├───┼───┼───┼───┼───┼───┼───┼───│            │\n");
    printf("│                │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │            │\n", MatriksToChar(ElmtMatriks(Tampilan, 2,1)), MatriksToChar(ElmtMatriks(Tampilan,2,2)), MatriksToChar(ElmtMatriks(Tampilan,2,3)), MatriksToChar(ElmtMatriks(Tampilan,2,4)), MatriksToChar(ElmtMatriks(Tampilan,2,5)), MatriksToChar(ElmtMatriks(Tampilan,2,6)), MatriksToChar(ElmtMatriks(Tampilan,2,7)), MatriksToChar(ElmtMatriks(Tampilan,2,8)));
    printf("│                ├───┼───┼───┼───┼───┼───┼───┼───│            │\n");
    printf("│                │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │            │\n", MatriksToChar(ElmtMatriks(Tampilan, 3,1)), MatriksToChar(ElmtMatriks(Tampilan,3,2)), MatriksToChar(ElmtMatriks(Tampilan,3,3)), MatriksToChar(ElmtMatriks(Tampilan,3,4)), MatriksToChar(ElmtMatriks(Tampilan,3,5)), MatriksToChar(ElmtMatriks(Tampilan,3,6)), MatriksToChar(ElmtMatriks(Tampilan,3,7)), MatriksToChar(ElmtMatriks(Tampilan,3,8)));
    printf("│                ├───┼───┼───┼───┼───┼───┼───┼───│            │\n");
    printf("│                │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │            │\n", MatriksToChar(ElmtMatriks(Tampilan, 4,1)), MatriksToChar(ElmtMatriks(Tampilan,4,2)), MatriksToChar(ElmtMatriks(Tampilan,4,3)), MatriksToChar(ElmtMatriks(Tampilan,4,4)), MatriksToChar(ElmtMatriks(Tampilan,4,5)), MatriksToChar(ElmtMatriks(Tampilan,4,6)), MatriksToChar(ElmtMatriks(Tampilan,4,7)), MatriksToChar(ElmtMatriks(Tampilan,4,8)));
    printf("├────────────────┼───┼───┼───┼───┼───┼───┼───┼───┼────────────┤\n");
    printf("│Order           │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │Hand        │\n", MatriksToChar(ElmtMatriks(Tampilan, 5,1)), MatriksToChar(ElmtMatriks(Tampilan,5,2)), MatriksToChar(ElmtMatriks(Tampilan,5,3)), MatriksToChar(ElmtMatriks(Tampilan,5,4)), MatriksToChar(ElmtMatriks(Tampilan,5,5)), MatriksToChar(ElmtMatriks(Tampilan,5,6)), MatriksToChar(ElmtMatriks(Tampilan,5,7)), MatriksToChar(ElmtMatriks(Tampilan,5,8)));
    printf("│                ├───┼───┼───┼───┼───┼───┼───┼───│            │\n");
    printf("│                │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │            │\n", MatriksToChar(ElmtMatriks(Tampilan, 6,1)), MatriksToChar(ElmtMatriks(Tampilan,6,2)), MatriksToChar(ElmtMatriks(Tampilan,6,3)), MatriksToChar(ElmtMatriks(Tampilan,6,4)), MatriksToChar(ElmtMatriks(Tampilan,6,5)), MatriksToChar(ElmtMatriks(Tampilan,6,6)), MatriksToChar(ElmtMatriks(Tampilan,6,7)), MatriksToChar(ElmtMatriks(Tampilan,6,8)));
    printf("│                ├───┼───┼───┼───┼───┼───┼───┼───│            │\n");
    printf("│                │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │            │\n", MatriksToChar(ElmtMatriks(Tampilan, 7,1)), MatriksToChar(ElmtMatriks(Tampilan,7,2)), MatriksToChar(ElmtMatriks(Tampilan,7,3)), MatriksToChar(ElmtMatriks(Tampilan,7,4)), MatriksToChar(ElmtMatriks(Tampilan,7,5)), MatriksToChar(ElmtMatriks(Tampilan,7,6)), MatriksToChar(ElmtMatriks(Tampilan,7,7)), MatriksToChar(ElmtMatriks(Tampilan,7,8)));
    printf("│                ├───┼───┼───┼───┼───┼───┼───┼───│            │\n");
    printf("│                │ %c │ %c │ %c │ %c │ %c │ %c │ %c │ %c │            │\n", MatriksToChar(ElmtMatriks(Tampilan, 8,1)), MatriksToChar(ElmtMatriks(Tampilan,8,2)), MatriksToChar(ElmtMatriks(Tampilan,8,3)), MatriksToChar(ElmtMatriks(Tampilan,8,4)), MatriksToChar(ElmtMatriks(Tampilan,8,5)), MatriksToChar(ElmtMatriks(Tampilan,8,6)), MatriksToChar(ElmtMatriks(Tampilan,8,7)), MatriksToChar(ElmtMatriks(Tampilan,8,8)));
    printf("└────────────────┴───┴───┴───┴───┴───┴───┴───┴───┴────────────┘\n");
    printf(" Command : ");
    command= InputKata();
}
//ntar bakal nampilin program utamanya
void SaveFile(){
    FILE *save;
    save= fopen("savegame.txt", "a");
    fprintf(save, "Waktu Save : ===%d:%d:%d===\n", RealTime.HH, RealTime.MM, RealTime.SS); //Jam real time
    for (int i = 1; i <= Pemain.nama.Length; ++i) {
		fprintf(save, "%c", Pemain.nama.TabKata[i]);
	} //nama, Kata
    fprintf(save,"\n");
    fprintf(save, "Life : %d\n", Pemain.life); //<life, int>
    fprintf(save, "Money : %d\n", Pemain.money); //<money, int >
    fprintf(save, "Time : %d\n", Pemain.time); //<time, int >
    fprintf(save, "Posisi : \n<%d, %d>\n", Pemain.posisi.X, Pemain.posisi.Y); //<posisi x,y, point(?)>
    //save antrian
    fprintf(save, "QUEUE : \n");
    int i = Head(Antrian);
    while(i!=Nil){
        fprintf(save, "<%d %d %d>", Info(ElmtQueue(Antrian,i)), Prio(ElmtQueue(Antrian,i)), Kesabaran(ElmtQueue(Antrian,i)));
        i++;
    }
    fprintf(save,"\n");
    //save food stack
    fprintf(save, "FOOD : \n");
    Kata X;
    while(!IsEmptyStack(Makanan)){
        PopStack(&Makanan, &X);
        fprintf(save, "<");
        for (int i = 1; i <= X.Length; ++i) {
	    	fprintf(save, "%c", X.TabKata[i]);
        }
	}
    fprintf(save, "\n");
    fprintf(save, "ORDER : \n");
    //save array pesanan
    for(i=1; i<=GetLastIdx(Pesanan);i++){
        fprintf(save, "%d ", ElmtArray(Pesanan,i).MejaID); //<array order>
        for (int j = 1; j <= ElmtArray(Pesanan,i).Menu.Length; ++j) {
	    	fprintf(save, "%c", ElmtArray(Pesanan,i).Menu.TabKata[j]);
        }
        fprintf(save, "\n");
    }
    //save stack tangan 
    fprintf(save, "HAND : \n");
    while(!IsEmptyStack(Tangan)){
        PopStack(&Tangan, &X);
        for (int i = 1; i <= X.Length; ++i) {
	    	fprintf(save, "%c", X.TabKata[i]);
        }
    }
    //save ruangan
    fprintf(save, "Customer Meja Ruangan 1 : \n");
    fprintf(save, "%d\n", Ruangan1.TTable[1].NCustomer);
    fprintf(save, "%d\n", Ruangan1.TTable[2].NCustomer);
    fprintf(save, "%d\n", Ruangan1.TTable[3].NCustomer);
    fprintf(save, "%d\n", Ruangan1.TTable[4].NCustomer);
    fprintf(save, "Customer Meja Ruangan 2 : \n");
    fprintf(save, "%d\n", Ruangan2.TTable[1].NCustomer);
    fprintf(save, "%d\n", Ruangan2.TTable[2].NCustomer);
    fprintf(save, "%d\n", Ruangan2.TTable[3].NCustomer);
    fprintf(save, "%d\n", Ruangan2.TTable[4].NCustomer);
    fprintf(save, "Customer Meja Ruangan 3 : \n");
    fprintf(save, "%d\n", Ruangan3.TTable[1].NCustomer);
    fprintf(save, "%d\n", Ruangan3.TTable[2].NCustomer);
    fprintf(save, "%d\n", Ruangan3.TTable[3].NCustomer);
    fprintf(save, "%d\n", Ruangan3.TTable[4].NCustomer);
    fprintf(save, "#\n");
    fclose(save);
}//bakal ngesave ke file eksternal dgn format yg di tampilan
void LoadFile(){
    STARTKATA("savegame.txt");
    int i=1;
    int x,j;
    do{
        printf("%d. ", i);
        i++;
        do{
            OutputKata(CKata);
            ADVKATA();
            printf("\n");
        }while(CC!='#');   
    }while(CC!='.');
    printf("Masukkan pilihan ");
    scanf("%d", &x);

    STARTKATA("savegame.txt");
    if(x>1){
        for(j=1;j<=x-1;j++){
            do{
                ADVKATA();
            }while(CC!='#');
        }
    }
    ADVKATA();
    Pemain.nama = CKata;
    ADVInt();
    Pemain.life = CInt;
    ADVInt();
    Pemain.money = CInt;
    ADVInt();
    Pemain.time = CInt;
    ADVKATA();
    ADV();
    ADVInt();
    Pemain.posisi.X = CInt;
    ADV();
    ADVInt();
    Pemain.posisi.Y = CInt;
    ADVKATA();
    ADVKATA();
    ADV();
    i = 1;
    infotypeQueue X;
    while(CC=='<'){
        ADVInt();
        X.info = CInt;
        ADV();
        ADVInt();
        X.prio = CInt;
        ADV();
        ADVInt();
        X.kesabaran = CInt;
        AddQueue(&Antrian, X);
        ADVKATA();
        ADV();
    }
    ADVKATA();
    ADV();
    Kata Y;
    while(CC=='<'){
        ADV();
        ADVKATA();
        Y = CKata;
        PushStack(&Makanan, Y);
        ADV();
    }
    ADVKATA();
    ADV();
    PesananID Z;
    while(CC=='<'){
        ADVInt();
        Z.MejaID = CInt;
        ADV();
        ADVKATA();
        Z.Menu = CKata;
        ADV();
    }
    ADVKATA();
    ADV();
    while(CC=='<'){
        ADV();
        ADVKATA();
        Y = CKata;
        PushStack(&Tangan, Y);
        ADV();
    }
    ADVKATA();
    OutputKata(CKata);
    printf("\n"); 
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADV();
    ADV();
    ADVKATA();
    OutputKata(CKata);
    printf("\n"); 
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADV();
    ADVKATA();
    printf("\n");
    OutputKata(CKata);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADVInt();
    printf("%d", CInt);
    printf("\n");
    ADV();
    ADV();
    //nampilin daftar apa aja yg bisa diload, ntar playernya milih terus ngeload statnya dan diassign ke variabel
}
//bakal dipake sama main menu yg Load game
char MatriksToChar(int X){
    char y;
    switch (X){
        case 0 :
        y = ' ';
        break;
        case 1 :
        y = '1';
        break;
        case 2 :
        y = '2';
        break;
        case 3 :
        y = '3';
        break;
        case 4 :
        y = '4';
        break;
        case 5 :
        y = 'P';
        break;
        case 6 :
        y = 'X';
        break;
        case 7 :
        y = 'C';
        break;
        case 8 :
        y = 'M';
        break;
        case 9 :
        y = 'T';
        break;
        case 10 :
        y = 'D';
        break;
    }
    return y;
}
BinTree assignResep(){
    int i;
	BinTree P;
	/* ALGORITMA */
	i = 1;
	START("resep.txt");
	BuildTree(&P,&i);   
    return P;
}

void init_ruangan1(){
    (Ruangan1).P1.X = 5;
    (Ruangan1).P1.Y = 8;
    (Ruangan1).P2.X = 8;
    (Ruangan1).P2.Y = 5;
    (Ruangan1).TTable[1].posisi.X = 2;
    (Ruangan1).TTable[1].posisi.Y = 2;
    (Ruangan1).TTable[1].kursi = 4;
    (Ruangan1).TTable[1].NCustomer = 0;
    (Ruangan1).TTable[1].TChair[1].X = (Ruangan1).TTable[1].posisi.X;
    (Ruangan1).TTable[1].TChair[1].Y = (Ruangan1).TTable[1].posisi.Y-1;
    (Ruangan1).TTable[1].TChair[2].X = (Ruangan1).TTable[1].posisi.X;
    (Ruangan1).TTable[1].TChair[2].Y = (Ruangan1).TTable[1].posisi.Y+1;
    (Ruangan1).TTable[1].TChair[3].X = (Ruangan1).TTable[1].posisi.X-1;
    (Ruangan1).TTable[1].TChair[3].Y = (Ruangan1).TTable[1].posisi.Y;
    (Ruangan1).TTable[1].TChair[4].X = (Ruangan1).TTable[1].posisi.X+1;
    (Ruangan1).TTable[1].TChair[4].Y = (Ruangan1).TTable[1].posisi.Y;

    (Ruangan1).TTable[2].posisi.X = 2;
    (Ruangan1).TTable[2].posisi.Y = 7;
    (Ruangan1).TTable[2].kursi = 2;
    (Ruangan1).TTable[2].NCustomer = 0;
    (Ruangan1).TTable[2].TChair[1].X = (Ruangan1).TTable[2].posisi.X;
    (Ruangan1).TTable[2].TChair[1].Y = (Ruangan1).TTable[2].posisi.Y-1;
    (Ruangan1).TTable[2].TChair[2].X = (Ruangan1).TTable[2].posisi.X;
    (Ruangan1).TTable[2].TChair[2].Y = (Ruangan1).TTable[2].posisi.Y+1;

    (Ruangan1).TTable[3].posisi.X = 7;
    (Ruangan1).TTable[3].posisi.Y = 2;
    (Ruangan1).TTable[3].kursi = 4;
    (Ruangan1).TTable[3].NCustomer = 0;
    (Ruangan1).TTable[3].TChair[1].X = (Ruangan1).TTable[3].posisi.X;
    (Ruangan1).TTable[3].TChair[1].Y = (Ruangan1).TTable[3].posisi.Y-1;
    (Ruangan1).TTable[3].TChair[2].X = (Ruangan1).TTable[3].posisi.X;
    (Ruangan1).TTable[3].TChair[2].Y = (Ruangan1).TTable[3].posisi.Y+1;
    (Ruangan1).TTable[3].TChair[3].X = (Ruangan1).TTable[3].posisi.X-1;
    (Ruangan1).TTable[3].TChair[3].Y = (Ruangan1).TTable[3].posisi.Y;
    (Ruangan1).TTable[3].TChair[4].X = (Ruangan1).TTable[3].posisi.X+1;
    (Ruangan1).TTable[3].TChair[4].Y = (Ruangan1).TTable[3].posisi.Y;

    (Ruangan1).TTable[4].posisi.X = 7;
    (Ruangan1).TTable[4].posisi.Y = 7;
    (Ruangan1).TTable[4].kursi = 2;
    (Ruangan1).TTable[4].NCustomer = 0;
    (Ruangan1).TTable[4].TChair[1].X = (Ruangan1).TTable[4].posisi.X;
    (Ruangan1).TTable[4].TChair[1].Y = (Ruangan1).TTable[4].posisi.Y-1;
    (Ruangan1).TTable[4].TChair[2].X = (Ruangan1).TTable[4].posisi.X;
    (Ruangan1).TTable[4].TChair[2].Y = (Ruangan1).TTable[4].posisi.Y+1;
}
void init_ruangan2(){
    (Ruangan2).P1.X = 2;
    (Ruangan2).P1.Y = 1;
    (Ruangan2).P2.X = 8;
    (Ruangan2).P2.Y = 5;
    (Ruangan2).TTable[1].posisi.X = 2;
    (Ruangan2).TTable[1].posisi.Y = 2;
    (Ruangan1).TTable[1].kursi = 4;
    (Ruangan1).TTable[1].NCustomer = 0;
    (Ruangan1).TTable[1].TChair[1].X = (Ruangan1).TTable[1].posisi.X;
    (Ruangan1).TTable[1].TChair[1].Y = (Ruangan1).TTable[1].posisi.Y-1;
    (Ruangan1).TTable[1].TChair[2].X = (Ruangan1).TTable[1].posisi.X;
    (Ruangan1).TTable[1].TChair[2].Y = (Ruangan1).TTable[1].posisi.Y+1;
    (Ruangan1).TTable[1].TChair[3].X = (Ruangan1).TTable[1].posisi.X-1;
    (Ruangan1).TTable[1].TChair[3].Y = (Ruangan1).TTable[1].posisi.Y;
    (Ruangan1).TTable[1].TChair[4].X = (Ruangan1).TTable[1].posisi.X+1;
    (Ruangan1).TTable[1].TChair[4].Y = (Ruangan1).TTable[1].posisi.Y;

    (Ruangan2).TTable[2].posisi.X = 2;
    (Ruangan2).TTable[2].posisi.Y = 7;
    (Ruangan2).TTable[2].kursi = 2;
    (Ruangan2).TTable[2].NCustomer = 0;
    (Ruangan2).TTable[2].TChair[1].X = (Ruangan2).TTable[2].posisi.X;
    (Ruangan2).TTable[2].TChair[1].Y = (Ruangan2).TTable[2].posisi.Y-1;
    (Ruangan2).TTable[2].TChair[2].X = (Ruangan2).TTable[2].posisi.X;
    (Ruangan2).TTable[2].TChair[2].Y = (Ruangan2).TTable[2].posisi.Y+1;

    (Ruangan2).TTable[3].posisi.X = 7;
    (Ruangan2).TTable[3].posisi.Y = 2;
    (Ruangan2).TTable[3].kursi = 4;
    (Ruangan2).TTable[3].NCustomer = 0;
    (Ruangan2).TTable[3].TChair[1].X = (Ruangan2).TTable[3].posisi.X;
    (Ruangan2).TTable[3].TChair[1].Y = (Ruangan2).TTable[3].posisi.Y-1;
    (Ruangan2).TTable[3].TChair[2].X = (Ruangan2).TTable[3].posisi.X;
    (Ruangan2).TTable[3].TChair[2].Y = (Ruangan2).TTable[3].posisi.Y+1;
    (Ruangan2).TTable[3].TChair[3].X = (Ruangan2).TTable[3].posisi.X-1;
    (Ruangan2).TTable[3].TChair[3].Y = (Ruangan2).TTable[3].posisi.Y;
    (Ruangan2).TTable[3].TChair[4].X = (Ruangan2).TTable[3].posisi.X+1;
    (Ruangan2).TTable[3].TChair[4].Y = (Ruangan2).TTable[3].posisi.Y;

    (Ruangan2).TTable[4].posisi.X = 7;
    (Ruangan2).TTable[4].posisi.Y = 7;
    (Ruangan2).TTable[4].kursi = 2;
    (Ruangan2).TTable[4].NCustomer = 0;
    (Ruangan2).TTable[4].TChair[1].X = (Ruangan2).TTable[4].posisi.X;
    (Ruangan2).TTable[4].TChair[1].Y = (Ruangan2).TTable[4].posisi.Y-1;
    (Ruangan2).TTable[4].TChair[2].X = (Ruangan2).TTable[4].posisi.X;
    (Ruangan2).TTable[4].TChair[2].Y = (Ruangan2).TTable[4].posisi.Y+1;
}
void init_ruangan3(){
    (Ruangan3).P1.X = 2;
    (Ruangan3).P1.Y = 1;
    (Ruangan3).P2.X = 1;
    (Ruangan3).P2.Y = 5;
    (Ruangan3).TTable[1].posisi.X = 2;
    (Ruangan3).TTable[1].posisi.Y = 2;
    (Ruangan3).TTable[1].kursi = 4;
    (Ruangan3).TTable[1].NCustomer = 0;
    (Ruangan3).TTable[1].TChair[1].X = (Ruangan3).TTable[1].posisi.X;
    (Ruangan3).TTable[1].TChair[1].Y = (Ruangan3).TTable[1].posisi.Y-1;
    (Ruangan3).TTable[1].TChair[2].X = (Ruangan3).TTable[1].posisi.X;
    (Ruangan3).TTable[1].TChair[2].Y = (Ruangan3).TTable[1].posisi.Y+1;
    (Ruangan3).TTable[1].TChair[3].X = (Ruangan3).TTable[1].posisi.X-1;
    (Ruangan3).TTable[1].TChair[3].Y = (Ruangan3).TTable[1].posisi.Y;
    (Ruangan3).TTable[1].TChair[4].X = (Ruangan3).TTable[1].posisi.X+1;
    (Ruangan3).TTable[1].TChair[4].Y = (Ruangan3).TTable[1].posisi.Y;

    (Ruangan3).TTable[2].posisi.X = 2;
    (Ruangan3).TTable[2].posisi.Y = 7;
    (Ruangan3).TTable[2].kursi = 2;
    (Ruangan3).TTable[2].NCustomer = 0;
    (Ruangan3).TTable[2].TChair[1].X = (Ruangan3).TTable[2].posisi.X;
    (Ruangan3).TTable[2].TChair[1].Y = (Ruangan3).TTable[2].posisi.Y-1;
    (Ruangan3).TTable[2].TChair[2].X = (Ruangan3).TTable[2].posisi.X;
    (Ruangan3).TTable[2].TChair[2].Y = (Ruangan3).TTable[2].posisi.Y+1;

    (Ruangan3).TTable[2].NCustomer = 0;
    (Ruangan3).TTable[3].posisi.X = 7;
    (Ruangan3).TTable[3].posisi.Y = 2;
    (Ruangan3).TTable[3].kursi = 4;
    (Ruangan3).TTable[3].NCustomer = 0;
    (Ruangan3).TTable[3].TChair[1].X = (Ruangan3).TTable[3].posisi.X;
    (Ruangan3).TTable[3].TChair[1].Y = (Ruangan3).TTable[3].posisi.Y-1;
    (Ruangan3).TTable[3].TChair[2].X = (Ruangan3).TTable[3].posisi.X;
    (Ruangan3).TTable[3].TChair[2].Y = (Ruangan3).TTable[3].posisi.Y+1;
    (Ruangan3).TTable[3].TChair[3].X = (Ruangan3).TTable[3].posisi.X-1;
    (Ruangan3).TTable[3].TChair[3].Y = (Ruangan3).TTable[3].posisi.Y;
    (Ruangan3).TTable[3].TChair[4].X = (Ruangan3).TTable[3].posisi.X+1;
    (Ruangan3).TTable[3].TChair[4].Y = (Ruangan3).TTable[3].posisi.Y;

    (Ruangan3).TTable[3].NCustomer = 0;
    (Ruangan3).TTable[4].posisi.X = 7;
    (Ruangan3).TTable[4].posisi.Y = 7;
    (Ruangan3).TTable[4].kursi = 2;
    (Ruangan3).TTable[4].NCustomer = 0;
    (Ruangan3).TTable[4].TChair[1].X = (Ruangan3).TTable[4].posisi.X;
    (Ruangan3).TTable[4].TChair[1].Y = (Ruangan3).TTable[4].posisi.Y-1;
    (Ruangan3).TTable[4].TChair[2].X = (Ruangan3).TTable[4].posisi.X;
    (Ruangan3).TTable[4].TChair[2].Y = (Ruangan3).TTable[4].posisi.Y+1;
}
void init_dapur(){
    (Dapur).P1.X = 5;
    (Dapur).P1.Y = 8;
    (Dapur).P2.X = 1;
    (Dapur).P2.Y = 5;
    (Dapur).T.posisi.X = 1;
    (Dapur).T.posisi.Y = 8;
    CreateEmptyStack(&(Dapur).T.bahan);
    (Dapur).M1.posisi.X = 7;
    (Dapur).M1.posisi.Y = 4;
    (Dapur).M1.bahan = StringToKata("piring");
    (Dapur).M2.posisi.X = 7;
    (Dapur).M2.posisi.Y = 3;
    (Dapur).M2.bahan = StringToKata("sendok");
    (Dapur).M3.posisi.X = 7;
    (Dapur).M3.posisi.Y = 5;
    (Dapur).M3.bahan = StringToKata("garpu");
    (Dapur).M4.posisi.X = 4;
    (Dapur).M4.posisi.Y = 3;
    (Dapur).M4.bahan = StringToKata("nasi");
    (Dapur).M5.posisi.X = 4;
    (Dapur).M5.posisi.Y = 2;
    (Dapur).M5.bahan = StringToKata("telur");
    (Dapur).M6.posisi.X = 4;
    (Dapur).M6.posisi.Y = 1;
    (Dapur).M6.bahan = StringToKata("ayam");
    (Dapur).M7.posisi.X = 3;
    (Dapur).M7.posisi.Y = 3;
    (Dapur).M7.bahan = StringToKata("es krim");
    (Dapur).M8.posisi.X = 3;
    (Dapur).M8.posisi.Y = 2;
    (Dapur).M8.bahan = StringToKata("pisang");
    (Dapur).M9.posisi.X = 3;
    (Dapur).M9.posisi.Y = 1;
    (Dapur).M9.bahan = StringToKata("stroberi");
    (Dapur).M10.posisi.X = 3;
    (Dapur).M10.posisi.Y = 6;
    (Dapur).M10.bahan = StringToKata("roti");
    (Dapur).M11.posisi.X = 3;
    (Dapur).M11.posisi.Y = 7;
    (Dapur).M11.bahan = StringToKata("patty");
    (Dapur).M12.posisi.X = 3;
    (Dapur).M12.posisi.Y = 8;
    (Dapur).M12.bahan = StringToKata("sosis");
    (Dapur).M13.posisi.X = 4;
    (Dapur).M13.posisi.Y = 6;
    (Dapur).M13.bahan = StringToKata("spaghetti");
    (Dapur).M14.posisi.X = 4;
    (Dapur).M14.posisi.Y = 7;
    (Dapur).M14.bahan = StringToKata("bolognaise");
    (Dapur).M15.posisi.X = 4;
    (Dapur).M15.posisi.Y = 8;
    (Dapur).M15.bahan = StringToKata("keju");
    (Dapur).M16.posisi.X = 7;
    (Dapur).M16.posisi.Y = 8;
    (Dapur).M16.bahan = StringToKata("carbonara");
}
void InitDenah () {
    MakeGraph(4,&Denah);
    CreateEdge(&Denah,1,2,1);
    CreateEdge(&Denah,1,4,2);
    CreateEdge(&Denah,3,4,1);
    CreateEdge(&Denah,2,3,2);
}

void assignMatriks(){
    MakeEmptyMatriks(&Tampilan);
    int i = Pemain.posisi.X;
    int j = Pemain.posisi.Y;
    ElmtMatriks(Tampilan,i,j) = 5;
    if(Pemain.ruangan != 4 ){
        Ruang Ruangan;
        if(Pemain.ruangan == 1) Ruangan = Ruangan1;
        else if(Pemain.ruangan == 2) Ruangan = Ruangan2;
        else if(Pemain.ruangan == 3) Ruangan = Ruangan3;
        i = Ruangan.P1.X; j = Ruangan.P1.Y;
        ElmtMatriks(Tampilan, i,j) = 10;
        i = Ruangan.P2.X; j = Ruangan.P2.Y;
        ElmtMatriks(Tampilan, i,j) = 10;
        for(int m=1;m<=4;m++){
            i=Ruangan.TTable[m].posisi.X;j=Ruangan.TTable[m].posisi.Y;
            ElmtMatriks(Tampilan, i,j)=m;
            if(Ruangan.TTable[m].NCustomer == 0){
                i = Ruangan.TTable[m].TChair[1].X; j = Ruangan.TTable[m].TChair[1].Y;
                ElmtMatriks(Tampilan, i,j) = 6;
                i = Ruangan.TTable[m].TChair[2].X; j = Ruangan.TTable[m].TChair[2].Y;
                ElmtMatriks(Tampilan, i,j) = 6;
                i = Ruangan.TTable[m].TChair[3].X; j = Ruangan.TTable[m].TChair[3].Y;
                ElmtMatriks(Tampilan, i,j) = 6;
                i = Ruangan.TTable[m].TChair[4].X; j = Ruangan.TTable[m].TChair[4].Y;
                ElmtMatriks(Tampilan, i,j) = 6;
            }else if(Ruangan.TTable[m].NCustomer == 2){
                i = Ruangan.TTable[m].TChair[1].X; j = Ruangan.TTable[m].TChair[1].Y;
                ElmtMatriks(Tampilan, i,j) = 7;
                i = Ruangan.TTable[m].TChair[2].X; j = Ruangan.TTable[m].TChair[2].Y;
                ElmtMatriks(Tampilan, i,j) = 7;
                i = Ruangan.TTable[m].TChair[3].X; j = Ruangan.TTable[m].TChair[3].Y;
                ElmtMatriks(Tampilan, i,j) = 6;
                i = Ruangan.TTable[m].TChair[4].X; j = Ruangan.TTable[m].TChair[4].Y;
                ElmtMatriks(Tampilan, i,j) = 6;
            } else if(Ruangan.TTable[m].NCustomer == 4){
                i = Ruangan.TTable[m].TChair[1].X; j = Ruangan.TTable[m].TChair[1].Y;
                ElmtMatriks(Tampilan, i,j) = 7;
                i = Ruangan.TTable[m].TChair[2].X; j = Ruangan.TTable[m].TChair[2].Y;
                ElmtMatriks(Tampilan, i,j) = 7;
                i = Ruangan.TTable[m].TChair[3].X; j = Ruangan.TTable[m].TChair[3].Y;
                ElmtMatriks(Tampilan, i,j) = 7;
                i = Ruangan.TTable[m].TChair[4].X; j = Ruangan.TTable[m].TChair[4].Y;
                ElmtMatriks(Tampilan, i,j) = 7;
            }
        }
    } else{
        i = Dapur.P1.X; j = Dapur.P1.Y;
        ElmtMatriks(Tampilan, i,j) = 10;
        i = Dapur.P2.X; j = Dapur.P2.Y;
        ElmtMatriks(Tampilan, i,j) = 10;
        i = Dapur.T.posisi.X; j = Dapur.T.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 9;
        i = Dapur.M1.posisi.X; j = Dapur.M1.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M2.posisi.X; j = Dapur.M2.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M3.posisi.X; j = Dapur.M3.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M4.posisi.X; j = Dapur.M4.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M5.posisi.X; j = Dapur.M5.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M6.posisi.X; j = Dapur.M6.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M7.posisi.X; j = Dapur.M7.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M8.posisi.X; j = Dapur.M8.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M9.posisi.X; j = Dapur.M9.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M10.posisi.X; j = Dapur.M10.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M11.posisi.X; j = Dapur.M11.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M12.posisi.X; j = Dapur.M12.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M13.posisi.X; j = Dapur.M13.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M14.posisi.X; j = Dapur.M14.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M15.posisi.X; j = Dapur.M15.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
        i = Dapur.M16.posisi.X; j = Dapur.M16.posisi.Y;
        ElmtMatriks(Tampilan, i,j) = 8;
    }
}

void init_player(){
    Pemain.money = 500;
    Pemain.life = 100;
    Pemain.time = 0;
    Pemain.posisi.X = 3;
    Pemain.posisi.Y = 5;
    Pemain.ruangan = 1;
}

void init_all(){
    init_dapur();
    init_player();
    init_ruangan1();
    init_ruangan2();
    init_ruangan3();
    InitDenah;
    CreateEmptyQueue(&Antrian, MaxEl);
    CreateEmptyStack(&Makanan);
    CreateEmptyStack(&Tangan);
    CreateEmptyStack(&Dapur.T.bahan);
}