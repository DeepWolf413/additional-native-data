// business_battles.ysc @ L200759
int func_2778(struct<3> Param0, struct<3> Param3, float fParam6)
{
  struct<3> Var0;
  struct<3> Var3;
  int iVar6;
  
  Var0 = { func_2792(Param0, Param3) };
  Var3 = { func_2781(Param0, Param3) };
  iVar6 = HUD::_ADD_BLIP_FOR_AREA(Var0, fParam6, func_2780(Var3));
  if (HUD::DOES_BLIP_EXIST(iVar6))
  {
    HUD::SET_BLIP_ROTATION(iVar6, SYSTEM::ROUND(func_2779(Param0, Param3)));
    return iVar6;
  }
  return iVar6;
}