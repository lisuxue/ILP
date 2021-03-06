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

extern struct ILP_Class4 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointColore_class,
    &ILP_object_y_field,
    "color",
    2}}
};

struct ILP_Class4 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointColore",
    3,
    &ILP_object_color_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__longueur_2,
     ilp__m1_6,
     }}}
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
      ILP_Object ilptmp195;
      ILP_Object ilptmp196;
      {
	ILP_Object ilptmp197;
	ilptmp197 = self1;
	if (ILP_IsA (ilptmp197, Point))
	  {
	    ilptmp195 = ilptmp197->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp195 = ILP_UnknownFieldError ("x", ilptmp197);
	  }
      }
      {
	ILP_Object ilptmp198;
	ilptmp198 = self1;
	if (ILP_IsA (ilptmp198, Point))
	  {
	    ilptmp196 = ilptmp198->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp196 = ILP_UnknownFieldError ("y", ilptmp198);
	  }
      }
      return ILP_Plus (ilptmp195, ilptmp196);
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
      ILP_Object ilptmp199;
      ILP_Object ilptmp200;
      {
	ILP_Object ilptmp201;
	ILP_Object ilptmp202;
	ilptmp201 = z4;
	{
	  ILP_Object ilptmp203;
	  ilptmp203 = self3;
	  if (ILP_IsA (ilptmp203, Point))
	    {
	      ilptmp202 = ilptmp203->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp202 = ILP_UnknownFieldError ("x", ilptmp203);
	    }
	}
	ilptmp199 = ILP_Times (ilptmp201, ilptmp202);
      }
      {
	ILP_Object ilptmp204;
	ILP_Object ilptmp205;
	ilptmp204 = t5;
	{
	  ILP_Object ilptmp206;
	  ilptmp206 = self3;
	  if (ILP_IsA (ilptmp206, Point))
	    {
	      ilptmp205 = ilptmp206->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp205 = ILP_UnknownFieldError ("y", ilptmp206);
	    }
	}
	ilptmp200 = ILP_Times (ilptmp204, ilptmp205);
      }
      return ILP_Plus (ilptmp199, ilptmp200);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp207;
    {
      ILP_Object ilptmp208;
      ILP_Object ilptmp209;
      ILP_Object ilptmp210;
      ILP_Object ilptmp211;
      ilptmp209 = ILP_Integer2ILP (11);
      ilptmp210 = ILP_Integer2ILP (22);
      ilptmp211 = ILP_String2ILP ("red");
      ilptmp208 = ILP_MakeInstance (PointColore);
      ilptmp208->_content.asInstance.field[0] = ilptmp209;
      ilptmp208->_content.asInstance.field[1] = ilptmp210;
      ilptmp208->_content.asInstance.field[2] = ilptmp211;
      ilptmp207 = ilptmp208;
    }

    {
      ILP_Object pc7 = ilptmp207;
      {
	ILP_Object ilptmp212;
	{
	  ILP_Object ilptmp213;
	  ILP_Object ilptmp214;
	  ilptmp213 = pc7;
	  ilptmp214 = ILP_Integer2ILP (823);
	  if (ILP_IsA (ilptmp213, Point))
	    {
	      ilptmp212 = ilptmp213->_content.asInstance.field[1] = ilptmp214;
	    }
	  else
	    {
	      ilptmp212 = ILP_UnknownFieldError ("y", ilptmp213);
	    }
	}
	{
	  ILP_Object ilptmp215;
	  ilptmp215 = pc7;
	  if (ILP_IsA (ilptmp215, Point))
	    {
	      ilptmp212 = ilptmp215->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp212 = ILP_UnknownFieldError ("y", ilptmp215);
	    }
	}
	return ilptmp212;
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
