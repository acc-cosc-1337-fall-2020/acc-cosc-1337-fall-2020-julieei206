#include "dna.h"

double get_gc_content(const string & dna)
{
   double G_count = 0;
   double C_count = 0;
   for (int i = 0; i < dna.length(); i++)
   {
       if (dna[i] == 'G')
           G_count++;
       if (dna[i] == 'C')
           C_count++;
   }
   return (G_count + C_count) / dna.length();
}

string get_dna_complement(string dna)
{
   string rev_dna = reverse_string(dna);
   for (int i = 0; i < rev_dna.length(); i++)
   {
       switch (rev_dna[i])
       {
           case 'A':
               rev_dna[i] = 'T';
               break;
           case 'T':
               rev_dna[i] = 'A';
               break;
           case 'C':
               rev_dna[i] = 'G';
               break;
           case 'G':
               rev_dna[i] = 'C';
               break;
       }
   }
   return rev_dna;
}

string reverse_string(string dna)
{
   string revDNA = "";
   for (int i = dna.length() - 1; i >= 0; i--)
       revDNA += dna[i];
   return revDNA;
}

