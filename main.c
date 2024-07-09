#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "conio.h"

void rotate_cube(cube_type cube, int side, int direction){
    int i,j,vartemp;
    if(direction == CLOCKWISE){
        vartemp = cube[side][0][0];
        cube[side][0][0] = cube[side][2][0];
        cube[side][2][0] = cube[side][2][2];
        cube[side][2][2] = cube[side][0][2];
        cube[side][0][2] = vartemp;

        vartemp = cube[side][0][1];
        cube[side][0][1] = cube[side][1][0];
        cube[side][1][0] = cube[side][2][1];
        cube[side][2][1] = cube[side][1][2];
        cube[side][1][2] = vartemp;
    }
    else{
        vartemp = cube[side][0][0];
        cube[side][0][0] = cube[side][0][2];
        cube[side][0][2] = cube[side][2][2];
        cube[side][2][2] = cube[side][2][0];
        cube[side][2][0] = vartemp;

        vartemp = cube[side][0][1];
        cube[side][0][1] = cube[side][1][2];
        cube[side][1][2] = cube[side][2][1];
        cube[side][2][1] = cube[side][1][0];
        cube[side][1][0] = vartemp;
    }
    switch(side){
        case 0: // Top movement
            if(direction == CLOCKWISE){
                for(i=0;i<N;i++){
                    vartemp = cube[1][0][i];
                    for(j=1;j<=N;j++){
                        cube[j][0][i] = cube[j+1][0][i];
                    }
                    cube[4][0][i] = vartemp;
                }
            }
            else {
                for(i=0;i<N;i++){
                    vartemp = cube[4][0][i];
                    for(j=4;j>1;j--){
                        cube[j][0][i] = cube[j-1][0][i];
                    }
                    cube[1][0][i] = vartemp;

                }
            }
            break;
        case 5: // Down movement
            if(direction == CLOCKWISE){
                for(i=0;i<N;i++){
                    vartemp = cube[4][2][i];
                    for(j=4;j>1;j--){
                        cube[j][2][i] = cube[j-1][2][i];
                    }
                    cube[1][2][i] = vartemp;
                }
            }
            else {
                for(i=0;i<N;i++){
                    vartemp = cube[1][2][i];
                    for(j=1;j<=N;j++){
                        cube[j][2][i] = cube[j+1][2][i];
                    }
                    cube[4][2][i] = vartemp;

                }
            }
            break;
        case 1:// Left movement
            if(direction==CLOCKWISE){
                for(i=0;i<N;i++){
                    vartemp=cube[2][i][0];
                    cube[2][i][0]=cube[0][i][0];
                    cube[0][i][0]=cube[4][N-1-i][N-1];
                    cube[4][N-1-i][N-1]=cube[5][i][0];
                    cube[5][i][0]=vartemp;
                }

            }
            else {
                for(i=0;i<N;i++){
                    vartemp=cube[2][i][0];
                    cube[2][i][0]=cube[5][i][0];
                    cube[5][i][0]=cube[4][N-1-i][N-1];
                    cube[4][N-1-i][N-1]=cube[0][i][0];
                    cube[0][i][0]=vartemp;
                }
            }
            break;
        case 2: // Front movement
            if(direction==CLOCKWISE){
                for(i=0;i<N;i++){
                    vartemp=cube[3][i][0];
                    cube[3][i][0]=cube[0][N-1][i];
                    cube[0][N-1][i]=cube[1][N-1-i][N-1];
                    cube[1][N-1-i][N-1]=cube[5][0][N-1-i];
                    cube[5][0][N-1-i]=vartemp;
                }

            }
            else {
                for(i=0;i<N;i++){
                    vartemp=cube[3][i][0];
                    cube[3][i][0]=cube[5][0][N-1-i];
                    cube[5][0][N-1-i]=cube[1][N-1-i][N-1];
                    cube[1][N-1-i][N-1]=cube[0][N-1][i];
                    cube[0][N-1][i]=vartemp;
                }
            }
            break;
        case 3: // Right movement
            if(direction==CLOCKWISE){
                for(i=0;i<N;i++){
                    vartemp=cube[4][i][0];
                    cube[4][i][0]=cube[0][N-1-i][N-1];
                    cube[0][N-1-i][N-1]=cube[2][N-1-i][N-1];
                    cube[2][N-1-i][N-1]=cube[5][N-1-i][N-1];
                    cube[5][N-1-i][N-1]=vartemp;
                }

            }
            else {
                for(i=0;i<N;i++){
                    vartemp=cube[4][i][0];
                    cube[4][i][0]=cube[5][N-1-i][N-1];
                    cube[5][N-1-i][N-1]=cube[2][N-1-i][N-1];
                    cube[2][N-1-i][N-1]=cube[0][N-1-i][N-1];
                    cube[0][N-1-i][N-1]=vartemp;
                }
            }
            break;



            case 4: // Back movement
            if(direction==CLOCKWISE){
                for(i=0;i<N;i++){
                    vartemp=cube[1][i][0];
                    cube[1][i][0]=cube[0][0][N-i-1];
                    cube[0][0][N-i-1]=cube[3][N-i-1][N-1];
                    cube[3][N-i-1][N-1]=cube[5][N-1][i];
                    cube[5][N-1][i]=vartemp;
                }
            }
            else {
                for(i=0;i<N;i++){
                    vartemp=cube[1][i][0];
                    cube[1][i][0]=cube[5][N-1][i];
                    cube[5][N-1][i]=cube[3][N-i-1][N-1];
                    cube[3][N-i-1][N-1]=cube[0][0][N-i-1];
                    cube[0][0][N-i-1]=vartemp;
                }
            }
            break;


    }
}
int rubix_face(char name_face){

    switch(name_face){
        case U: return 0;
        case L: return 1;
        case F: return 2;
        case R: return 3;
        case B: return 4;
        case D: return 5;
    }
}
void launch_rotate_cube(cube_type cube,char name_face,char direction){
    int int_direction,side;
    side = rubix_face(name_face);
    if(direction==CLOCKWISE){
        int_direction = 0;
    }
    else{
        int_direction = 1;
    }
    rotate_cube(cube,side,int_direction);
}


int rubix_color(int side){

    switch(side){
        case 0: return WHITE;
        case 1: return ORANGE;
        case 2: return GREEN;
        case 3: return RED;
        case 4: return BLUE;
        case 5: return YELLOW;
    }
}
void printf_colored(int side){

    switch(side){

        case 0:
            c_textcolor(15);
            printf("W  ");
            break;
        case 1:
            c_textcolor(12);
            printf("R  ");
            break;
        case 2:
            c_textcolor(1);
            printf("B  ");
            break;
        case 3:
            c_textcolor(4);
            printf("O  ");
            break;
        case 4:
            c_textcolor(2);
            printf("G  ");
            break;
        case 5:
            c_textcolor(14);
            printf("Y  ");
            break;
    }
}

void init_side(side_type side, int color){
    int i,j;

    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            side[i][j]=color;
    //side[i][j]=i*N+j+1;
}
void init_cube(cube_type cube){
    int i;
    for(i=0;i<SIDES;i++)
        init_side(cube[i],i);
}

void print_side2(side_type side){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("   ");
        for(j=0;j<N;j++)
            printf_colored(side[i][j]);
        printf("\n");
    }
}
void print_cube2(cube_type cube){

    int i,j,side;

    //print_side2(cube[0]); /*Print face blanche, face numéro 0
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("   ");
        for(j=0;j<N;j++)
            printf_colored(cube[0][i][j]);
        printf("\n");
    }

    for(i=0;i<N;i++){
        for(side=1;side<SIDES-1;side++)
            for(j=0;j<N;j++)
                printf_colored(cube[side][i][j]);
        printf("\n");
    }
    //print_side2(cube[5]); /*Print face jaune, face numéro 5
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("   ");
        for(j=0;j<N;j++)
            printf_colored(cube[5][i][j]);
        printf("\n");
    }
    printf("\n");

}


int rand(void);
void shuffle_cube_random(cube_type cube){
    int i,rotation_side,rotation_direction;

    for(i=0;i<93;i++){
        rotation_side = rand()%6;
        rotation_direction = rand()%2;
        rotate_cube(cube,rotation_side,rotation_direction);
    }
}
int find_white_edge(cube_type cube){
    int s,i,j;
    for(s=0;s<SIDES;s++){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(cube[s][i][j]== 0){
                    return s,i,j;
                    break;
                }
            }
        }
    }
}
void white_cross(cube_type cube){
    int s,i,j;
    int run = 1;
    while(cube[0][2][1]!= 0 || cube[2][0][1]!=2 || cube[0][1][0]!= 0 || cube[1][0][1]!=1 || cube[0][0][1]!= 0 || cube[5][2][1]!=5 || cube[0][1][2]!= 0 || cube[3][0][1]!=3){
        shuffle_cube_random(cube);
    }



  /*
    while(run==1){
        printf("oo");
        run++;
    }*/
    //printf("%d",cube[0][1][2]);
}
int main() {
    int j;
    cube_type cube;
    init_cube(cube);

    //shuffle_cube_random(cube);
    white_cross(cube);
    //launch_rotate_cube(cube, U, CLOCKWISE); // Direction 0 = normal et Direction = 1 = '
    print_cube2(cube);
    return 0;
}