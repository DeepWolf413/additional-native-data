// bjack_sp.ysc @ L35255
void func_1185(var uParam0, int iParam1, int iParam2, int iParam3)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_15[iParam2]))
  {
    OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_15[iParam2]));
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/][iParam2]))
  {
    AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
  }
  uParam0->f_112[iParam1 /*194*/].f_20[iParam2] = iParam3;
  uParam0->f_112[iParam1 /*194*/].f_15[iParam2] = uParam0->f_112[iParam1 /*194*/][iParam2];
  uParam0->f_112[iParam1 /*194*/].f_25[iParam2] = 0f;
  uParam0->f_112[iParam1 /*194*/][iParam2] = 0;
  uParam0->f_112[iParam1 /*194*/].f_5[iParam2] = 0;
  uParam0->f_112[iParam1 /*194*/].f_10[iParam2] = 0;
}