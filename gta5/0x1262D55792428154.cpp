// act_cinema.ysc @ L95459
void func_694(int iParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 8)
  {
    if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0 + 1))
    {
      VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, false);
    }
    iVar0++;
  }
  if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("bodhi2")))
  {
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
  }
  if (((((((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("chino")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("voltic"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buccaneer"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buccaneer2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("chino2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("faction"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("faction2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("mamba")))
  {
    if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
    {
      VEHICLE::SET_CONVERTIBLE_ROOF(iParam0, true);
    }
    if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("mamba")))
    {
      VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
    }
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
  }
}