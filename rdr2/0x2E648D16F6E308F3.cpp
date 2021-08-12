// mob3.ysc @ L35441
bool func_768(var uParam0)
{
  int iVar0;

  VEHICLE::_0xCF9DA72002FC16BF(Global_35, iLocal_1134[0], 47);
  if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("TROLLEY01X")))
  {
    return false;
  }
  TASK::_TASK_INTIMIDATED_2(Local_665[0 /*9*/], Global_35, 0, 0, 0, 1, 0, 0, 0);
  TASK::_TASK_INTIMIDATED_2(Local_665[1 /*9*/], Global_35, 0, 0, 0, 1, 0, 0, 0);
  TASK::_TASK_INTIMIDATED_2(Local_665[2 /*9*/], Global_35, 0, 0, 0, 1, 0, 0, 0);
  if (func_120(uParam0, 4))
  {
    iVar0 = 0;
    while (iVar0 < 10)
    {
      func_1256(Local_702[iVar0 /*9*/], func_223(4, iVar0), 2, 1073741824 /* Float: 2f */);
      iVar0++;
    }
    PHYSICS::BREAK_ENTITY_GLASS(iLocal_1134[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1134[0], -1.4666f, 1.1279f, 2.4439f), 0.5f, -1.4666f, 1.1279f, 2.4439f, 1500f, 0, true);
    PHYSICS::BREAK_ENTITY_GLASS(iLocal_1134[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1134[0], 1.5989f, -0.7598f, 2.4963f), 0.75f, 1.5989f, -0.7598f, 2.4963f, 1500f, 0, true);
  }
  func_1257(-1, 1);
  func_1259(func_1258(4, 15) + Vector(1f, 0f, 0f));
  CLOCK::SET_CLOCK_TIME(12, 0, 0);
  return uParam0->f_607 == uParam0->f_607;
}