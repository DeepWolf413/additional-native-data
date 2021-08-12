// act_bankrobbery01.ysc @ L2505
bool func_40(var uParam0)
{
  if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
  {
    uParam0->f_14 = 6;
    return true;
  }
  if (!func_29(PLAYER::PLAYER_PED_ID(), 0))
  {
    uParam0->f_14 = 3;
    return true;
  }
  if (!func_29(func_66(uParam0->f_2), 0))
  {
    uParam0->f_14 = 4;
    return true;
  }
  return false;
}