// act_bankrobbery01.ysc @ L22064
bool func_587(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  if (!func_1043(iParam1, iParam2))
  {
  }
  else if (!ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_552[iParam1], func_1061(0)))
  {
    if (!func_226(Global_35, 1369124074))
    {
      TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_552[iParam1], func_1061(0), func_1023(iParam2), 1069379748 /* Float: 1.48f */, iParam3, iParam4, iParam5, -1082130432 /* Float: -1f */);
    }
  }
  else
  {
    return true;
  }
  return false;
}