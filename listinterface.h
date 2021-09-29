/*********************************************************/
/*                                                       */
/* listinterface.h                                       */
/*                                                       */
/*********************************************************/

#ifndef _listinterface
#define _listinterface

#include "globals.h"
#include "list.h"

extern status insert_int( list *ptr_L , int n  ) ;

extern status delete_int( list *ptr_L , int *n ) ;

extern status append_int( list *ptr_L , int n  ) ;

#endif
