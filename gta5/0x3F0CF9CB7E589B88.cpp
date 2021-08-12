// director_mode.ysc @ L7767
int func_97(struct<2> Param0, var uParam2)
{
  int iVar0;
  struct<3> Var1;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  iVar0 = HUD::_GET_NORTH_RADAR_BLIP();
  Var1 = { HUD::GET_BLIP_COORDS(iVar0) };
  fVar4 = (Var1.x - Param0);
  fVar5 = (Var1.f_1 - Param0.f_1);
  fVar6 = MISC::ATAN((fVar4 / fVar5));
  iVar7 = SYSTEM::ROUND(fVar6);
  return iVar7;
}