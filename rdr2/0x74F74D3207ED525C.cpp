// ambush_bnd_cliff1.ysc @ L8089
void func_295(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
  int iVar0;

  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (MAP::DOES_BLIP_EXIST(*iParam1))
    {
      MAP::REMOVE_BLIP(iParam1);
    }
    iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
    if (MAP::DOES_BLIP_EXIST(iVar0))
    {
      MAP::REMOVE_BLIP(&iVar0);
    }
    *iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
    if (iParam3 != 0)
    {
      MAP::_BLIP_SET_MODIFIER(*iParam1, iParam3);
    }
    if (iParam4 != 0)
    {
      MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
    }
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
    {
      MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
    }
  }
}