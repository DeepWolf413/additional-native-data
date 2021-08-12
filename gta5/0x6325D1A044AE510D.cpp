// arena_carmod.ysc @ L251596
void func_2158(int iParam0, int iParam1)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
    {
      VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
    }
    func_797(iParam0, &(Global_2519908[iParam1 /*106*/]));
    if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
    {
      func_1492(&iParam0, &(Global_2519908[iParam1 /*106*/].f_9), &(Global_2519908[iParam1 /*106*/].f_59));
    }
    func_2159(iParam1, &(Global_2519908[iParam1 /*106*/]));
  }
}