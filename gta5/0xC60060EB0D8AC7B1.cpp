// heli_gun.ysc @ L7091
void func_146(bool bParam0)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_340) && !ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
  {
    iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_340);
    switch (iVar0)
    {
      case joaat("avenger"):
        VEHICLE::_SET_VEHICLE_TURRET_UNK(iLocal_340, 0, bParam0);
        VEHICLE::_SET_VEHICLE_TURRET_UNK(iLocal_340, 1, bParam0);
        VEHICLE::_SET_VEHICLE_TURRET_UNK(iLocal_340, 2, bParam0);
        break;
    }
  }
}