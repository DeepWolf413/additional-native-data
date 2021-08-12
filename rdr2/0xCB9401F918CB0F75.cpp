// act_caunc_rustling.ysc @ L45853
void func_1238(var uParam0)
{
  if (func_1620())
  {
    PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdSmack", true, 50);
  }
  else
  {
    PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdWhip", true, 50);
  }
  func_238(&(uParam0->f_441));
  func_639(&(uParam0->f_401[0 /*17*/]), 0, 0);
  uParam0->f_637 = (uParam0->f_636 + 20f);
  uParam0->f_400 = 2;
}