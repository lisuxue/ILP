#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;
ILP_Object makeVector;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp45;
    {
      ILP_Object ilptmp46;
      ILP_Object ilptmp47;
      ilptmp46 = ILP_Integer2ILP (2);
      ilptmp47 = ILP_String2ILP ("bonbon");
      ilptmp45 = ILP_make_vector (ilptmp46, ilptmp47);
    }

    {
      ILP_Object v21 = ilptmp45;
      {
	ILP_Object ilptmp48;
	ilptmp48 = v21;
	return ILP_print (ilptmp48);
      }

    }
  }

}

static ILP_Object
ilp_caught_program ()
{
  struct ILP_catcher *current_catcher = ILP_current_catcher;
  struct ILP_catcher new_catcher;

  if (0 == setjmp (new_catcher._jmp_buf))
    {
      ILP_establish_catcher (&new_catcher);
      return ilp_program ();
    };
  return ILP_current_exception;
}

int
main (int argc, char *argv[])
{
  ILP_START_GC;
  ILP_print (ilp_caught_program ());
  ILP_newline ();
  return EXIT_SUCCESS;
}
