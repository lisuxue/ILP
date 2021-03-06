#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (4);
extern struct ILP_Class4 ILP_object_Point_class;
extern struct ILP_Field ILP_object_x_field;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__m2_3 (ILP_Closure ilp_useless, ILP_Object self1,
		      ILP_Object u2);
ILP_Object ilp__m1_7 (ILP_Closure ilp_useless, ILP_Object self4,
		      ILP_Object z5, ILP_Object t6);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    NULL,
    "x",
    0}}
};

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    &ILP_object_x_field,
    "y",
    1}}
};

struct ILP_Class4 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    2,
    &ILP_object_y_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__m2_3,
     ilp__m1_7,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m2",
    2,				/* arité */
    2				/* offset */
    }}
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m1",
    3,				/* arité */
    3				/* offset */
    }}
};

ILP_Object
ilp__m2_3 (ILP_Closure ilp_useless, ILP_Object self1, ILP_Object u2)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = u2;

  {
    {
      ILP_Object ilptmp104;
      ILP_Object ilptmp105;
      {
	ILP_general_function ilptmp106;
	ILP_Object ilptmp107;
	ILP_Object ilptmp108;
	ILP_Object ilptmp109;
	ilptmp107 = self1;
	ilptmp108 = u2;
	ilptmp109 = u2;
	ilptmp106 = ILP_find_method (ilptmp107, &ILP_object_m1_method, 3);
	ilptmp104 = ilptmp106 (NULL, ilptmp107, ilptmp108, ilptmp109);
      }
      ilptmp105 = ILP_Integer2ILP (1);
      return ILP_Plus (ilptmp104, ilptmp105);
    }
  }
}

ILP_Object
ilp__m1_7 (ILP_Closure ilp_useless,
	   ILP_Object self4, ILP_Object z5, ILP_Object t6)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self4;
  ilp_CurrentArguments[1] = z5;
  ilp_CurrentArguments[2] = t6;

  {
    {
      ILP_Object ilptmp110;
      ILP_Object ilptmp111;
      {
	ILP_Object ilptmp112;
	ILP_Object ilptmp113;
	ilptmp112 = z5;
	{
	  ILP_Object ilptmp114;
	  ilptmp114 = self4;
	  if (ILP_IsA (ilptmp114, Point))
	    {
	      ilptmp113 = ilptmp114->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp113 = ILP_UnknownFieldError ("x", ilptmp114);
	    }
	}
	ilptmp110 = ILP_Times (ilptmp112, ilptmp113);
      }
      {
	ILP_Object ilptmp115;
	ILP_Object ilptmp116;
	ilptmp115 = t6;
	{
	  ILP_Object ilptmp117;
	  ilptmp117 = self4;
	  if (ILP_IsA (ilptmp117, Point))
	    {
	      ilptmp116 = ilptmp117->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp116 = ILP_UnknownFieldError ("y", ilptmp117);
	    }
	}
	ilptmp111 = ILP_Times (ilptmp115, ilptmp116);
      }
      return ILP_Plus (ilptmp110, ilptmp111);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp118;
    {
      ILP_Object ilptmp119;
      ILP_Object ilptmp120;
      ILP_Object ilptmp121;
      ilptmp120 = ILP_Integer2ILP (3);
      ilptmp121 = ILP_Integer2ILP (4);
      ilptmp119 = ILP_MakeInstance (Point);
      ilptmp119->_content.asInstance.field[0] = ilptmp120;
      ilptmp119->_content.asInstance.field[1] = ilptmp121;
      ilptmp118 = ilptmp119;
    }

    {
      ILP_Object point8 = ilptmp118;
      {
	ILP_general_function ilptmp122;
	ILP_Object ilptmp123;
	ILP_Object ilptmp124;
	ilptmp123 = point8;
	ilptmp124 = ILP_Integer2ILP (2);
	ilptmp122 = ILP_find_method (ilptmp123, &ILP_object_m2_method, 2);
	return ilptmp122 (NULL, ilptmp123, ilptmp124);
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
