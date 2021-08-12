// am_mp_arcade.ysc @ L326414
void func_5162(int iParam0, var uParam1, int iParam2, int iParam3)
{
  int iVar0;
  char* sVar1;
  
  if (iParam0 != -1)
  {
    iVar0 = iParam3;
    if (func_5165(iParam0))
    {
      iVar0 = iParam2;
    }
    sVar1 = func_5164(iParam0);
    if (INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
      {
        if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
        {
          INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1);
          func_5163(iParam0, uParam1, 1);
        }
        else
        {
          func_5163(iParam0, uParam1, 1);
        }
      }
    }
    else if (func_5165(iParam0))
    {
    }
  }
}