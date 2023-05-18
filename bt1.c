#include <stdio.h>

main() {

    int pincode, luachon;
    do {
        printf("Nhap ma pin 4 so vao :");
        scanf("%d", &pincode);

        if (pincode == 5555) {
            printf("Quy khach da dang nhap thanh cong.Vui long chon cac so duoi day.");
            printf("\nMENU");
            printf("\n1.Rut tien");
            printf("\n2.Nap tien");
            printf("\n3.Chuyen tien");
            printf("\n4.Kiem tra so du");
            int choise;
            int sodu = 10000000;
            printf("\nNhap lua chon cua ban :");
            scanf("%d", &choise);


            switch (choise) {
                case 1:
                    int ruttien, a;
                    printf("So du trong tai khoan la 10000000vnd.Nhap so tien muon rut :");
                    scanf("%d", &ruttien);
                    a = sodu - ruttien;
                    printf("Quy khach da rut %d vnd.So du trong tai khoan la %d vnd", ruttien, a);
                    break;
                case 2:
                    int naptien, b;
                    printf("So du trong tai khoan la 10000000vnd.Nhap so tien muon nap :");
                    scanf("%d", &naptien);
                    b = sodu + naptien;
                    printf("Quy khach da nap %d vnd.So du trong tai khoan la %d vnd", naptien, b);
                    break;
                case 3:
                    int chuyentien, c;
                    printf("So du trong tai khoan la 10000000vnd.Nhap so tien muon chuyen :");
                    scanf("%d", &chuyentien);
                    c = sodu - chuyentien;
                    printf("Quy khach da chuyen %d vnd thanh cong.So du trong tai khoan hien tai la %d", chuyentien, c);
                    break;
                case 4:
                    int;

                    printf("So du trong tai khoan cua quy khach la :%d vnd", sodu);
                    break;
                default:
                    printf("Lua chon khong hop le");
                    break;

            }
        } else {
            printf("Quy khach da nhap sai ma pin.Vui long thu lai.");
        }
            printf("ban co muon quay lai lua chon khong ?(Y?N) :");
            scanf(" %c", &luachon);

    } while (luachon == 'Y' || luachon == 'y');

}


