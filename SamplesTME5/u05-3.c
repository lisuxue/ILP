#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;
ILP_Object newline;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp27;
    ILP_Object ilptmp28;
    ilptmp27 = ILP_Integer2ILP (1);
    ilptmp28 = ILP_Integer2ILP (3);

    {
      ILP_Object a1 = ilptmp27;
      ILP_Object b2 = ilptmp28;
      {
	ILP_Object ilptmp29;
	while (1)
	  {
	    ILP_Object ilptmp30;
	    {
	      ILP_Object ilptmp31;
	      ILP_Object ilptmp32;
	      ilptmp31 = a1;
	      ilptmp32 = b2;
	      ilptmp30 = ILP_LessThan (ilptmp31, ilptmp32);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp30))
	      {
		{
		  ILP_Object ilptmp33;
		  {
		    ILP_Object ilptmp34;
		    ilptmp34 = a1;
		    ilptmp33 = ILP_print (ilptmp34);
		  }
		  {
		    ILP_Object ilptmp35;
		    ilptmp35 = b2;
		    ilptmp33 = ILP_print (ilptmp35);
		  }
		  {
		    ILP_Object ilptmp36;
		    {
		      ILP_Object ilptmp37;
		      ILP_Object ilptmp38;
		      ilptmp37 = a1;
		      ilptmp38 = ILP_Integer2ILP (1);
		      ilptmp36 = ILP_Plus (ilptmp37, ilptmp38);
		    }
		    ilptmp33 = (a1 = ilptmp36);
		  }
		  while (1)
		    {
		      ILP_Object ilptmp39;
		      ilptmp39 = ILP_TRUE;
		      if (ILP_isEquivalentToTrue (ilptmp39))
			{
			  break;

			}
		      else
			{
			  break;

			}
		    }
		  ilptmp33 = ILP_FALSE;
		  {
		    ILP_Object ilptmp40;
		    ilptmp40 = ILP_String2ILP ("sortie while2");
		    ilptmp33 = ILP_print (ilptmp40);
		  }
		  {
		    ilptmp33 = ILP_newline ();
		  }
		  (void) ilptmp33;
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp29 = ILP_FALSE;
	{
	  ILP_Object ilptmp41;
	  ilptmp41 = b2;
	  ilptmp29 = ILP_print (ilptmp41);
	}
	return ilptmp29;
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
