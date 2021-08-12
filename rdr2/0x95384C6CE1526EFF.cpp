// bjack_sp.ysc @ L33353
void func_1145(int iParam0, int iParam1)
{
  if (iParam0 < 0 || iParam0 >= 32)
  {
    return;
  }
  if (Global_1058888.f_42784[iParam0 /*12*/].f_6 == iParam1)
  {
    return;
  }
  Global_1058888.f_42784[iParam0 /*12*/].f_6 = iParam1;
  HUD::_SET_MP_GAMER_TAG_SECONDARY_ICON(Global_1058888.f_42784[iParam0 /*12*/].f_2, iParam1);
}