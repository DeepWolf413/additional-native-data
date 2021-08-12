// bjack_launch_sp.ysc @ L2109
void func_66(var uParam0, int iParam1, bool bParam2)
{
  uParam0->f_240[iParam1 /*24*/] = 0;
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_240[iParam1 /*24*/].f_5)) && uParam0->f_240[iParam1 /*24*/].f_3 != -1)
  {
    func_152(uParam0, iParam1, bParam2);
  }
  if (bParam2)
  {
    func_153(uParam0, iParam1);
  }
  StringCopy(&(uParam0->f_240[iParam1 /*24*/].f_5), "", 64);
  uParam0->f_240[iParam1 /*24*/].f_3 = -1;
  uParam0->f_240[iParam1 /*24*/].f_23 = 0f;
  if (uParam0->f_240[iParam1 /*24*/].f_15)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iParam1 /*24*/].f_4))
    {
      ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_240[iParam1 /*24*/].f_4, 0);
    }
  }
  uParam0->f_240[iParam1 /*24*/].f_15 = 0;
  uParam0->f_240[iParam1 /*24*/].f_14 = 0;
  func_154(&(uParam0->f_240[iParam1 /*24*/].f_4), 1, 1);
  uParam0->f_240[iParam1 /*24*/].f_4 = 0;
}