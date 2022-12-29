#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>



//prosedur menampilkan nama pembuat program
void onwer();
//prosedur menampilkan nama program
void nama_program();
//procedure menampilkan login
void login();
//prosedur menampilkan menu pelanggan
void menuPelanggan();
//prosedur menampilkan menu pegawai
void menuPegawai();
//prosedur admin
void admin();
//prosedure menampilakn menu pelanggan
void menuPelanggan();
//prosedure menampilkan jasa
void menuLayanan();
//prosedur yang menampilakan aturan membership
void aturanmembership();
//menampilkan syarat membership
void tampilanLayanan();
void konfirmasiPemesanan();
void KeteranganLayanan1();
//keterangan layanan yang dipesan
void KeteranganLayanan1();
void KeteranganLayanan2();
void KeteranganLayanan3();
void KeteranganLayanan4();
void KeteranganLayanan5();
void KeteranganLayanan6();
void KeteranganLayanan7();
void KeteranganLayanan8();
void KeteranganLayanan9();
void KeteranganLayanan10();
void KeteranganLayanan11();
void KeteranganLayanan12();
void KeteranganLayanan13();
void KeteranganLayanan14();
void KeteranganLayanan15();
void KeteranganLayanan16();

//global variabel
char username[100];
char password[100];

//struct
struct Data{
	char nama[150];
	long int  notelpon;
	char username[100];
	char password[100];
};

struct Data user;
struct Data karyawan;


struct Member{
    char nama[150];
	long int  notelpon;
    char kodemeber[100];
};

struct Member anggota;
int a, b;//global variabel
float c;//global variabel
unsigned int *tanggal;//global variabel

unsigned int *bulan;//global variabel
float nilai3;

float *diskon;//global variabel

time_t t;
struct tm *tm;



int validasi_angka(){//validasi
    char ch;
    char * data;
    int vlds = 0;
    data = (char *) malloc(sizeof(char));

    while ((ch = getch()) != 13){
        if ((ch >= '0' && ch <= '9')|| (ch == '.')){
            printf("%c", ch);
            data[vlds] = ch;
            vlds++;
        }
    }
    data[vlds] = '\0';
    	return atof(data);
}

long int validasi_no_hp(){//validasi
    char ch;
    char * data;
    int vlds = 0;
    data = (char *) malloc(sizeof(char));

    while ((ch = getch()) != 13){
        if ((ch >= '0' && ch <= '9')|| (ch == '.')){
            printf("%c", ch);
            data[vlds] = ch;
            vlds++;
        }
    }
    data[vlds] = '\0';
    	return atof(data);
}

int main() {
    onwer();
	nama_program();
	login();
return 0;
}

void onwer(){
    system ("cls");
    printf("\n\n");
	printf("\t\t\t=====================================================\n");
    printf("\t\t\t|------------------TUBES ALPRO----------------------|\n");
    printf("\t\t\t|===================================================|\n");
    printf("\t\t\t|      Anggota Kelompok:                 NIM:       |\n");
    printf("\t\t\t|>> I WAYAN KARDIANA                >> 2205551023   |\n");
    printf("\t\t\t|>> I GEDE AGUS HANDIKA PRATAMA     >> 2205551026   |\n");
    printf("\t\t\t=====================================================\n");
    getch();
    system ("cls");
}


void nama_program(){
	system ("cls");
	printf("\n\n");
	printf("\t\t\t|====================================================|\n");
	printf("\t\t\t|                SALON KECANTIKAN AM                 |\n");
	printf("\t\t\t|                TATA RAMBUT & RIAS                  |\n");
	printf("\t\t\t|             BR. BUDA IRENG, SUKAWATI               |\n");
	printf("\t\t\t|====================================================|\n");
	printf("\t\t\t|  Hubungi Kami Melalui  :                           |\n");
	printf("\t\t\t|                                                    |\n");
	printf("\t\t\t|         Wa          : 085337279455                 |\n");
	printf("\t\t\t|         Instagram   : @salim_AM                    |\n");
	printf("\t\t\t|         Facebook    : AM SALON                     |\n");
	printf("\t\t\t|         E-mail      : amsalon@gmail.com            |\n");
	printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|====================================================|\n");
    getch();
    system ("cls");
}

void admin(){
	awalan :
	system("cls");
	int opsi;
	printf("\n\n");
	printf("\t\t\t|========================================================================== |\n");
	printf("\t\t\t|                               MENU ADMIN                                  |\n");
	printf("\t\t\t|===========================================================================|\n");
	printf("\t\t\t|   Catatan : Bila anda menginputan '1' maka anda akan melakukan Registrasi |\n");
	printf("\t\t\t|             Pegawai dan apabila anda menginputkan '2' maka akan keluar    |\n");
	printf("\t\t\t|             dari menu Admin                                               |\n");
	printf("\t\t\t|                                                                           |\n");
	printf("\t\t\t|            [1] Registrasi Pegawai                                         |\n");
	printf("\t\t\t|            [2] Total Pemasukan                                            |\n");
	printf("\t\t\t|            [3] Keluar                                                     |\n");
	printf("\t\t\t|                                                                           |\n");
	printf("\t\t\t|===========================================================================|\n");
	printf("\t\t\t Pilih (1-3) untuk melakukan tindakan : ");
	opsi = validasi_angka();
	
	system("pause");
	if(opsi==1){//melakukan registrasi pegawai
             system("cls");
             FILE * regist;
             regist=fopen("regis_pegawai.txt","a+");
             nama_program();
             printf ("\n\n");
             printf("\t\t\t====================================================================\n");
             printf("\t\t\t|                      'REGISTRASI PEGAWAI'                        |\n");
             printf("\t\t\t====================================================================\n");
             printf("\t\t\t|   	                                                              \n");
             printf("\t\t\t|   Input Data Pegawai dengan Benar!!                              \n");
             printf("\t\t\t|                                                                  \n");
             printf("\t\t\t|   Input Nama\t\t: ");
             scanf(" %[^\n]s", &karyawan.nama);
             printf("\n\t\t\t|   Input No.Telpon\t: ");
             karyawan.notelpon = validasi_no_hp();
             printf("\n\t\t\t|   Tentukan Username\t: ");
             scanf(" %[^\n]s", &karyawan.username);
             printf("\n\t\t\t|   Tentukan Password\t: ");
             scanf(" %[^\n]s", &karyawan.password);
             printf("\n\t\t\t|   	                                                          \n");
             printf("\t\t\t|   Catatan : Harap Ingat Username dan Password yang Telah         \n");
             printf("\t\t\t|             Anda Tentukan!!!                                       \n");
             printf("\t\t\t|                                                                   \n");
             printf("\t\t\t====================================================================\n");
             printf("\n\n");
             getch();
             printf("\t\t\t====================================================================\n");
             printf("\t\t\t|                       -REGESTRASI BERHASIL-                      |\n");
             printf("\t\t\t====================================================================\n");
             fprintf(regist,"%s\n",karyawan.username);
             fprintf(regist,"%s\n",karyawan.password);
             fclose(regist);
             getch();
             system("cls");
             goto awalan;

	}
	else if(opsi==2){
			
             float hasil=0;
             char buff[255];
             system("cls");
             FILE * total1;
             total1=fopen("totalPemasukan.txt","r+");
             if(total1 == NULL){
                printf("\t\t\tBelum Ada Pemasukan");
                getch();
                goto awalan;
             }
             else{
				 while(fgets(buff, sizeof(buff), total1)){
                        printf("%s\n",buff);
                }
			
                fclose(total1);
          	}
          	
          	
            FILE * must1;
			must1 = fopen("totalPemasukan1.txt","a+"); 
            while (fscanf(must1, "%f",&nilai3) == 1){//untuk mengetahui total pemasukan salon
                hasil= hasil + nilai3;
            }
                printf("\t\t\tTotal Pemasukan Hari Ini = %.2f\n", hasil);
			
                fclose(total1);  
                getch();
                goto awalan;
            

        }
    

        else if(opsi==3){//jika ingin keluar progran
            system("cls");
            login();
        }
        else{
            printf("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-3!       \n");
            getch();
            goto awalan;
        }


}

void login(){
    awal:
    system("cls");
    int pilihmasuk;
    printf("\n\n");
    printf("\t\t\t=====================================================================\n");
	printf("\t\t\t|                          'SELAMAT DATANG'                         |\n");
	printf("\t\t\t|                      'DI SALON KECANTIKAN AM'                     |\n");
	printf("\t\t\t=====================================================================\n");
	printf("\t\t\t=====================================================================\n");
	printf("\t\t\t|                                                                   |\n");
	printf("\t\t\t|   Catatan : Bila Anda menginputkan '1', maka Anda Login Sebagai   |\n");
	printf("\t\t\t|             Pelanggan, Abila Anda menginputkan '2' maka Anda Login|\n");
	printf("\t\t\t|             sebagai Pegawai dan Begitu Pula Jika  menginput '3'   |\n");
	printf("\t\t\t|                                                                   |\n");
	printf("\t\t\t|        [1] Pegawai                                                |\n");
	printf("\t\t\t|        [2] Pelanggan                                              |\n");
    printf("\t\t\t|        [3] Pemilik                                                |\n");
    printf("\t\t\t|        [4] Keluar                                                 |\n");
	printf("\t\t\t|                                                                   |\n");
	printf("\t\t\t|===================================================================|\n");
	printf("\t\t\t Untuk Login Pilih (1-4) : ");
	pilihmasuk = validasi_angka();
	system("pause");
    if(pilihmasuk==1){
            loginPegawai:
            system("cls");
            char user [100];
            char pwd [100];
            bool masuk;
            FILE * regist;
            regist = fopen("regis_pegawai.txt","a+");
            masuk = false;
            printf("\t\t\t=====================================================================\n");
            printf("\t\t\t|                            'LOGIN'                                |\n");
            printf("\t\t\t=====================================================================\n");
            printf("\t\t\t|   INPUT USERNAME DAN PASSWORD DENGAN BENAR!!!                      \n");
            printf("\t\t\t|                                                                   \n");
            printf("\t\t\t|   Username : ");
            scanf("%s", &user);
            printf("\n\t\t\t|   Password : ");
            scanf("%s", &pwd);
            printf("\n\t\t\t|                                                                \n");
            printf("\t\t\t====================================================================\n");
                while(fscanf(regist,"\n%s\n%s",karyawan.username,karyawan.password)!=EOF){
		            if((strcmp(karyawan.username,user) == 00) && (strcmp(karyawan.password,pwd)==00)){
		                masuk = true;
		                break;
	           		}
	       		}
	       		if(!masuk){ //bila username dan/ password salah
                    GagalMasuk:
		            system("cls");
		            int logpegawai;
                    printf("\t\t\t====================================================================\n");
                    printf("\t\t\t|                 -PASSWORD ATAU USERNAME INVALID-                 |\n");
                    printf("\t\t\t|                            -LOGIN GAGAL-                         |\n");
                    printf("\t\t\t====================================================================\n");
                    printf("\n\n\n\t\t\tIngin Login Kembali?\n\n");
                    printf("\t\t\t1. Login \n");
                    printf("\t\t\t2. Keluar\n");
		            printf("Pilih (1-2) : ");
		            logpegawai = validasi_angka();
		            if(logpegawai==1){
		            	goto loginPegawai;
		            }
		            else if(logpegawai==2){
                        goto awal;
		            }
		            else{
			            printf("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-2!     |\n");
			            getch();
			            goto GagalMasuk;
		            }
		    	}
		    	else { //bila username dan password benar
	            printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                         -LOGIN BERHASIL-                         |\n");
                printf("\t\t\t====================================================================\n");
	            getch();
				menuPegawai();
	            system("cls");
	        	}

            }
        else if(pilihmasuk==2){//masuk sebagai pelanggan
        loginPelanggan:
        system("cls");
        bool masuk;
        int pilih;
        nama_program();
        printf ("\n\n");
        printf("\t\t\t========================================================================\n");
        printf("\t\t\t|                               'PELANGGAN'                            |\n");
        printf("\t\t\t========================================================================\n");
        printf("\t\t\t========================================================================\n");
        printf("\t\t\t|   	                                                                 |\n");
        printf("\t\t\t|   Catatan : Bila Anda Belum Memiliki Akun Harap Input '1' Untuk Masuk|\n");
        printf("\t\t\t|             ke Registrasi dan Apabila Anda Sudah Mempunyai Akun Harap|\n");
        printf("\t\t\t|             Input '2' Untuk Melanjutkan ke Menu Layanan              |\n");
        printf("\t\t\t|                                                                      |\n");
        printf("\t\t\t|        [1] Registrasi                                                |\n");
        printf("\t\t\t|        [2] Login                                                     |\n");
        printf("\t\t\t|   	                                                                 |\n");
        printf("\t\t\t|======================================================================|\n");
        printf("\t\t\t Pilih (1-2) : ");
        pilih = validasi_angka();

        switch(pilih){
            case 1://melakukan registrasi+
                system("cls");
                FILE * regis;
                regis=fopen("regis_pengguna.txt","a+");
                nama_program();
                printf ("\n\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                          'REGISTRASI'                             |\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|   	                                                              \n");
                printf("\t\t\t|   Input Data dengan Benar!!                                       \n");
                printf("\t\t\t|                                                                   \n");
                printf("\t\t\t|   Input Nama\t\t: ");
                scanf(" %[^\n]", user.nama);
                getchar();
                printf("\n\t\t\t|   Input No.Telpon\t: ");
                user.notelpon = validasi_no_hp();
                printf("\n\t\t\t|   Tentukan Username\t: ");
                scanf(" %[^\n]s", &user.username);
                printf("\n\t\t\t|   Tentukan Password\t: ");
                scanf(" %[^\n]s", &user.password);
                printf("\n\t\t\t|   	                                                          \n");
                printf("\t\t\t|   Catatan : Harap Ingat Username dan Password yang Telah          \n");
                printf("\t\t\t|             Anda Tentukan!!!                                       \n");
                printf("\t\t\t|                                                                   \n");
                printf("\t\t\t====================================================================\n");
                printf("\n\n");
                getch();
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                       -REGESTRASI BERHASIL-                      |\n");
                printf("\t\t\t====================================================================\n");
                fprintf(regis,"%s\n",user.username);
	            fprintf(regis,"%s\n",user.password);
	            fclose(regis);
	            getch();
				system("cls");
                goto loginPelanggan;
            case 2:
                cobaLogin:
                system("cls");
                FILE * regist;
				regist = fopen("regis_pengguna.txt","a+");
				masuk = false;
                printf("\t\t\t=====================================================================\n");
                printf("\t\t\t|                            'LOGIN'                                |\n");
                printf("\t\t\t=====================================================================\n");
                printf("\t\t\t|   INPUT USERNAME DAN PASSWORD DENGAN BENAR!!!                      \n");
                printf("\t\t\t|                                                                   \n");
                printf("\t\t\t|   Username : ");
                scanf("%s", &username);
                printf("\n\t\t\t|   Password : ");
                scanf("%s", &password);
                printf("\n\t\t\t|                                                                \n");
                printf("\t\t\t====================================================================\n");
                
				FILE * save;//untuk menyimpan username pelanggan yang nantinya akan dibandingkan dengan kode member apabila pelanggan menjadi anggota
                save = fopen("simpan_username.txt", "w+");
                fprintf(save, "%s", username);
                fclose(save);
                
                while(fscanf(regist,"\n%s\n%s",user.username,user.password)!=EOF){
		            if((strcmp(user.username,username) == 00) && (strcmp(user.password,password)==00)){
		                masuk = true;
		                break;
	           		}
	       		}
	       		
	       		if(!masuk){ //bila username dan/ password salah
                    loginGagal:
		            system("cls");
		            int gagal;
                    printf("\t\t\t====================================================================\n");
                    printf("\t\t\t|                 -PASSWORD ATAU USERNAME INVALID-                 |\n");
                    printf("\t\t\t|                            -LOGIN GAGAL-                         |\n");
                    printf("\t\t\t====================================================================\n");
                    printf("\n\n\n\t\t\tIngin Login Kembali?\n\n");
                    printf("\t\t\t1. Login \n");
                    printf("\t\t\t2. Keluar\n");
		            //input pilihan angka acak untuk coba lagi memasukkan username dan password
		            printf("Pilih (1-2) : ");
		            gagal = validasi_angka();
		            if(gagal==1){
		            	goto cobaLogin;
		            }
		            else if(gagal==2){
                        goto loginPelanggan;
		            }
		            else{
			            printf("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-2!       \n");
			            getch();
			            goto loginGagal;
		            }
		    	}
		    	else { //bila username dan password benar
	            printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                         -LOGIN BERHASIL-                         |\n");
                printf("\t\t\t====================================================================\n");
	            getch();
				menuPelanggan();
	            system("cls");
	        	}
            default:
                printf("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-2!       \n");
                getch();
                goto loginPelanggan;
        }
	}
            else if(pilihmasuk==3){
                loginAdmin:
                system("cls");
                char admin_user[30];
                char pwd_admin[30];
                printf("\t\t\t=====================================================================\n");
                printf("\t\t\t|                            'LOGIN'                                |\n");
                printf("\t\t\t=====================================================================\n");
                printf("\t\t\t|   INPUT USERNAME DAN PASSWORD DENGAN BENAR!!!                      \n");
                printf("\t\t\t|                                                                   \n");
                printf("\t\t\t|   Username : ");
                scanf("%s", &admin_user);
                printf("\n\t\t\t|   Password : ");
                scanf("%s", &pwd_admin);
                printf("\n\t\t\t|                                                                \n");
                printf("\t\t\t====================================================================\n");
                if(strcmp(admin_user,"admin")==0 && strcmp(pwd_admin,"admin12")==0){
                        printf("\t\t\t====================================================================\n");
                        printf("\t\t\t|                         -LOGIN BERHASIL-                         |\n");
                        printf("\t\t\t====================================================================\n");
                        getch();
                        admin();
                }
                else {
                    Gagal_admin:;
                    int logAdmin;
                    printf("\t\t\t====================================================================\n");
                    printf("\t\t\t|                 -PASSWORD ATAU USERNAME INVALID-                 |\n");
                    printf("\t\t\t|                            -LOGIN GAGAL-                         |\n");
                    printf("\t\t\t====================================================================\n");
                    printf("\n\n\n\t\t\tIngin Login Kembali?\n\n");
                    printf("\t\t\t1. Login \n");
                    printf("\t\t\t2. Keluar\n");
		            printf("Pilih (1-2) : ");
		            logAdmin = validasi_angka();
		            if(logAdmin==1){
		            	goto loginAdmin;
		            }
		            else if(logAdmin==2){
                        goto awal;
		            }
		            else{
			            printf("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-2!     |\n");
			            getch();
			            goto Gagal_admin;
		            }

                }
            }
            else if(pilihmasuk==4){
                system("cls");
                exit(1);
            }
            else{
                 printf("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-4!     |\n");
                 getch();
                 goto awal;
            }
        }

void aturanmembership(){
    system("cls");
    printf("\n\n");
    printf ("\t\t\t=======================================================\n");
    printf ("\t\t\t|                   'TENTANG MEMBERSHIP'              |\n");
    printf ("\t\t\t=======================================================\n");
	printf ("\t\t\t|                         ATURAN                      |\n");
	printf ("\t\t\t|                                                     |\n");
	printf ("\t\t\t|    1. Sudah pernah melakukan transaksi pembayaran   |\n");
	printf ("\t\t\t|       di Salon Kecantikan AM                        |\n");
	printf ("\t\t\t|    2. Setiap anggota hanya diperbolehkan memiliki   |\n");
	printf ("\t\t\t|       satu kartu membership                         |\n");
	printf ("\t\t\t|    3. Untuk mendaftar menjadi member dikenakan      |\n");
	printf ("\t\t\t|       biaya Rp. 50.000  dan beralaku selamanya      |\n");
	printf ("\t\t\t|      											 	 |");
	printf ("\t\t\t=======================================================\n");
	printf ("\t\t\t=======================================================\n");
	printf ("\t\t\t|                  KEUNTUNGAN MEMBER                  |\n");
	printf ("\t\t\t|                                                     |\n");
	printf ("\t\t\t|    1. Mendapat potongan setiap melakukan layanan di |\n");
	printf ("\t\t\t|       Salon Kecantikan AM                           |\n");
	printf ("\t\t\t|    2. Mendapat bonus maupun promo setiap hari-hari  |\n");
	printf ("\t\t\t|       penting                                       |\n");
	printf ("\t\t\t|      												 |\n");
	printf ("\t\t\t=======================================================");
}

void tampilanLayanan(){
    system("cls");
    printf("\n\n");
	printf ("\t\t\t==================================================================\n");
	printf ("\t\t\t|                 - DAFTAR LAYANAN DAN HARGANYA-                 |\n");
	printf ("\t\t\t==================================================================\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [1] 3D HAIR CUTTING             Rp.  140.000,-          |\n");
	printf ("\t\t\t|        [2] BLOW DRY & STYLING          Rp.  200.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|                    - PEWARNAAN RAMBUT-                         |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [3] BALAYAGE REFRESH            RP.  140.000,-          |\n");
	printf ("\t\t\t|        [4] BALAYAGE RESET              Rp.  160.000,-          |\n");
	printf ("\t\t\t|        [5] BALAYAGE NO BLEACH          Rp.  150.000,-          |\n");
	printf ("\t\t\t|        [6] COLOR REFRESH               Rp.  130.000,-          |\n");
	printf ("\t\t\t|        [7] COLOR RESET                 Rp.  145.000,-          |\n");
	printf ("\t\t\t|        [8] PEEK A BOO                  Rp.  170.000,-          |\n");
	printf ("\t\t\t|        [9] MONEY PIECE                 Rp.  175.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|                   -PERMING & SMOOTHING-                        |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [10] 3D STEAM SMOOTH BLOW       Rp.  120.000,-          |\n");
	printf ("\t\t\t|        [11] STEAM SMOOTH BERLIAN       Rp.  135.000,-          |\n");
	printf ("\t\t\t|        [12] KOREAN WAVE                Rp.  140.000,-          |\n");
	printf ("\t\t\t|        [13] KERATIN                    Rp.  125.000,-          |\n");
	printf ("\t\t\t|        [14] OPPA PERM                  Rp.  135.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [15] HAIR TREATMENT             Rp.  200.000,-          |\n");
	printf ("\t\t\t|        [16] MAKEUP                     Rp.  150.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t==================================================================\n");
	printf ("\n\n");
	printf ("\t\t\t|                  TEKAN ENTER UNTUK KELUAR                     |\n");
	getch();
	menuPegawai();
}


void menuPegawai(){
        awal:
        system("cls");
        nama_program();
        int menupegawai;
        printf("\n\n");
        printf ("\t\t\t============================================================\n");
        printf ("\t\t\t|                      -MENU PEGAWAI-                      |\n");
        printf ("\t\t\t============================================================\n");
        printf ("\t\t\t|                                                          |\n");
        printf ("\t\t\t|    [1] PENDAFTARAN MEMBERSHIP BARU                       |\n");
        printf ("\t\t\t|    [2] INPUT DISKON KHUSUS                               |\n"); 
        printf ("\t\t\t|    [3] LAYANAN                                           |\n");
        printf ("\t\t\t|    [4] KELUAR                                            |\n"); // Pilihan keluar yang dapat digunakan user sebagai pilihan untuk menutup program
        printf ("\t\t\t|                                                          |\n");
        printf ("\t\t\t============================================================\n");
        printf ("\t\t\t|     Silahkan pilih (1-3) : ");
        menupegawai = validasi_angka();
        getch();

        if(menupegawai==1){
                aturanmembership();
                getch();
                system("cls");
                FILE *daftar;
                daftar=fopen("anggota_membership.txt","a+");
                nama_program();
                printf ("\n\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                  'PENDAFTARAN MEMBERSHIP BARU'                   |\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|   	                                                              \n");
                printf("\t\t\t|   Input Data Pelanggan dengan Benar!!                             \n");
                printf("\t\t\t|                                                                   \n");
                printf("\t\t\t|   Nama Pelanggan\t: ");
                scanf(" %[^\n]s", &anggota.nama);
                fflush(stdin);
                printf("\t\t\t|   Usernamen Pelanggan\t: ");
                 scanf(" %[^\n]s", &username);
                printf("\n\t\t\t| No.Telpon \t\t: ");
                anggota.notelpon = validasi_no_hp();
                printf("\n\t\t\t| Kode Member\t: ");
                scanf("%s", &anggota.kodemeber);
                fflush(stdin);
                printf("\t\t\t|                                                                   \n");
                printf("\t\t\t====================================================================\n");
                printf("\n\n");
                getch();
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                -PENDAFTARAN BERHASIL BERHASIL-                   |\n");
                printf("\t\t\t====================================================================\n");

                fprintf(daftar,"%s\n",anggota.kodemeber);
                fprintf(daftar,"%s\n",username);
	            fclose(daftar);
                 getch();
                printf("\n\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|   -TEKAN ENTER UNTUK MELANJUTKAN PRSOSES MENCETAK KARTU MEMBER-  |\n");
                printf("\t\t\t====================================================================\n");
                getch();
                FILE * cetak;
                cetak = fopen("kartu.membership.txt","w+");//cetak file kartumembership
                fprintf (cetak, "=================================================================\n");
                fprintf (cetak, "|                       SALON KECANTIKAN AM                     |\n");
                fprintf (cetak, "|                     BR. BUDA IRENG, SUKAWATI                  |\n");
                fprintf (cetak, "|                         WA. 081247899057                      |\n");
                fprintf (cetak, "=================================================================\n");
                fprintf (cetak, "|      Nama            : %s \n",anggota.nama);
                fprintf (cetak, "|      No.Telpon       : %ld \n",anggota.notelpon);
                fprintf (cetak, "|      Kode Membership : %s \n",anggota.kodemeber);
                fprintf (cetak, "=================================================================\n");
                fclose  (cetak);
                
                FILE * save;
                save = fopen("simpan_username.txt","r");
                fscanf(save, "%s", &username);
                fclose(save);
                
                FILE * must, *must1;
                must = fopen("totalPemasukan.txt","a+");
                fprintf(must,"Pemasukan Membership sebesar 50000 dari %s\n", username);
                fclose(must);
                must1 = fopen("totalPemasukan1.txt","a+");
                fprintf(must1,"50000\n");
				fclose(must1);
				
                printf("\n\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                -KARTU MEMBERSHIP BERHASIL DICETAK-               |\n");
                printf("\t\t\t====================================================================\n");
                getch();

                printf("\n\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                     -PEMBAYARAN MEMBERSHIP-                      |\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                                                                  |\n");
                printf("\t\t\t|      Nama            : %s \n",anggota.nama);
                printf("\t\t\t|      No.Telpon       : %ld \n",anggota.notelpon);
                printf("\t\t\t|      Kode Membership : %s \n",anggota.kodemeber);
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                     Jumlah Pembayaran = Rp. 50.000               |\n");
                printf("\t\t\t====================================================================\n");
                getch();
                printf("\t\t\t==========================================================================\n");
                printf("\t\t\t| -TEKAN ENTER UNTUK MELANJUTKAN PRSOSES MENCETAK PEMBAYARAN MEMBERSHIP- |\n");
                printf("\t\t\t==========================================================================\n");
                getch();

                time_t t;
                t = time(NULL);
                struct tm tm = *localtime(&t);
                FILE * out;
                out = fopen("transaksi_daftarmember.txt","w+");//cetak file nota
                fprintf (out, "==============================================================================================================\n\n");
                fprintf (out, "                                               SALON KECANTIKAN AM                                                \n");
                fprintf (out, "                                             BR. BUDA IRENG, SUKAWATI                                              \n");
                fprintf (out, "                                                WA. 081247899057                                               \n");
                fprintf (out, "==============================================================================================================\n\n");
                fprintf (out, "Tanggal                                   : %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
                fprintf (out, "Nama                                      : %s \n",anggota.nama);
                fprintf (out, "Membership                                : Rp. 50.000\n");
                fprintf (out, "-----------------------------------------------------------------------------------------------------------------\n");
                fprintf (out, "                                               TOTAL PEMBAYARAN                                                  \n");
                fprintf (out, "                                                  Rp. 50.000\n ");
                fprintf (out, "-----------------------------------------------------------------------------------------------------------------\n");
                fclose  (out);
                printf("\n\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                    -NOTA ANDA BERHASIL DICETAK-                  |\n");
                printf("\t\t\t====================================================================\n");
                getch();
                menuPegawai();
        }
        else if(menupegawai==2){
            system("cls");
            tanggal = &a;
            bulan = &b;
            diskon = &c;
            printf("\n\n");
            printf("\t\t\t====================================================================\n");
            printf("\t\t\t|                           'DISKON'                               |\n");
            printf("\t\t\t====================================================================\n");
            printf("\t\t\t|   Catatan : Misalnya diskon 0.1 ditulis 0.9                      |\n");
            printf("\t\t\t|                                                                  |\n");
            printf("\t\t\t|   Masukan Tanggal (1-31) : ");
            scanf("%d", &a);
            printf("\n\t\t\t|   Masukan Bulan (0-11) : ");
            scanf("%d", &b);
            printf("\n\t\t\t|   Masukan Diskon       : ");
            scanf("%f", &c);
            printf("\n\t\t\t====================================================================\n");
            getch();
            menuPegawai();
        }
        else if(menupegawai==3){
            system("cls");
            tampilanLayanan();
        }
        else if(menupegawai==4){
            system("cls");
            login();
        }
        else{
            printf("\t\t\t|   Input yang Anda tidak tersedia, Input Hanya Angka 1-2!  |\n");
            getch();
            goto awal;

        }

}

void menuPelanggan(){
    menuPelanggan:
	system("cls");
	nama_program();
	int menuPelanggan;
	printf("\n\n");
	printf ("\t\t\t============================================================\n");
	printf ("\t\t\t|                        -MENU-                            |\n");
	printf ("\t\t\t============================================================\n");
	printf ("\t\t\t|                                                          |\n");
	printf ("\t\t\t|    [1] PEMESANAN                                         |\n");
	printf ("\t\t\t|    [2] KONFIRMASI PEMESANAN                              |\n");
	printf ("\t\t\t|    [3] KELUAR                                            |\n"); // Pilihan keluar yang dapat digunakan user sebagai pilihan untuk menutup program
	printf ("\t\t\t|                                                          |\n");
	printf ("\t\t\t|==========================================================|\n");
	printf ("\t\t\t     Silahkan pilih (1-3) : ");
	menuPelanggan = validasi_angka();
    getch();

    if(menuPelanggan==1){
			menuLayanan();
    }
    else if(menuPelanggan==2){
        konfirmasiPemesanan();
    }
    else if(menuPelanggan==3){
			system("cls");
			printf("\n\n");
			printf ("\t\t\t============================================================\n");
            printf ("\t\t\t|  -TERIMA KASIH TELAH MENGUNJUNGI SALON KECANTIKAN KAMI-  |\n");
            printf ("\t\t\t============================================================\n");
			getch();
			exit(0);
    }
    else{
			printf("\t\t\t|   Input yang Anda tidak tersedia, Input Hanya Angka 1-3!  |\n");
            getch();
			goto menuPelanggan;
		}

}

void menuLayanan(){
    menuLayanan:
	system("cls");
	char *namaLayanan[100][100];
    int i, layanan, menulayanan[100], member, harga[100];
    float diskonjadi;
    float  bayarMemberKhusus, bayarKhusus, totalharga = 0, bayarMember;
	char kode_member[100];

	printf("\n\n");
	if(*diskon == 1){
		printf("Mohon Maaf, Tidak Ada Diskon Khusus Hari Ini\n");
	}
	else{
		diskonjadi = (1-*diskon)*100;
		printf("Diskon %.2f persen untuk Pembayaran Semua Layanan Khusus Hari Ini\n", diskonjadi);
	}
	printf("\n\n");
	printf ("\t\t\t==================================================================\n");
	printf ("\t\t\t|                 - DAFTAR LAYANAN DAN HARGANYA-                 |\n");
	printf ("\t\t\t==================================================================\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [1] 3D HAIR CUTTING             Rp.  140.000,-          |\n");
	printf ("\t\t\t|        [2] BLOW DRY & STYLING          Rp.  200.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|                    - PEWARNAAN RAMBUT-                         |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [3] BALAYAGE REFRESH            RP.  140.000,-          |\n");
	printf ("\t\t\t|        [4] BALAYAGE RESET              Rp.  160.000,-          |\n");
	printf ("\t\t\t|        [5] BALAYAGE NO BLEACH          Rp.  150.000,-          |\n");
	printf ("\t\t\t|        [6] COLOR REFRESH               Rp.  130.000,-          |\n");
	printf ("\t\t\t|        [7] COLOR RESET                 Rp.  145.000,-          |\n");
	printf ("\t\t\t|        [8] PEEK A BOO                  Rp.  170.000,-          |\n");
	printf ("\t\t\t|        [9] MONEY PIECE                 Rp.  175.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|                   -PERMING & SMOOTHING-                        |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [10] 3D STEAM SMOOTH BLOW       Rp.  120.000,-          |\n");
	printf ("\t\t\t|        [11] STEAM SMOOTH BERLIAN       Rp.  135.000,-          |\n");
	printf ("\t\t\t|        [12] KOREAN WAVE                Rp.  140.000,-          |\n");
	printf ("\t\t\t|        [13] KERATIN                    Rp.  125.000,-          |\n");
	printf ("\t\t\t|        [14] OPPA PERM                  Rp.  135.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t|        [15] HAIR TREATMENT             Rp.  200.000,-          |\n");
	printf ("\t\t\t|        [16] MAKEUP                     Rp.  150.000,-          |\n");
	printf ("\t\t\t|                                                                |\n");
	printf ("\t\t\t==================================================================\n");
	printf ("\t\t\t|        [17] KEMBALI                                            |\n"); // berfungsi untuk kembali kemenu sebelumnya
	printf ("\t\t\t==================================================================\n");

    printf("\t\t\t|         Masukan Jumlah Layanan yang Diinginkan : "); //untuk memilih jumlah layanan yang diinginkan
    layanan = validasi_angka();

    for(i=1; i<=layanan; i++){//perulangan untuk mementukan jumlah layanan yang ingin kita gunakan
		printf("\n\t\t\t|        Pilih Layanan ke-%i : " , i);
		scanf("\n%i", &menulayanan[i]);
		printf("\n");

    	// untuk inisiasi harga dan layanan
		if(menulayanan[i]==1){
			harga[i]= 140000;
			namaLayanan[i][i]= "3D HAIR CUTTING";
			KeteranganLayanan1();
			getch();
	 	}
	 	else if(menulayanan[i]==2){
            harga[i]= 200000;
			namaLayanan[i][i]= "BLOW DRY & STYLING";
			KeteranganLayanan2();
			getch();
	 	}
	 	else if(menulayanan[i]==3){
            harga[i]= 140000;
			namaLayanan[i][i]= "BALAYAGE REFRESH";
			KeteranganLayanan3();
			getch();
	 	}
	 	else if(menulayanan[i]==4){
            harga[i]= 160000;
			namaLayanan[i][i]= "BALAYAGE RESET";
			KeteranganLayanan4();
			getch();
        }
        else if(menulayanan[i]==5){
            harga[i]= 150000;
			namaLayanan[i][i]= "BALAYAGE NO BLEACH";
			KeteranganLayanan5();
			getch();
        }
        else if(menulayanan[i]==6){
            harga[i]= 130000;
			namaLayanan[i][i]= "COLOR REFRESH ";
			KeteranganLayanan6();
			getch();
        }
         else if(menulayanan[i]==7){
            harga[i]= 145000;
			namaLayanan[i][i]= "COLOR RESET";
			KeteranganLayanan7();
			getch();
        }
         else if(menulayanan[i]==8){
            harga[i]= 170000;
			namaLayanan[i][i]= "PEEK A BOO";
			KeteranganLayanan8();
			getch();
        }
        else if(menulayanan[i]==9){
            harga[i]= 175000;
			namaLayanan[i][i]= "MONEY PIECE";
			KeteranganLayanan9();
			getch();
        }
        else if(menulayanan[i]==10){
            harga[i]= 120000;
			namaLayanan[i][i]= "3D STEAM SMOOTH BLOW ";
			KeteranganLayanan10();
			getch();
        }
        else if(menulayanan[i]==11){
            harga[i]= 135000;
			namaLayanan[i][i]= "STEAM SMOOTH BERLIAN";
			KeteranganLayanan11();
			getch();
        }
        else if(menulayanan[i]==12){
            harga[i]= 140000;
			namaLayanan[i][i]= "KOREAN WAVE";
			KeteranganLayanan12();
			getch();
        }
         else if(menulayanan[i]==13){
            harga[i]= 125000;
			namaLayanan[i][i]= "KERATIN";
			KeteranganLayanan13();
			getch();
        }
         else if(menulayanan[i]==14){
            harga[i]= 135000;
			namaLayanan[i][i]= "OPPA PERM";
			KeteranganLayanan14();
			getch();
        }
        else if(menulayanan[i]==15){
            harga[i]= 200000;
			namaLayanan[i][i]= "HAIR TREATMENT";
			KeteranganLayanan15();
			getch();
        }
       else if(menulayanan[i]==16){
            harga[i]= 150000;
			namaLayanan[i][i]= "MAKEUP";
			KeteranganLayanan16();
			getch();
        }
        else if(menulayanan[i]==17){
            menuPelanggan();
        }
        else{
            printf ("\t\t\t==================================================================\n");
            printf ("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-17!    |\n");
            printf ("\t\t\t==================================================================\n");
            getch();
            goto menuLayanan;
        }
    }

        membership:
        printf("\t\t\t====================================================================\n");
	 	printf("\t\t\t|                           -MEMBERSHIP-                           |\n");
	 	printf("\t\t\t====================================================================\n");
        printf("\n\n\n\t\t\tApakah Anda Mempunyai Kartu Member?\n\n");
        printf("\t\t\t1. Ya \n");
        printf("\t\t\t2. Tidak\n");
        printf("Pilih (1-2) : ");
        member = validasi_angka();
        if(member==1){
                loginMember:;
                bool masuk;
                FILE *rus;
                rus = fopen("anggota_membership.txt","a+");
                masuk = false;
                char username_pelanggan[30];
                printf("\t\t\t====================================================================\n");
	 			printf("\t\t\t|                           -MEMBERSHIP-                           |\n");
	 			printf("\t\t\t====================================================================\n");
                printf("\t\t\t|  Masukan KODE MEMBERSHIP anda : ");
                scanf("%s", &kode_member);
                
                FILE *save;//membuka simpan username
                save = fopen("simpan_username.txt","r");
                fscanf(save, "%s", &username_pelanggan);
                fclose(save);
                
                 while(fscanf(rus,"\n%s\n%s",anggota.kodemeber,username)!=EOF){
		            if((strcmp(anggota.kodemeber,kode_member) == 00) && (strcmp( username,username_pelanggan)==0)){
		                masuk = true;
		                break;
	           		}
	       		}
	       		if(!masuk){ //bila kode salah
                    GagalMasuk:
		            system("cls");
		            int masuklagi;
                    printf("\t\t\t====================================================================\n");
                    printf("\t\t\t|            -KODE MEMBERSHIP YANG ANDA MASUKAN SALAH!!!-          |\n");
                    printf("\t\t\t====================================================================\n");
                    printf("\n\n\n\t\t\tIngin Masukan Kode Membership?\n\n");
                    printf("\t\t\t|  1. Ya \n");
                    printf("\t\t\t|  2. Tidak\n");
		            printf("\t\t\t|  Pilih (1-2) : ");
		            masuklagi = validasi_angka();
		            if(masuklagi==1){
		            	goto loginMember;
		            }
		            else if(masuklagi==2){
                        goto membership;
		            }
		            else{
			            printf("\t\t\t|     Input yang Anda tidak tersedia, Input Hanya Angka 1-2!     |\n");
			            getch();
			            goto GagalMasuk;
		            }
		    	}
		    	else { //bila kode membership benar masuk ke pembayaran

                        t = time(NULL);
                        tm = localtime(&t);
                        
						FILE *save;//membuka simpan username
		                save = fopen("simpan_username.txt","r");
		                fscanf(save, "%s", &username);
		                fclose(save);
                
                        if((tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900)==(*tanggal, *bulan, tm->tm_year+1900)){
                            for(i=1; i<=layanan; i++){
                                totalharga= totalharga + harga[i];
                            }
                             bayarMember = totalharga * 0.9;
                             bayarMemberKhusus = *diskon * bayarMember;//diskon member  + diskon pada tanggal tertentu input dilakukan pegawai
                             printf("\n\n");
                             printf("\t\t\tJam Masuk          : %d:%d \n", tm->tm_hour, tm->tm_min);
                             printf("\t\t\t====================================================================\n");
                             printf("\t\t\t|                       -TOTAL PEMBAYARAN-                         |\n");
                             printf("\t\t\t====================================================================\n");
                             printf("\t\t\t|                                                                  |\n");
                             printf("\t\t\t| Username  : %s ", username);
                             for(i=1; i<=layanan; i++){
                                printf("\t\t\t|   %s",namaLayanan[i][i]);
                    			printf("Rp. %d\n",harga[i]);
                            }
                            printf("\t\t\t|                                                                  |\n");
                            printf("\t\t\t|                                                                  |\n");
                            printf("\t\t\t====================================================================\n");
                            printf("\t\t\t|    Total Pembayaran = Rp. %.2f\n", bayarMemberKhusus);
                            printf("\t\t\t====================================================================\n");
                            getch();
                            FILE * vis, *must1;
                            vis = fopen("Pemasukan.txt","w");
                            fprintf(vis,"Pemasukan sebesar Rp. %.2f dari %s\n",bayarMemberKhusus, username);
                            fclose(vis);
			                must1 = fopen("Pemasukan1.txt","w");
			                fprintf(must1,"%.2f\n",bayarMemberKhusus);
							fclose(must1);


                            //menyimpan waktu pemesanan
                            FILE * waktu;
                            waktu = fopen("waktu.txt", "w+");
                            fprintf (waktu, "%d %d", tm->tm_hour,tm->tm_min );
                            fclose(waktu);
							
                            FILE * cetak;
                            cetak = fopen("transaksi_anggotamember3.txt","w+");//cetak file nota
                            fprintf (cetak, "==============================================================================================================\n\n");
                            fprintf (cetak, "                                               SALON KECANTIKAN AM                                                \n");
                            fprintf (cetak, "                                             BR. BUDA IRENG, SUKAWATI                                              \n");
                            fprintf (cetak, "                                                WA. 081247899057                                               \n");
                            fprintf (cetak, "==============================================================================================================\n\n");
                            fprintf (cetak, "Tanggal                                   : %d-%d-%d\n", tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900);
                            fprintf (cetak, "Nama                                      : %s ", username);
                            for(i=1; i<=layanan; i++){
                                fprintf(cetak, "\n%s",namaLayanan[i][i]);
                                fprintf(cetak, "\t\t\t\t\t : Rp. %d\n",harga[i]);
                            }
                            fprintf (cetak, "\n-----------------------------------------------------------------------------------------------------------------\n");
                            fprintf (cetak, "                                               TOTAL PEMBAYARAN                                                  \n");
                            fprintf (cetak, "                                               Rp. %.2f\n", bayarMemberKhusus);
                            fprintf (cetak, "-----------------------------------------------------------------------------------------------------------------\n");
                            fclose  (cetak);


                            printf("\n\n");
                            printf("\t\t\t====================================================================\n");
                            printf("\t\t\t| - PEMESANAN ANDA TELAH BERHASIL DISIMPAN KEMBALI KE MENU UTAMA - |\n");
                            printf("\t\t\t|       - UNTUK MENGKONFIRMASI PEMESANAN BATAS WAKTU 2 JAM -       |\n");
                            printf("\t\t\t|                  - SEBELUM DINYATAKAN HANGUS -                   |\n");
                            printf("\t\t\t====================================================================\n");
                            getch();
                            goto menuLayanan;



                        }


        }
        }
        else if(member==2){//jika pelanggan tidak punya member
            t = time(NULL);
            tm = localtime(&t);
            FILE *save;//membuka simpan username
		   save = fopen("simpan_username.txt","r");
		   fscanf(save, "%s", &username);
		   fclose(save);

           if((tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900)==(*tanggal, *bulan, tm->tm_year+1900)){
                for(i=1; i<=layanan; i++){
                    totalharga= totalharga + harga[i];
                }
                bayarKhusus = *diskon * totalharga;//diskon pada tanggal tertentu
                printf("\t\t\tJam Masuk          : %d:%d \n", tm->tm_hour, tm->tm_min);
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                       -TOTAL PEMBAYARAN-                         |\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|                                                                  |\n");
                printf("\t\t\t| Username  : %s ", username);
                for(i=1; i<=layanan; i++){
                    printf("\t\t\t|   %s",namaLayanan[i][i]);
                    printf("Rp. %d\n",harga[i]);
                }
                printf("\t\t\t|                                                                  |\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t|    Total Pembayaran = Rp. %.2f\n", bayarKhusus);
                printf("\t\t\t====================================================================\n");
                getch();
                FILE * bayar, *must1;
                bayar = fopen("Pemasukan.txt","w");
                fprintf(bayar,"Pemasukan sebesar Rp. %.2f dari %s\n",bayarKhusus, username);
                fclose(bayar);
                must1 = fopen("Pemasukan1.txt","w");
                fprintf(must1,"%.2f\n",bayarKhusus);
				fclose(must1);

                //menyimpan waktu pemesanan
                FILE * waktu;
                waktu = fopen("waktu.txt", "w+");
                fprintf (waktu, "%d %d", tm->tm_hour, tm->tm_min);
                fclose(waktu);

                FILE * cetak;
                cetak = fopen("transaksi_anggotamember3.txt","w+");//cetak file nota
                fprintf (cetak, "==============================================================================================================\n\n");
                fprintf (cetak, "                                               SALON KECANTIKAN AM                                                \n");
                fprintf (cetak, "                                             BR. BUDA IRENG, SUKAWATI                                              \n");
                fprintf (cetak, "                                                WA. 081247899057                                               \n");
                fprintf (cetak, "==============================================================================================================\n\n");
                fprintf (cetak, "Tanggal                                   : %d-%d-%d\n", tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900);
                fprintf (cetak, "Nama                                      : %s ", username);
                for(i=1; i<=layanan; i++){
                fprintf(cetak, "\n%s",namaLayanan[i][i]);
                fprintf(cetak, "\t\t\t : Rp. %d",harga[i]);
                }
                fprintf (cetak, "\n-----------------------------------------------------------------------------------------------------------------\n");
                fprintf (cetak, "                                               TOTAL PEMBAYARAN                                                  \n");
                fprintf (cetak, "                                               Rp. %.2f\n", bayarKhusus);
                fprintf (cetak, "-----------------------------------------------------------------------------------------------------------------\n");
                fclose  (cetak);

                
				printf("\n\n");
                printf("\t\t\t====================================================================\n");
                printf("\t\t\t| - PEMESANAN ANDA TELAH BERHASIL DISIMPAN KEMBALI KE MENU UTAMA - |\n");
                printf("\t\t\t|       - UNTUK MENGKONFIRMASI PEMESANAN BATAS WAKTU 2 JAM -       |\n");
                printf("\t\t\t|                  - SEBELUM DINYATAKAN HANGUS -                   |\n");
                printf("\t\t\t====================================================================\n");
				
				getch();
                menuPelanggan();
        }
    }

        else{
            printf("\t\t\t|   Input yang Anda tidak tersedia, Input Hanya Angka 1-3!  |\n");
            getch();
			goto membership;
        }


}

void konfirmasiPemesanan(){
    system("cls");
    time_t t;
    time_t now;
    t = time(NULL);
    tm = localtime(&t);
    float nilai;
    int jam1, jam2, menit1, menit2, lama, konversi1, konversi2, pilih;
    char buff[255];
	char buff2[255];
   	FILE * keluar;
   	keluar = fopen("waktukeluar.txt", "w");
   	fprintf(keluar, "%d", tm->tm_hour, tm->tm_min);
   	fclose(keluar);
	printf("\t\t\tJam Konfirmasi = %d:%d\n", tm->tm_hour, tm->tm_min);
	fflush(stdin);
	//membaca file waktu memesan dan waktu konfirmasi
	FILE *waktupesan, *waktuconf;
	waktupesan = fopen("waktu.txt", "r");
	fscanf (waktupesan, "%d %d", &jam1, &menit1);
	fclose(waktupesan);
	waktuconf = fopen("waktukeluar.txt", "r");
	fscanf (waktuconf, "%d %d", &jam2, &menit2);
	fclose(waktuconf);
	
	konversi1= (jam1*60)+ menit1;
	konversi2= (jam2*60)+ menit2;
	lama = konversi1-konversi2;


							if (lama<=120 ) {
                                printf("\n\n");
	       						printf("\t\t\t Apakah Anda ingin Mengkonfirmasi Pesesanan ?\n");
	       						printf("\t\t\t 1. Ya\n");
	       						printf("\t\t\t 2. Tidak\n");
	       						printf("\t\t\t Pilih (1-2):");
	       						pilih = validasi_angka();
	       						printf("\n\n");
	       						if(pilih==1){
                                    FILE*transaksi1;
                                    if((transaksi1=fopen("transaksi_anggotamember3.txt", "r"))==NULL){
                                        printf("\t\t\tTidak ada file \n");
                                        }
                                    while(fgets(buff, sizeof(buff), transaksi1)){
                                        printf("%s",buff);
                                        }
                                    fclose(transaksi1);
                                

                                    printf("\n\n");
                                    printf("\t\t\tSilahkan Transfer ke Rekening di Bawah ini\n");
                                    printf("\t\t\tBCA     : 001193495738\n");
                                    printf("\t\t\tBNI     : 002300230498\n");
                                    printf("\t\t\tMandiri : 006463774536\n");
                                    getch();
                                    printf ("\n\n");
                                    printf ("\t\t\tTerimakasih Telah Melakukan Pemesanan di Salon Kami");
                                    
                                    FILE * bayar;
					                bayar = fopen("Pemasukan.txt","r");
					                fgets(buff2, sizeof(buff2), bayar);
					                fclose(bayar);
                                    
                                    
		                            FILE * vis;
		                            vis = fopen("totalPemasukan.txt","a+");
		                            fprintf_s(vis,"%s\n",buff2);
		                            fclose(vis);
                                   
                                    
                                    FILE * bayar2;
					                bayar2 = fopen("Pemasukan1.txt","r");
					                fscanf_s(bayar2,"%f",&nilai);
					                fclose(bayar2);
					                
					                FILE * must1;
					                must1 = fopen("totalPemasukan1.txt","a+");
					                fprintf(must1,"%.2f\n",nilai);
									fclose(must1);
									
					            getch();
                                menuPelanggan();  
                                }
	       						else if(pilih==2){
	       							printf ("\n\n");
                                    printf ("\t\t\tTerimakasih Telah Melakukan Pemesanan di Salon Kami");
                                    getch();
                                    menuPelanggan();
	       						}
	       						else{
                                    printf ("\t\t\tInput Salah input Hanya Angka 1-2");
                                    getch();
                                    konfirmasiPemesanan();
	       						}

	   						}
	   						else {
							   	printf ("\n\n\n\n");
								printf ("\t\t\tPemesanan Dibatalkan Waktu Telah Jatuh Tempo\n");
		   						printf ("\t\t\tTerimakasih Telah Melakukan Pemesanan di Salon Kami");
		   						getch();
		   						menuPelanggan();
							}
			}







void KeteranganLayanan1(void){
    printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                         < HAIR CUTTING >                                           |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|    3 Dimension cutting akan mampu membuat ruang dalam rambut, mampu memberi effek menambah atau    |\n");
    printf("\t\t\t|     mengurangi volume sesuai kebutuhan rambut, menciptakan arah gerak sesuai kebiasaan customer    |\n");
    printf("\t\t\t|                          sehingga saat dikibaskan rambut terlihat lebih indah                      |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 140.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");

}

void KeteranganLayanan2(void){
    printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                      < BLOW DRY & STYLING >                                        |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|                       Perawatan ini akan mampu menata rambut anda menjadi rapi                     |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 200.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}


void KeteranganLayanan3(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                        < BALAYAGE REFRESH >                                        |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|   Balayage refresh treatment berfungsi untuk mengisi kembali balayage yang sudah mulai memudar     |\n");
    printf("\t\t\t|                        sehingga rambut menjadi berkilau dan warna tahan lama                       |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 140.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}

void KeteranganLayanan4(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                        < BALAYAGE RESET >                                          |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|    Pewarnaan dan higlight rambut dengan warna cool-toned. Diterapkan menggunakan teknik balayage   |\n");
    printf("\t\t\t|  untuk tampilan yang lebih natural. Rambut anda akan dibersihkan untuk mengurangi warna sebelumnya |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 160.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}

void KeteranganLayanan5(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                        < BALAYAGE NO BLEACH >                                      |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|    Pewarnaan dengan teknik menghasilkan suatu gradasi tnpa bleaching dengan hasil warm-toned.      |\n");
    printf("\t\t\t|      sangat cocok bagi pemula yang mempunyai rambut virgin yang ingin membalayage rambutnya        |\n");
    printf("\t\t\t|                                       tanpa menggunakan bleaching                                  |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 150.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}


void KeteranganLayanan6(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                        < COLOR REFRESH >                                           |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|    Color refresh berfungsi untuk mengisi kembali color yang sudah mulai memudar sehingga rambut    |\n");
    printf("\t\t\t|                              menjadi berkilau dan warna tahan lama                                 |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 130.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}

void KeteranganLayanan7(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                          < COLOR RESET >                                           |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|   Mengatur kembali warna pada rambut anda dan membuang warna sebelumnya sehingga penampilan warna  |\n");
    printf("\t\t\t|                           rambut anda akan menjadi baru dan fhashionable                           |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 145.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}

void KeteranganLayanan8(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                          < PEEK A BOO >                                            |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|   Trend color atau lightening pada bagian bawah rambut sehingga tersembunyi dan akan terlihat      |\n");
    printf("\t\t\t|                           kalau rambut dikibaskan atau di bawa naik ke atas                        |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 3 Hours Rp 170.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}


void KeteranganLayanan9(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                          < MONEY PIECE >                                           |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|    Trend color atau lightening pada frame wajah yang brtujuan untuk membingkai wajah suapaya       |\n");
    printf("\t\t\t|    terlihat sempurna. Disini akan ditampilkan teknik shading untuk menutupi kekurangan wajah       |\n");
    printf("\t\t\t|       atau menampilkan sisi indah wajah. bisa di padukan dengan babylight ataupun balayage.        |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 3 Hours Rp 175.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}

void KeteranganLayanan10(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                          < 3D STEAM SMOOTH BLOW >                                  |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|   Membuat tatanan rambutmu menjadi lurus, halu, natural dan blow yang permanen dengan pilihan      |\n");
    printf("\t\t\t|                                       model blow J, C, S double S                                  |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 120.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}


void KeteranganLayanan11(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                          < STEAM SMOOTH BERLIAN >                                  |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|     teknik pelurusan dengan menggunakan teknologi steam dari steampod dengan penambahan cairan     |\n");
    printf("\t\t\t|       berlian treatment akan membuat rambutmu lurus natural, halus berkilau seperti berlian        |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 135.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}



void KeteranganLayanan12(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                            < KOREAN WAVE >                                         |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|       Menciptakan volume pada rambut dengan wave yang halus, natural, bouncy dan peranen           |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 140.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}



void KeteranganLayanan13(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                               < KERATIN >                                          |\n");
    printf("\t\t\t|                          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                    |\n");
    printf("\t\t\t|      Memperbaiki struktur rambut dan membuat rambut menjadi lebih kuat, lebih halus, mengurangi    |\n");
    printf("\t\t\t|    resiko rambut patah dan sehat kembali. sangat cocok dipakai untuk rambut rusak yang tidak bisa  |\n");
    printf("\t\t\t|                                 di service dengan proses kimia lagi                                |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 125.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}


void KeteranganLayanan14(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                          < OPPA PERM >                                             |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|  Teknik texture rambut untuk pria, pembentukan perm yang bertujuan membuat rambut cowok bervolume  |\n");
    printf("\t\t\t|                         atau blow permanen yang membuat rambut cowok rapi.                         |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 135.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}


void KeteranganLayanan15(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                          < HAIR ANTI AGING >                                       |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|    Penanganan rambut rusak yang masih bisa dikerjakan proses kimia dengan bantuan treatment hair   |\n");
    printf("\t\t\t|   anti aging sehingga rambut-rambut rusak yang megar bisa dibuatkan blow permanen dengan perpaduan |\n");
    printf("\t\t\t|                               hair anti aging dengan 3D steam smooth blow                          |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 200.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}


void KeteranganLayanan16(void){
	printf("\t\t\t|****************************************************************************************************|\n");
    printf("\t\t\t|                                              < MAKE UP >                                           |\n");
    printf("\t\t\t|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("\t\t\t|               Mempercantik wajah anda dengan menambahkan nuansa yang mempesona dan elegan          |\n");
    printf("\t\t\t|                                                                                                    |\n");
    printf("\t\t\t|                                     | 2 Hours Rp 150.000,- |                                       |\n");
    printf("\t\t\t|****************************************************************************************************|\n");
}

