// agency_heist3a.ysc @ L106324
int func_598(int iParam0, struct<3> Param1, char* sParam4, char* sParam5)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (!PED::IS_PED_INJURED(iParam0))
  {
    iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param1, sParam5);
    iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
    if (!iVar0 == 0)
    {
      if (iVar0 == iVar1)
      {
        iVar2 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
        iVar3 = MISC::GET_HASH_KEY(sParam4);
        if (iVar2 != 0)
        {
          if (iVar2 == iVar3)
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}