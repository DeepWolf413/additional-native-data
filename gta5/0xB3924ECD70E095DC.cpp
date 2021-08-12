// act_cinema.ysc @ L85058
void func_479(int iParam0, int iParam1)
{
  int iVar0;
  bool bVar1;
  
  if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
  {
    VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
    iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
    bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
    VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
    if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
    {
      return;
    }
    if (iVar0 == -1)
    {
      VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
    }
    else
    {
      VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1 == 1);
    }
  }
}