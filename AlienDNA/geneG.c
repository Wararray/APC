//Gene Generator
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void setSweetWater(float percent, float amostral, int greatTotal);
void setCreature(int choice);
int randomic(int n);

//GENE_WORDS_CONSTANTS

    //Habitat
    const   char   AIR[]         = {"AAT"};
    const   char   SWEET_WATER[] = {"ATACG"};
    const   char   SALT_WATER[]  = {"ATAGC"};
    const   char   SWAMP[]       = {"TTTATACG"};
    const   char   DESERT[]      = {"TTTAAT"};
    const   char   FLOREST[]     = {"TTT"};
    const   char   POLAR[]       = {"ATACGAAT"};
    const   char   FIRE[]        = {"TAA"};

    //Phobia
    const   char   F_AIR[]       = {"GTGTAAT"};
    const   char   F_FIRE[]      = {"GTGTTAA"};
    const   char   F_WATER[]     = {"GTGTATA"};
    const   char   F_EARTH[]     = {"GTGTTTT"};
    

    //Affinity
    const   char   A_AIR[]       = {"TGTGAAT"};
    const   char   A_FIRE[]      = {"TGTGTAA"};
    const   char   A_WATER[]     = {"TGTGATA"};
    const   char   A_EARTG[]     = {"TGTGTTT"};
    

    //Particulars
    const   char   P1[]          = {"1"};
    const   char   P2[]          = {"2"};
    const   char   P3[]          = {"3"};
    const   char   P4[]          = {"4"};
    const   char   P5[]          = {"5"};
    const   char   P6[]          = {"6"};
    const   char   P7[]          = {"7"};

    //Not Coding
    const   char   u1_1[]        = {"U"};
    const   char   u2_1[]        = {"UA"};
    const   char   u2_2[]        = {"UG"};
    const   char   u3_1[]        = {"UAU"};
    const   char   u3_2[]        = {"UGU"};
    const   char   u4_1[]        = {"UATU"};
    const   char   u4_2[]        = {"UGCU"};
    const   char   u5_1[]        = {"UGCTU"};
    const   char   u5_2[]        = {"AAAAA"};
    const   char   u5_3[]        = {"GGGGG"};



int main()
{
    setCreature(1); //Capture what creature I want to create
    // destroyPartsOfGene();
    return 0;    
}


void setCreature(int choice)
{
    choice = 1;

    switch(choice){
        case 1: //Sweet Water
            setSweetWater(0.6,100.0,100);
            break;
        case 2: //Salt Water
//            setSaltWater();
            break;
        case 3: //Glacial
//            setGlacial();
            break;
        case 4: //Air
//            setAir();
            break;
        case 5: //Florest
//            seFlorest();
            break;
        case 6: //Swamp
//            setSwamp();
            break;
        case 7: //Desert
//            setDesert();
            break;
        case 8: //Fire
//            setFire();
            break;
    }
}

// The first two Parameters are for the First Check Decision;
// The Third is for "Great count amount"
//Please, use easy values =]
void setSweetWater(float percent, float amostral, int greatTotal)
{

//    printf("setSweerWater::begin");
//    getchar();
    int   geneQuantity  =  percent*amostral;
    int   geneMaster    =  0;
    int   geneOther     =  0;
    int   geneAway      =  0;
    int   geneRight     =  0;
    int   random        =  0; 
    int   done          =  0;
    int intersection = 0;
    char finalGene[(8*(int)amostral)+1];

int i = 0;
//    printf("setSweerWater::before While done == 0\n");
    while ( done == 0 ) 
    {
        
        // random: 1 (Afin) or 2(Phob)
        random = randomic(2); //range of 1 or 2
//        printf("setSweerWater::after first_random\n");
        //getchar();
//        printf("%d\n", random);
        if (random == 1)
        {
            //random: 1(Afin) or 2(intersection)
            random = randomic(2); //range of 1 or 2
            printf("setSweerWater::after second_random\n");
//            getchar();
//            printf("%d\n", random);
        
            if( (random == 1) && (geneMaster <= geneQuantity) )
             {
//                printf("setSweerWater::inside IF\n");
//                getchar();
                strcat(finalGene,A_WATER);  //PUTAFIN
//                printf("%s\n", finalGene);
//                getchar();
                strcat(finalGene,P1);       //CHOOSE CHAR  - Make Randon
//                printf("%s\n", finalGene);
//                getchar();
                strcat(finalGene,A_WATER);  //PUTAFIN
                geneMaster++;
                printf("%s\n", finalGene);
                printf("Gene Master: %d\n", geneMaster);

//                getchar();

             }
             else if( intersection <= greatTotal )
             {
//                printf("setSweerWater::inside ELSE\n");
//                getchar();
                strcat(finalGene,F_WATER);  //PUTAFobia
//               printf("%s\n", finalGene);
//                getchar();
                strcat(finalGene,P2);       //CHOOSE CHAR  - Make Randon
//                printf("%s\n", finalGene);
//                getchar();
                strcat(finalGene,A_WATER);  //PUTAFIN
                printf("%s\n", finalGene);
                printf("intersection: %d\n", intersection);

//                getchar();
                intersection++;
             } 

            //Put_GeneAway;
                //Gene_away++
        }
        /*
        //
        else
        {
            // random: 1(PHOBIA) or 2(intersection)
            random = randomic(2); //range of 1 or 2
            if( (random == 1) && (geneOther <= (1-percent)*geneQuantity) )
             {
                //PUT PHOBIA
                //CHOOSE CHAR
                //PUT PHOBIA
                geneOther++;
             }
             else
             {
                //PUT AFIN
                //CHOOSE CHAR
                //PUT PHOBIA
             }   
            //put_geneRigh
                //put_geneRight++;               
        }*/
        i++;
        printf("%d\n", i );
        if ( ( ((geneOther + geneMaster) == (amostral)) && (geneRight + geneAway) == (greatTotal) ) || (i > 10000))
               done = 1;

    }

    // Less Hydrofobic  ????
    // Or               ???? 
    // More Affinity    ????
    // 
    printf("%s\n", finalGene);

}

int randomic(int n)
{
    srand (time(NULL));
    int random_number = rand() % n + 1;
    return random_number;
}

