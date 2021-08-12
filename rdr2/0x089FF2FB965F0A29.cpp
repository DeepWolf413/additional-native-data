// shop_horse_shop.ysc @ L41434
void func_1290(var uParam0, int iParam1)
{
  vector3 vVar0;

  vVar0 = { func_1288(uParam0) };
  if (iParam1 != 0)
  {
    if (func_393(PLAYER::PLAYER_PED_ID(), -1273030092))
    {
      return;
    }
    if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
    {
      PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, -1);
    }
    TASK::_TASK_VEHICLE_DRIVE_TO_POINT(PLAYER::PLAYER_PED_ID(), iParam1, vVar0, 1.5f, 0f, 524419);
  }
  else
  {
    if (func_393(PLAYER::PLAYER_PED_ID(), 2106541073))
    {
      return;
    }
    TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 1f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
  }
}