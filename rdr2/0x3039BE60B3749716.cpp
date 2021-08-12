// winter1.ysc @ L90657
int func_2529()
{
  iLocal_903 = 0;
  while (iLocal_903 <= 6)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(Local_256[iLocal_903 /*12*/]) && !func_422(Local_256[iLocal_903 /*12*/].f_1))
    {
      Local_256[iLocal_903 /*12*/] = OBJECT::CREATE_OBJECT(Local_256[iLocal_903 /*12*/].f_4, Local_256[iLocal_903 /*12*/].f_1, true, true, false, false, true);
      func_2927(Local_256[iLocal_903 /*12*/], INTERIOR::_GET_INTERIOR_MINIMAP_HASH(INTERIOR::GET_INTERIOR_AT_COORDS(Local_256[iLocal_903 /*12*/].f_1)));
      if (Local_256[iLocal_903 /*12*/] == 0)
      {
      }
    }
    iLocal_903++;
  }
  return 1;
}