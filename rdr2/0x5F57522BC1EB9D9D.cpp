// bjack_sp.ysc @ L33339
void func_1144(int iParam0, int iParam1, bool bParam2)
{
  if (iParam0 < 0 || iParam0 >= 32)
  {
    return;
  }
  if (Global_1058888.f_42784[iParam0 /*12*/].f_4 == iParam1 && !bParam2)
  {
    return;
  }
  Global_1058888.f_42784[iParam0 /*12*/].f_4 = iParam1;
  HUD::_SET_MP_GAMER_TAG_TOP_ICON(Global_1058888.f_42784[iParam0 /*12*/].f_2, iParam1);
}