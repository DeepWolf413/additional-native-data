// am_mp_arcade_claw_crane.ysc @ L83985
int func_618(int iParam0)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    iVar0 = 0;
    while (iVar0 <= (14 - 1))
    {
      if (ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0) == Local_270.f_25[iVar0])
      {
        return iVar0;
      }
      iVar0++;
    }
  }
  return -1;
}