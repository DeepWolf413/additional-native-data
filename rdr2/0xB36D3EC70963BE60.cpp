// beat_outlaw_transport.ysc @ L4171
int func_110(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = 0;
  while (iVar0 < 6)
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_818))
    {
      iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_818, iVar0);
      if (iVar1 == iParam0)
      {
      }
      else if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
      {
        if (VEHICLE::_0xB36D3EC70963BE60(iLocal_818, iVar1))
        {
          return iVar1;
        }
      }
      iVar0++;
      return 0;
    }
  }
}