// long_update.ysc @ L42062
void func_1338(int iParam0)
{
  if (func_575(179))
  {
    return;
  }
  else if (Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
  {
    return;
  }
  else if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
  {
    return;
  }
  else if (func_1947(iParam0))
  {
    return;
  }
  if (((MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37) && MAP::IS_BLIP_ON_MINIMAP(Global_1347702[iParam0 /*49*/].f_37)) && BUILTIN::VDIST2(func_609(iParam0), Global_36) < 10000f) && func_1234())
  {
    func_625(179, Global_1347702[iParam0 /*49*/].f_37, 0);
  }
}