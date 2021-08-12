// business_battles.ysc @ L170820
int func_1941(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return 0;
  }
  if (PED::IS_PED_IN_ANY_HELI(*iParam0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(*iParam0, false);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_1942(&iVar0))
    {
      iVar1 = VEHICLE::_GET_ENTITY_ATTACHED_TO_CARGOBOB(iVar0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar1))
      {
        return 1;
      }
    }
  }
  return 0;
}