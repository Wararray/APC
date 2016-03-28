//Gene Generator
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    // setCreature(); Capture what creature I want to create
    return 0;    
}


/*    setCreature()
{
        
        switch()
            case 1: //Sweet Water
                setSweetWater();
                break;
            case 2: //Salt Water
                setSaltWater();
                break;
            case 3: //Glacial
                setGlacial();
                break;
            case 4: //Air
                setAir();
                break;
            case 5: //Florest
                seFlorest();
                break;
            case 6: //Swamp
                setSwamp();
                break;
            case 7: //Desert
                setDesert();
                break;
            case 8: //Fire
                setFire();
                break;
    }
*/

    //Please, use easy values =]
    char[] setSweetWater(float percent, float amostral)
    {
    
        int geneQuantity = percent*amostral;
        int geneMaster   = 1;
        int geneOther    = 1;
        int random       = 0; 
        int done         = 0;
        char[] finalGene;

        while ( done == 0 ) 
        {
            //randomic seed: 1 (Afin) or 2(Phob)
            if (seed == 1)
            {
                //randomic seed: 1(Afin) or 2(intersection)
                if (seed == 1)
                 {
                    //PUTAFIN
                    //CHOOSE CHAR
                    //PUT AFIN
                    geneMaster++
                 }
                 else
                 {
                    //PUT PHOBIA
                    //CHOOSE CHAR
                    //PUT AFIN
                 } 
            }
            //
            else
            {
                //randomic seed: 1(PHOBIA) or 2(intersection)
                if (seed == 1)
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
            
               if ( (geneOther + geneMaster) == (amostral) )
                   done = 1;
            }
        }

        // Less Hydrofobic  ????
        // Or               ???? 
        // More Affinity    ????
        // 

    }

