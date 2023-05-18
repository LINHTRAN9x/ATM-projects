#include <stdio.h>

int main() {
    int pincode;
    char luachon;
    int sodu = 10000000;

    do {
        printf("Xin vui long nhap ma pin (4 so) vao day: ");
        scanf("%d", &pincode);

        if (pincode == 5555) {
            printf("Quy khach da dang nhap thanh cong. Vui long chon cac so duoi day.\n");
            printf("MENU\n");
            printf("1. Rut tien\n");
            printf("2. Nap tien\n");
            printf("3. Chuyen tien\n");
            printf("4. Kiem tra so du\n");

            int choise;
            printf("Nhap lua chon cua ban: ");
            scanf("%d", &choise);

            switch (choise) {
                case 1: {
                    int ruttien;
                    printf("So du trong tai khoan la 10,000,000 VND. Nhap so tien muon rut: ");
                    scanf("%d", &ruttien);
                    if (ruttien <= sodu) {
                        sodu -= ruttien;
                        printf("Quy khach da rut thanh cong %d VND. So du trong tai khoan la %d VND\n", ruttien, sodu);
                    } else {
                        printf("So du trong tai khoan khong du de rut tien.\n");
                    }
                    break;
                }
                case 2: {
                    int naptien;
                    printf("So du trong tai khoan la 10,000,000 VND. Nhap so tien muon nap: ");
                    scanf("%d", &naptien);
                    sodu += naptien;
                    printf("Quy khach da nap thanh cong %d VND. So du trong tai khoan la %d VND\n", naptien, sodu);
                    break;
                }
                case 3: {
                    int chuyentien;
                    int z=0,q=0;
                    char chon;
                    do {
                        printf("Nhap (9 so) tai khoan cua nguoi nhan: ");
                        scanf("%d", &z);
                        if (z == 123456789) {
                            printf("Thanh cong.Tai khoan 12345678(Nguyen Van A).\n");
                            printf("1.Dong y chuyen tien\n");
                            printf("2.Tu choi chuyen tien\n");
                            scanf(" %d", &q);
                            if (q == 1) {
                                printf("So du trong tai khoan la 10,000,000 VND. Nhap so tien muon chuyen: ");
                                scanf("%d", &chuyentien);
                                if (chuyentien <= sodu) {
                                    sodu -= chuyentien;
                                    printf("Quy khach da chuyen thanh cong %d VND thanh cong. So du trong tai khoan hien tai la %d VND\n",
                                           chuyentien, sodu);
                                } else {
                                    printf("So du khong du de chuyen tien.\n");
                                }
                                break;
                            } else {
                                printf("Chuyen tien bi tu choi.\n");
                                break;
                            }
                        } else {
                            printf("Khong tim thay tai khoan nao.\n");
                        }
                        printf("Quy khach co muon tro lai chuyen tien khong? (Y/N): ");
                        scanf(" %c", &chon);
                    } while (chon == 'Y' || chon == 'y');
                    break;
                }
                case 4:
                    printf("So du trong tai khoan cua quy khach la: %d VND\n", sodu);
                    break;
                default:
                    printf("Lua chon khong hop le\n");
                    break;
            }
        } else {
            printf("Quy khach da nhap sai ma pin. Vui long thu lai.\n");
        }

        printf("Quy khach co muon tro lai khong? (Y/N): ");
        scanf(" %c", &luachon);
    } while (luachon == 'Y' || luachon == 'y');


}
