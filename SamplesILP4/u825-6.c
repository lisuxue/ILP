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
ILP_Object ilp__m2_8 (ILP_Closure ilp_useless, ILP_Object self7);

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
     ilp__m2_8,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointColore_class,
    "m2",
    1,				/* arité */
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
      ILP_Object ilptmp238;
      ILP_Object ilptmp239;
      {
	ILP_Object ilptmp240;
	ilptmp240 = self1;
	if (ILP_IsA (ilptmp240, Point))
	  {
	    ilptmp238 = ilptmp240->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp238 = ILP_UnknownFieldError ("x", ilptmp240);
	  }
      }
      {
	ILP_Object ilptmp241;
	ilptmp241 = self1;
	if (ILP_IsA (ilptmp241, Point))
	  {
	    ilptmp239 = ilptmp241->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp239 = ILP_UnknownFieldError ("y", ilptmp241);
	  }
      }
      return ILP_Plus (ilptmp238, ilptmp239);
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
      ILP_Object ilptmp242;
      ILP_Object ilptmp243;
      {
	ILP_Object ilptmp244;
	ILP_Object ilptmp245;
	ilptmp244 = z4;
	{
	  ILP_Object ilptmp246;
	  ilptmp246 = self3;
	  if (ILP_IsA (ilptmp246, Point))
	    {
	      ilptmp245 = ilptmp246->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp245 = ILP_UnknownFieldError ("x", ilptmp246);
	    }
	}
	ilptmp242 = ILP_Times (ilptmp244, ilptmp245);
      }
      {
	ILP_Object ilptmp247;
	ILP_Object ilptmp248;
	ilptmp247 = t5;
	{
	  ILP_Object ilptmp249;
	  ilptmp249 = self3;
	  if (ILP_IsA (ilptmp249, Point))
	    {
	      ilptmp248 = ilptmp249->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp248 = ILP_UnknownFieldError ("y", ilptmp249);
	    }
	}
	ilptmp243 = ILP_Times (ilptmp247, ilptmp248);
      }
      return ILP_Plus (ilptmp242, ilptmp243);
    }
  }
}

ILP_Object
ilp__m2_8 (ILP_Closure ilp_useless, ILP_Object self7)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self7;

  {
    return ILP_Integer2ILP (824);
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp250;
    {
      ILP_Object ilptmp251;
      ILP_Object ilptmp252;
      ILP_Object ilptmp253;
      ILP_Object ilptmp254;
      ilptmp252 = ILP_Integer2ILP (820);
      ilptmp253 = ILP_Integer2ILP (5);
      ilptmp254 = ILP_String2ILP ("red");
      ilptmp251 = ILP_MakeInstance (PointColore);
      ilptmp251->_content.asInstance.field[0] = ilptmp252;
      ilptmp251->_content.asInstance.field[1] = ilptmp253;
      ilptmp251->_content.asInstance.field[2] = ilptmp254;
      ilptmp250 = ilptmp251;
    }

    {
      ILP_Object pc9 = ilptmp250;
      {
	ILP_general_function ilptmp255;
	ILP_Object ilptmp256;
	ILP_Object ilptmp257;
	ILP_Object ilptmp258;
	ilptmp256 = pc9;
	ilptmp257 = ILP_Integer2ILP (1);
	ilptmp258 = ILP_Integer2ILP (1);
	ilptmp255 = ILP_find_method (ilptmp256, &ILP_object_m1_method, 3);
	return ilptmp255 (NULL, ilptmp256, ilptmp257, ilptmp258);
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
