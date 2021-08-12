// bjack_sp.ysc @ L10721
void func_360(int iParam0)
{
  if (Global_1058888.f_42784[iParam0 /*12*/].f_8 != 0)
  {
    Global_1058888.f_42784[iParam0 /*12*/].f_8 = 0;
    if (HUD::IS_MP_GAMER_TAG_ACTIVE(Global_1058888.f_42784[iParam0 /*12*/].f_2))
    {
      HUD::_SET_MP_GAMER_TAG_TYPE(Global_1058888.f_42784[iParam0 /*12*/].f_2, 0);
    }
    func_841(iParam0);
  }
}