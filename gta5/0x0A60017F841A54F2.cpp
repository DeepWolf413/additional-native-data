// fm_bj_race_controler.ysc @ L321397
void func_4463(var uParam0, var uParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (func_4464(uParam1) || func_258(Global_4194305.f_5))
  {
    return;
  }
  if (func_262(uParam0))
  {
    iVar0 = uParam0->f_546 + 1;
  }
  else
  {
    iVar0 = uParam0->f_546;
  }
  iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
  iVar2 = uParam0->f_583;
  if (func_255(uParam0))
  {
    iVar2 *= 3;
  }
  MISC::SCRIPT_RACE_INIT(uParam0->f_727, iVar2, iVar0, iVar1);
}