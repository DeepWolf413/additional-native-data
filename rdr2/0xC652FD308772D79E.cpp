// act_caunc_rustling.ysc @ L45797
bool func_1236(var uParam0)
{
  if (MISC::IS_BULLET_IN_AREA(uParam0->f_613, uParam0->f_636, false))
  {
    return true;
  }
  if ((TASK::_0x8785E6E40C7A8819(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && func_223(PLAYER::PLAYER_PED_ID(), uParam0->f_613, 1) < 20f)
  {
    return true;
  }
  return false;
}