// am_darts_apartment.ysc @ L75191
bool func_939(var uParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  iVar1 = 0;
  while (iVar1 <= 2)
  {
    if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1 /*26*/]))
    {
      if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT((*uParam0)[iVar1 /*26*/]))
      {
        ENTITY::DETACH_ENTITY((*uParam0)[iVar1 /*26*/], true, true);
      }
      else
      {
        OBJECT::DELETE_OBJECT(uParam0[iVar1 /*26*/]);
        iVar0++;
      }
    }
    iVar1++;
  }
  return iVar0 >= 3;
}