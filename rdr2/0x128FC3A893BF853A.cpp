// long_update.ysc @ L7785
void func_250(int iParam0, int iParam1, vector3 vParam2, bool bParam5)
{
  if (!func_588(iParam0))
  {
    return;
  }
  if (func_587(vParam2))
  {
    return;
  }
  if (!func_47(iParam1))
  {
    return;
  }
  Global_1934182[iParam0 /*18*/].f_1 = { vParam2 };
  Global_1934182[iParam0 /*18*/].f_5 = func_311(1, iParam0, 2, func_808(iParam0));
  Global_1934182[iParam0 /*18*/] = iParam1;
  if (bParam5)
  {
    Global_1934182[iParam0 /*18*/].f_7 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_809(iParam0), func_810(iParam0), func_811(iParam0), func_812(iParam0));
    VOLUME::_0x128FC3A893BF853A(Global_1934182[iParam0 /*18*/].f_7);
  }
  switch (iParam0)
  {
    case 2:
      func_813(170);
      break;
  }
}