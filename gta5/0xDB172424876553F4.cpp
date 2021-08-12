// am_mp_island.ysc @ L226412
void func_2727(var uParam0)
{
  if (*uParam0)
  {
    func_179(PLAYER::PLAYER_ID(), 1, 0, 0);
    if (func_17(PLAYER::PLAYER_PED_ID()))
    {
      TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
    }
  }
  func_1193(&Global_1316875, 9);
  *uParam0 = 0;
  uParam0->f_1 = 0;
  func_117(&(uParam0->f_2));
  PLAYER::SET_MAX_WANTED_LEVEL(5);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
}