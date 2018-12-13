#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp14;
    ilptmp14 = ILP_Integer2ILP (5);

    {
      ILP_Object x1 = ilptmp14;
      {
	ILP_Object ilptmp15;
	while (1)
	  {
	    ILP_Object ilptmp16;
	    {
	      ILP_Object ilptmp17;
	      ILP_Object ilptmp18;
	      ilptmp17 = x1;
	      ilptmp18 = ILP_Integer2ILP (0);
	      ilptmp16 = ILP_GreaterThan (ilptmp17, ilptmp18);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp16))
	      {
		{
		  ILP_Object ilptmp19;
		  {
		    ILP_Object ilptmp20;
		    {
		      ILP_Object ilptmp21;
		      ILP_Object ilptmp22;
		      ilptmp21 = x1;
		      ilptmp22 = ILP_Integer2ILP (1);
		      ilptmp20 = ILP_Minus (ilptmp21, ilptmp22);
		    }
		    ilptmp19 = (x1 = ilptmp20);
		  }
		  {
		    ILP_Object ilptmp23;
		    {
		      ILP_Object ilptmp24;
		      ILP_Object ilptmp25;
		      ilptmp24 = x1;
		      ilptmp25 = ILP_Integer2ILP (2);
		      ilptmp23 = ILP_Equal (ilptmp24, ilptmp25);
		    }
		    if (ILP_isEquivalentToTrue (ilptmp23))
		      {
			continue;

		      }
		    else
		      {
			{
			  ILP_Object ilptmp26;
			  ilptmp26 = x1;
			  ilptmp19 = ILP_print (ilptmp26);
			}

		      }
		  }
		  (void) ilptmp19;
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp15 = ILP_FALSE;
	ilptmp15 = x1;
	return ilptmp15;
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
