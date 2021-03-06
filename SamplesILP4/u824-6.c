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
ILP_Object ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1);
ILP_Object ilp__m1_6 (ILP_Closure ilp_useless, ILP_Object self3,
		      ILP_Object z4, ILP_Object t5);

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
     ilp__longueur_2,
     ilp__m1_6,
     }}}
};

struct ILP_Method ILP_object_longueur_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "longueur",
    1,				/* arité */
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

ILP_GenerateClass (5);
extern struct ILP_Class5 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;
ILP_Object ilp__m2_9 (ILP_Closure ilp_useless, ILP_Object self7,
		      ILP_Object x8);

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointColore_class,
    &ILP_object_y_field,
    "color",
    2}}
};

struct ILP_Class5 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointColore",
    3,
    &ILP_object_color_field,
    5,
    {ILPm_print,
     ILPm_classOf,
     ilp__longueur_2,
     ilp__m1_6,
     ilp__m2_9,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointColore_class,
    "m2",
    2,				/* arité */
    4				/* offset */
    }}
};

ILP_Object
ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    {
      ILP_Object ilptmp216;
      ILP_Object ilptmp217;
      {
	ILP_Object ilptmp218;
	ilptmp218 = self1;
	if (ILP_IsA (ilptmp218, Point))
	  {
	    ilptmp216 = ilptmp218->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp216 = ILP_UnknownFieldError ("x", ilptmp218);
	  }
      }
      {
	ILP_Object ilptmp219;
	ilptmp219 = self1;
	if (ILP_IsA (ilptmp219, Point))
	  {
	    ilptmp217 = ilptmp219->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp217 = ILP_UnknownFieldError ("y", ilptmp219);
	  }
      }
      return ILP_Plus (ilptmp216, ilptmp217);
    }
  }
}

ILP_Object
ilp__m1_6 (ILP_Closure ilp_useless,
	   ILP_Object self3, ILP_Object z4, ILP_Object t5)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self3;
  ilp_CurrentArguments[1] = z4;
  ilp_CurrentArguments[2] = t5;

  {
    {
      ILP_Object ilptmp220;
      ILP_Object ilptmp221;
      {
	ILP_Object ilptmp222;
	ILP_Object ilptmp223;
	ilptmp222 = z4;
	{
	  ILP_Object ilptmp224;
	  ilptmp224 = self3;
	  if (ILP_IsA (ilptmp224, Point))
	    {
	      ilptmp223 = ilptmp224->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp223 = ILP_UnknownFieldError ("x", ilptmp224);
	    }
	}
	ilptmp220 = ILP_Times (ilptmp222, ilptmp223);
      }
      {
	ILP_Object ilptmp225;
	ILP_Object ilptmp226;
	ilptmp225 = t5;
	{
	  ILP_Object ilptmp227;
	  ilptmp227 = self3;
	  if (ILP_IsA (ilptmp227, Point))
	    {
	      ilptmp226 = ilptmp227->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp226 = ILP_UnknownFieldError ("y", ilptmp227);
	    }
	}
	ilptmp221 = ILP_Times (ilptmp225, ilptmp226);
      }
      return ILP_Plus (ilptmp220, ilptmp221);
    }
  }
}

ILP_Object
ilp__m2_9 (ILP_Closure ilp_useless, ILP_Object self7, ILP_Object x8)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self7;
  ilp_CurrentArguments[1] = x8;

  {
    {
      ILP_Object ilptmp228;
      ILP_Object ilptmp229;
      ilptmp228 = ILP_Integer2ILP (823);
      ilptmp229 = x8;
      return ILP_Plus (ilptmp228, ilptmp229);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp230;
    {
      ILP_Object ilptmp231;
      ILP_Object ilptmp232;
      ILP_Object ilptmp233;
      ILP_Object ilptmp234;
      ilptmp232 = ILP_Integer2ILP (11);
      ilptmp233 = ILP_Integer2ILP (22);
      ilptmp234 = ILP_String2ILP ("red");
      ilptmp231 = ILP_MakeInstance (PointColore);
      ilptmp231->_content.asInstance.field[0] = ilptmp232;
      ilptmp231->_content.asInstance.field[1] = ilptmp233;
      ilptmp231->_content.asInstance.field[2] = ilptmp234;
      ilptmp230 = ilptmp231;
    }

    {
      ILP_Object pc10 = ilptmp230;
      {
	ILP_general_function ilptmp235;
	ILP_Object ilptmp236;
	ILP_Object ilptmp237;
	ilptmp236 = pc10;
	ilptmp237 = ILP_Integer2ILP (1);
	ilptmp235 = ILP_find_method (ilptmp236, &ILP_object_m2_method, 2);
	return ilptmp235 (NULL, ilptmp236, ilptmp237);
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
